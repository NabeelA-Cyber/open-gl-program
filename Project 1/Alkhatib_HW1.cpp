//FILE NAME:HW1
//description:A beginning OpenGL program using C++ and GLUT
//Author:Nabeel Alkhatib
//Date created:8/22/2018
//Date modified:9/2/2018
#include <iostream>
#include <GL\freeglut.h>
using namespace std;

void display()
{
	glClear( GL_COLOR_BUFFER_BIT); 				//clears the drawing buffer
	glColor3f(0.0, 0.9, 1.0); 					//setting up the colors(RGB) of drawing
	glBegin(GL_POLYGON); 						//setting the Polygon mode drawning
  		glVertex2d(2, 4 ); 
  		glVertex2d(4, 4 ); 
  		glVertex2d(4, 6 ); 
  		glVertex2d(2, 6 ); 
 	glEnd();  									//ends the polygon mode
	glFlush();									//displays drawing on screen
}

int main(int argc, char **argv){ 

	glutInit(&argc, argv);							//initializse openGL
	glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB);	//set up displaymode to single buffer and color display
	glutInitWindowPosition(100,100);				//set up window position(x and y)
	glutInitWindowSize(300,300);					//set up window size(width and height)
	glutCreateWindow("Hello GL!");					//create the window and sets title of window
	glClearColor(0.0, 0.0, 0.0, 0.0);			// black background color  
	glOrtho(0.0, 8.0, 0.0, 8.0, -1.0, 1.0);   // setup a 10x10x2 viewing world

	glutDisplayFunc(&display);					//the drawing function to be called by openGL
	glutMainLoop();								//calls the main loop of openGl

   	return EXIT_SUCCESS;
}

