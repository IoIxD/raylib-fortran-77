      PROGRAM BASIC_WINDOW
      USE RAYLIB

c     TIME VARIABLE
      REAL E, DTIME, T(2)

c     WINDOW DEFINITIONS
      INTEGER SCREEN_WIDTH, SCREEN_HEIGHT 
      CHARACTER*38 TITLE
      BYTE SHOULD_EXIT

c     COLOR DEFINITIONS
      TYPE(COLOR) COLOR1
      TYPE(COLOR) COLOR2
      TYPE(RECTANGLE) REC
      TYPE(COLOR) BLACK
      REAL R1_R,G1_R,B1_R,R2_R,G2_R,B2_R
      INTEGER R1_I,G1_I,B1_I,R2_I,G2_I,B2_I
      CHARACTER R1,G1,B1,R2,G2,B2
      
c     TEXT DEFINITIONS
      INTEGER TEXT_X, TEXT_Y
      CHARACTER*30 TEXT
      INTEGER TEXT_SIZE

      
c     WINDOW ASSIGNMENTS
      SCREEN_WIDTH = 800
      SCREEN_HEIGHT = 450
      TITLE = 'raylib [core] example - basic window'

c     COLOR ASSIGNMENTS
      CALL RANDOM_NUMBER(R1_R)      
      CALL RANDOM_NUMBER(G1_R)
      CALL RANDOM_NUMBER(B1_R)
      CALL RANDOM_NUMBER(R2_R)
      CALL RANDOM_NUMBER(G2_R)
      CALL RANDOM_NUMBER(B2_R)
      R1_R = R1_R * 255
      G1_R = G1_R * 255
      B1_R = B1_R * 255
      R2_R = R2_R * 255
      G2_R = G2_R * 255
      B2_R = B2_R * 255
      R1 = CHAR(INT(R1_R))
      G1 = CHAR(INT(G1_R))
      B1 = CHAR(INT(B1_R))
      R2 = CHAR(INT(R2_R))
      G2 = CHAR(INT(G2_R))
      B2 = CHAR(INT(B2_R))
      BLACK = COLOR(CHAR(0),CHAR(0),CHAR(0),CHAR(255))
      REC = RECTANGLE(0,0,SCREEN_WIDTH,SCREEN_HEIGHT)

c     TEXT ASSIGNMENTS
      TEXT_SIZE = 32
      TEXT = 'Hello Raylib, from Fortran 77!'
      TEXT_X = SCREEN_WIDTH/4 - 32
      TEXT_Y = SCREEN_HEIGHT/4
c     MAIN PROGRAM

      CALL INIT_WINDOW(SCREEN_WIDTH,SCREEN_HEIGHT,TITLE)

c     MAIN LOOP
      SHOULD_EXIT = WINDOW_SHOULD_CLOSE()
      DO WHILE (SHOULD_EXIT .EQ. 0)
            E = DTIME(T)
            CALL BEGIN_DRAWING()

c           SHIFT COLORS
            R1_R = COLSH(R1_R,T(2))
            R1 = CHAR(INT(R1_R))
            G1_R = COLSH(G1_R,T(2))
            G1 = CHAR(INT(G1_R))
            B1_R = COLSH(B1_R,T(2))
            B1 = CHAR(INT(B1_R))
            R2_R = COLSH(R2_R,T(2))
            R2 = CHAR(INT(R2_R))
            G2_R = COLSH(G2_R,T(2))
            G2 = CHAR(INT(G2_R))
            B2_R = COLSH(B2_R,T(2))
            B2 = CHAR(INT(B2_R))
            COLOR1 = COLOR(R=R1,G=G1,B=B1,A=CHAR(255))
            COLOR2 = COLOR(R=R2,G=G2,B=B2,A=CHAR(255))

c           DRAW CALLS

            CALL CLEAR_BACKGROUND()
            CALL DRAW_RECTANGLE_GRADIENT_EX(
     +            REC,
     +            COLOR1,
     +            COLOR2,
     +            COLOR1,
     +            COLOR2
     +      )
            CALL DRAW_TEXT(TEXT,TEXT_X,TEXT_Y,TEXT_SIZE,BLACK)
            CALL END_DRAWING()

            SHOULD_EXIT = WINDOW_SHOULD_CLOSE()
      ENDDO

      END PROGRAM

      REAL FUNCTION COLSH(R,TIME)
      REAL R, TIME

      IF (TIME .EQ. 0.0) THEN

            R = R + 0.01
      
            IF (R .GE. 255.0) THEN
                  R = 0.0
            ENDIF
            
      ENDIF
      
      COLSH = R
      RETURN 
      END