#include <stdlib.h>
#include <GL/glut.h>
#include <iostream>

// AUTHOR : THE OLD TRAVELLER NETWORK 


// UTILITY FUNCTION TO DRAW A PIXEL FOR ( x , y ) 
void drawPixel( int x , int y ) {
	glColor3f( 1 , 0 , 0 ) ; 
	glBegin( GL_POINTS ) ; 
		glVertex2i( x , y ) ; 
	glEnd() ;
}

// FUNCTION TO PLOT PIXEL ( TO DRAW THE CIRCLE THING ) 
// FOR CYLINDER TO GET THE CURVE EFFECT WE NEED TO SHADE 
// MULTIPLE PIXELS IN VICINITY TO GET IT !!! 
// EASY WAY TO REMEMBER THIS : 
// WRITE CenterX FIRST centerY SECOND 
// FIRST FOUR CALLS WILL HAVE x FIRST AND y SECOND 
// NEXT FOUR CALLS WILL HAVE y FIRST AND x SECOND 
// THEN + , - , + , - , + , - ...... ( 1 PLUS , 1 MINUS ) FOR 
// THE centerX COLUMN 
// AND + , + , - , - , + , + , - , - ( 2 PLUS , 2 MINUS ) FOR 
// THE centerY COLUMN 
void plotPixel( int centerX , int centerY , int x , int y ) {
	drawPixel( centerX + x , centerY + y ) ; 
	drawPixel( centerX - x , centerY + y ) ; 
	drawPixel( centerX + x , centerY - y ) ; 
	drawPixel( centerX - x , centerY - y ) ; 
	drawPixel( centerX + y , centerY + x ) ; 
	drawPixel( centerX - y , centerY + x ) ; 
	drawPixel( centerX + y , centerY - x ) ; 
	drawPixel( centerX - y , centerY - x ) ; 
}

// FUNCTION TO DRAW THE CIRCLE 
// HERE THE PARAMETERS ARE : 
// 	FIRST : x COORDINATE OF THE CENTER OF THE CIRCLE 
// 	SECOND : Y COORDINATE OF CENTER OF THE CIRCLE
// 	THIRD : RADIUS OF THE CIRCLE 
void CircleDraw( int centerX , int centerY , int radius ) {
	int d = 1 - radius ; // TO ROLL AROUND AND COME 
	int x = 0 ; 
	int y = radius ; 

	// THIS PART IS TOTALLY RELATED TO HOW THE PIXELS 
	// CROWD MORE AT THE LEFT AND RIGHT EDGES AND LESS
	// IN THE MIDDLE !! TAKE SOME TIME TO UNDERSTAND THIS !
	while( y > x ) {
		plotPixel( centerX , centerY , x , y ) ; 
		if ( d < 0 ) d += 2*x + 3 ;
		else {
			d += 2*( x - y ) + 5 ;
			y-- ; 
		}
		x++ ; 
	}
	plotPixel( centerX , centerY , x , y ) ; 
}

void CylinderDraw() {
	int centerX = 100 ; 
	int centerY = 100 ; 
	int radius = 50 ; 
	
	// WE WILL RAISE AND DRAW 50 TIMES !! 
	for ( int i = 0 ; i < 50 ; i += 3  ) {
		CircleDraw( centerX , centerY + i , radius ) ; 
	}	
}

// FUNCTION TO DRAW RECTANGLE !! READ FURTHER TO UNDERSTAND 
// WHY RECTANGLE !!!
void drawRectangle( int x1 , int y1 , int x2 , int y2 ,
		    int x3 , int y3 , int x4 , int y4 ) {
	glBegin( GL_LINE_LOOP ) ;
		glVertex2i( x1 , y1 ) ; 
		glVertex2i( x2 , y2 ) ; 
		glVertex2i( x3 , y3 ) ; 
		glVertex2i( x4 , y4 ) ; 
	glEnd() ; 
}

// FUNCTION TO DRAW THE PARALLELOPIPED 
void ParalleloPipedDraw() {
	// A PARALLELOPIPED IS NOTHING BUT THE FIGURE OBTAINED 
	// WHEN THE 2D FIGURE WITH PARALLEL SIDES ARE EXPANDED 
	// IN THE 3D PLANE 
	// IMAGINE ( FOR OUR EXAMPLE ) :
	// 	TRACE A RECTANGLE WITH COORDINATES 
	// 	( x0 , y0 ) , ( x1 , y1 ) , ( x2 , y2 ) , ( x3 , y3 ) 
	// 	NOW,
	// 	DRAW THIS RECTANGLE HERE 
	// 	AND THEN RAISE THIS RECTANGLE ABOVE BY SOME SMALL HEIGHT 
	// 	DRAW IT AGAIN 
	// 	RAISE -> DRAW -> RAISE -> DRAW ........
	// 	
	// 	THIS WILL GENERATE A PARALLELOPIPED WHICH STANDS VERTICAL
	// 	WE CAN ALSO DRAW THE PARALLELOPIPED WITH EQUAL VARIATION
	// 	IN X AND Y COORDINATES SO THAT IT WILL GIVE A SLANTING 
	// 	LOOK WHEN DISPLAYED !! 
	// 	YOU CAN TRY BOTH !! 
	// 	FOR SLANTING ONE : ADD i PARAM IN x VALUES ALSO
	// 	FOR VERTICAL ONE : ADD i PARAM TO ONLY y VALUES !!!
	
	// ASSUME A RECTANGLE LIKE THIS -
	int x1 = 200 , y1 = 100 ; 
	int x2 = 200 + 100 , y2 = 100 ; 
	int x3 = 200 + 100 , y3 = 100 + 100 ; 
	int x4 = 200 , y4 = 100 + 100 ; 

	// LETS RAISE THE RECTANGLE 50-60 TIMES AND DRAW FOR EACH TIME 
	// SAY 60 !!
	
	for ( int i = 0 ; i < 60 ; i++ ) {
		drawRectangle( x1 + i , y1 + i , x2 + i , y2 + i ,  
			       x3 + i , y3 + i , x4 + i , y4 + i ) ; 
	}
}

// TO INITIALIZE SOME MORE STUFF 
void init() {
	// SET UP THE CLEAR COLOR 
	glClearColor( 1 , 1 , 1 , 1 ) ; 
	// THIS COLOR WILL BE SET UP WHENEVER THE WINDOW 
	// IS CLEARED !! WINDOW CLEARING IS A PRETTY HEAVY
	// PROCESS BTW WHEREIN YOU VISIT EACH PIXEL AND 
	// SET THE COLOR TO THE COLOR MENTIONED IN glClearColor() 
	
	// PROJECTION MATRIX 
	glMatrixMode( GL_PROJECTION ) ;
       	glLoadIdentity() ; 	
	gluOrtho2D( 0 , 500 , 0 , 500 ) ; 
	// MAKE IT ( 0 , 600 , 0 , 600 ) ALSO NO ONE STOPPED YOU !! 
	// ITS JUST TO MAKE AN ORTHOGRAPHIC PROJECTION OF WHAT IS VISIBLE 
}	

// THE DISPLAY FUNCTION : REGISTER USING glutDisplayFunc( display ) 
void display( void ) {
	// FIRST AND FOREMOST THING TO DO IS 
	// CLEAR THE BUFFER !! IF USING THE COLOR BUFFER 
	// PUT glClear( GL_COLOR_BUFFER_BIT ) ; 
	// IF USING THE DEPTH BUFFER TOO 
	// PUT AN OR FUNCTION FOR THE ENUMS 
	// glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ) ; 
	glClear( GL_COLOR_BUFFER_BIT ) ; 
	
	// CHOOSE SOME COLOR TO DRAW THE SHAPE !! 
	// I WILL TAKE BLUE : RGB( 0 , 0 , 1 ) 
	glColor3f( 0 , 0 , 1 ) ; 

	// INITIALIZE THE POINT SIZE !! HOW BIG IS THE RENDERED PIXELS 
	glPointSize( 2.0 ) ; 

	// NOW EVERYTHING TO DRAW HAS BEEN SETUP !! 
	// FIRST LET'S DRAW THE PARALLELOPIPED 
	ParalleloPipedDraw() ; 

	glPointSize( 2.0 ) ; 
	// NOW DRAW THE CYLINDER 
	CylinderDraw() ; 

	glFlush() ; // PUT FOR NO REASON !! 
}

int main( int argc , char **argv ) {
	glutInit( &argc , argv ) ; 
	glutInitDisplayMode( GLUT_SINGLE | GLUT_RGBA ); 
	glutInitWindowPosition( 100 , 100 ) ; 
	glutInitWindowSize( 1000 , 1000 ) ; 
	glutCreateWindow("CYLINDER AND PARALLELOPIPED") ; 
	init() ; 
	glutDisplayFunc( display ) ; 
	
	// THE ABOVE INITIALIZATION WHEN DONE YOU START THE
	// MAIN LOOP IN WHICH THE PROGRAM ACTUALLY STARTS 
	// ALL THE PREVIOUS STATEMENTS ARE THE CONFIGURATIONS 
	// SETTINGS !! 
	// HOWEVER FIRST CREATE THE WINDOW AND THEN CALL THE init() 
	// BECAUSE WE ARE INITIALISING FOR THE WINDOW ONLY 
	// IF DONE REVERSE : THE WINDOW WILL GET CREATED FIRST 
	// AND IT MIGHT BE BLACK !!!
	glutMainLoop() ; 
	return 0 ; 
}	
