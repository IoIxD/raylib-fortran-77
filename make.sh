clear 
cd raylib/src
RAYLIB_RELEASE_PATH=../../ make
cd ../../
gfortran -lraylib -lGL -lopenal -lm -pthread -ldl -w src/functions.c src/structures.f examples/window.f -std=legacy -fdec-structure