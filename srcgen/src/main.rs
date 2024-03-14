use std::{fmt::Write, fs::File, io::Write as IoWrite};

use lang_c::{
    ast::{ExternalDeclaration, TypeSpecifier},
    driver::{parse, Config},
};
use regex::Regex;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let config = Config::with_clang();

    let mut structure_str = String::from("      MODULE RAYLIB\n");
    let mut function_str = String::new();
    let mut types_added = vec![];

    let mut next_unsigned = false;
    let caps_regex = Regex::new("([A-Z])").unwrap();

    let includes = std::fs::read_dir("../include/")?;
    for file in includes {
        let file = file?;
        let filename = &file.file_name().into_string().unwrap();
        if !filename.ends_with(".h") || filename == "config.h" {
            continue;
        }
        function_str.write_str(format!("#include <{}>\n", filename).as_str())?;

        let source = format!("../include/{}", filename);

        let p: Result<lang_c::driver::Parse, lang_c::driver::Error> = parse(&config, source);

        match p {
            Ok(p) => {
                let nodes = p.unit.0;
                for node in nodes {
                    match node.node {
                        ExternalDeclaration::Declaration(d) => {
                            for spec in d.node.specifiers {
                                match spec.node {
                                    lang_c::ast::DeclarationSpecifier::TypeSpecifier(t) => {
                                        let (c_type_to_fortran, n) = c_type_to_fortran(
                                            t.node,
                                            next_unsigned,
                                            &mut types_added,
                                        )?;
                                        next_unsigned = n;
                                        if c_type_to_fortran.ends_with("\n")
                                            && c_type_to_fortran != ""
                                        {
                                            structure_str.push_str(c_type_to_fortran.as_str());
                                        }
                                    }
                                    lang_c::ast::DeclarationSpecifier::StorageClass(s) => {}
                                    lang_c::ast::DeclarationSpecifier::TypeQualifier(_) => {}
                                    lang_c::ast::DeclarationSpecifier::Function(_) => {}
                                    lang_c::ast::DeclarationSpecifier::Alignment(_) => {}
                                    lang_c::ast::DeclarationSpecifier::Extension(_) => {}
                                }
                            }
                        }
                        ExternalDeclaration::StaticAssert(_) => todo!(),
                        ExternalDeclaration::FunctionDefinition(f) => {
                            let mut spec_str = String::new();
                            for spec in f.node.specifiers {
                                spec_str += &p.source[spec.span.start..spec.span.end];
                                spec_str += " ";
                            }
                            let h = f.node.declarator.span;
                            let hc = (&p.source[h.start..h.end]).to_string();

                            let parts = hc.split("(").collect::<Vec<&str>>();
                            let fn_name_unaltered = parts.first().unwrap();
                            let mut fn_name = caps_regex
                                .replace_all(fn_name_unaltered, "_$1")
                                .to_string()
                                .to_lowercase()
                                .to_string();
                            if fn_name.starts_with("_") {
                                fn_name = fn_name[1..].to_string();
                            }

                            if fn_name.ends_with("_") {
                                fn_name = fn_name[..fn_name.len() - 1].to_string();
                            }
                            let mut arg_str = *parts.get(1).unwrap();
                            if arg_str.ends_with(")") {
                                arg_str = &arg_str[..arg_str.len() - 1];
                            }
                            let mut arg_names = arg_str
                                .split(",")
                                .filter(|f| !f.is_empty())
                                .filter(|f| !(f == &"void"))
                                .filter(|f| !f.contains("..."))
                                .map(|f| {
                                    let a = &f
                                        .split(" ")
                                        .collect::<Vec<&str>>()
                                        .last()
                                        .unwrap()
                                        .to_string();
                                    if !a.contains("*") && !a.contains("...") {
                                        "*".to_owned() + a
                                    } else {
                                        a.to_string().replace("*", "")
                                    }
                                })
                                .collect::<Vec<String>>()
                                .join(",");

                            let args = arg_str
                                .split(",")
                                .filter(|f| f.contains(" "))
                                .map(|f| {
                                    if !f.contains("*") && !f.contains("...") {
                                        let s = f.split(" ").collect::<Vec<&str>>();
                                        let mut fuck = s[..s.len() - 1].to_vec();
                                        fuck.append(&mut vec!["*", s.last().unwrap()]);
                                        fuck.join(" ")
                                    } else {
                                        f.to_string()
                                    }
                                })
                                .collect::<Vec<String>>()
                                .join(",");
                            if arg_names.ends_with(")") {
                                arg_names = arg_names[..arg_names.len() - 1].to_string();
                            }
                            function_str.write_fmt(format_args!(
                                "{}{}_({}) {{\n\treturn {}({});\n}}\n",
                                spec_str, fn_name, args, fn_name_unaltered, arg_names
                            ))?;
                        }
                    }
                }
            }
            Err(er) => {
                println!("skipping {}: {}", filename, er)
            }
        }
    }

    structure_str.write_str("\n      END MODULE\n")?;

    let mut st = File::create("../src/structures.f")?;
    st.write_all(structure_str.as_bytes())?;

    let mut st = File::create("../src/functions.c")?;
    st.write_all(function_str.as_bytes())?;

    Ok(())
}

fn c_type_to_fortran(
    t: TypeSpecifier,
    next_unsigned: bool,
    types_added: &mut Vec<String>,
) -> Result<(String, bool), Box<dyn std::error::Error>> {
    let mut st = String::new();
    let mut next_unsigned = next_unsigned;
    match t {
        lang_c::ast::TypeSpecifier::Void => st.write_str("INTEGER POINTER")?,
        lang_c::ast::TypeSpecifier::Char => {
            if next_unsigned {
                st.write_str("CHARACTER")?
            } else {
                st.write_str("BYTE")?
            }
        }
        lang_c::ast::TypeSpecifier::Short => st.write_str("INTEGER*2")?,
        lang_c::ast::TypeSpecifier::Int => st.write_str("INTEGER")?,
        lang_c::ast::TypeSpecifier::Long => st.write_str("INTEGER*4")?,
        lang_c::ast::TypeSpecifier::Float => st.write_str("REAL")?,
        lang_c::ast::TypeSpecifier::Double => st.write_str("DOUBLE PRECISION")?,
        lang_c::ast::TypeSpecifier::Unsigned => {
            next_unsigned = true;
            return Ok((st, next_unsigned));
        }
        lang_c::ast::TypeSpecifier::Signed => {
            next_unsigned = false;
            return Ok((st, next_unsigned));
        }
        lang_c::ast::TypeSpecifier::Bool => st.write_str("BYTE")?,
        lang_c::ast::TypeSpecifier::Complex => st.write_str("COMPLEX")?,
        lang_c::ast::TypeSpecifier::Atomic(_) => st.write_str("(ATOMIC)")?,
        lang_c::ast::TypeSpecifier::Struct(s) => {
            if let Some(identifier) = s.node.identifier {
                let id_name = identifier.node.name.to_uppercase();
                if types_added.contains(&id_name) {
                    return Ok((String::new(), next_unsigned));
                }
                let mut field_names = vec![];
                if let Some(fields) = s.node.declarations {
                    for field in fields {
                        match field.node {
                            lang_c::ast::StructDeclaration::Field(f) => {
                                let a = f
                                    .node
                                    .declarators
                                    .into_iter()
                                    .map(|f| match f.node.declarator {
                                        Some(a) => match a.node.kind.node {
                                            lang_c::ast::DeclaratorKind::Abstract => todo!(),
                                            lang_c::ast::DeclaratorKind::Identifier(i) => {
                                                i.node.name
                                            }
                                            lang_c::ast::DeclaratorKind::Declarator(_) => todo!(),
                                        },
                                        None => String::new(),
                                    })
                                    .filter(|f| !f.is_empty());
                                let b: Vec<String> = f
                                    .node
                                    .specifiers
                                    .iter()
                                    .map(|f| match &f.node {
                                        lang_c::ast::SpecifierQualifier::TypeSpecifier(t) => {
                                            let c = c_type_to_fortran(
                                                t.node.clone(),
                                                next_unsigned,
                                                types_added,
                                            )
                                            .unwrap();
                                            next_unsigned = c.1;
                                            c.0
                                        }
                                        lang_c::ast::SpecifierQualifier::TypeQualifier(t) => {
                                            todo!()
                                        }
                                        lang_c::ast::SpecifierQualifier::Extension(t) => todo!(),
                                    })
                                    .filter(|f| !f.is_empty())
                                    .collect();

                                let c: Vec<(String, String)> = a
                                    .into_iter()
                                    .flat_map(|k| b.iter().map(move |v| (v.clone(), k.clone())))
                                    .collect();

                                for (a, b) in c {
                                    field_names.push(format!("{} {}", a, b.to_uppercase()));
                                }
                            }
                            lang_c::ast::StructDeclaration::StaticAssert(_) => todo!(),
                        }
                    }
                }
                st.write_fmt(format_args!("      TYPE {}\n", id_name))?;
                for t in field_names {
                    st.write_fmt(format_args!("            {}\n", t))?;
                }
                st.write_fmt(format_args!("      END TYPE {}\n", id_name))?;
                types_added.push(id_name);
            } else {
                st.write_str("\n")?;
            }
        }
        lang_c::ast::TypeSpecifier::Enum(e) => {
            if let Some(name) = e.node.identifier {
                let name = name.node.name.to_uppercase();
                let mut i = 0;
                for en in e.node.enumerators {
                    if let Some(exp) = en.node.expression {
                        match exp.node {
                            lang_c::ast::Expression::Identifier(_) => todo!(),
                            lang_c::ast::Expression::Constant(_) => todo!(),
                            lang_c::ast::Expression::StringLiteral(_) => todo!(),
                            lang_c::ast::Expression::GenericSelection(_) => todo!(),
                            lang_c::ast::Expression::Member(_) => todo!(),
                            lang_c::ast::Expression::Call(_) => todo!(),
                            lang_c::ast::Expression::CompoundLiteral(_) => todo!(),
                            lang_c::ast::Expression::SizeOfTy(_) => todo!(),
                            lang_c::ast::Expression::SizeOfVal(_) => todo!(),
                            lang_c::ast::Expression::AlignOf(_) => todo!(),
                            lang_c::ast::Expression::UnaryOperator(_) => todo!(),
                            lang_c::ast::Expression::Cast(_) => todo!(),
                            lang_c::ast::Expression::BinaryOperator(_) => todo!(),
                            lang_c::ast::Expression::Conditional(_) => todo!(),
                            lang_c::ast::Expression::Comma(_) => todo!(),
                            lang_c::ast::Expression::OffsetOf(_) => todo!(),
                            lang_c::ast::Expression::VaArg(_) => todo!(),
                            lang_c::ast::Expression::Statement(_) => todo!(),
                        }
                    }
                    st.write_fmt(format_args!(
                        "      INTEGER ENUM_{}_{} {}\n",
                        name,
                        en.node.identifier.node.name.to_uppercase(),
                        i
                    ))?;

                    i += 1;
                }
            }
        }
        lang_c::ast::TypeSpecifier::TypedefName(t) => {
            let name = t.node.name.to_uppercase();
            st.write_fmt(format_args!("TYPE({})", typedef_resolve(name)))?;
        }
        lang_c::ast::TypeSpecifier::TypeOf(a) => match a.node {
            lang_c::ast::TypeOf::Expression(e) => {
                println!("{:?}", e.node);
            }
            lang_c::ast::TypeOf::Type(e) => {
                println!("{:?}", e.node);
            }
        },
        lang_c::ast::TypeSpecifier::TS18661Float(f) => {
            println!("{:?}", f);
        }
    }

    Ok((st, next_unsigned))
}

fn typedef_resolve(st: String) -> String {
    st.replace("TEXTURE2D", "TEXTURE")
        .replace("QUATERNION", "VECTOR4")
}
