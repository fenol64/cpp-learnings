/*Centro Universitário Carioca - Professora Catiúscia A. B. Borges
 Programa 01 – Computação Gráfica
Este programa exibe um ponto na tela (predefinido) */

/*
import project libs 
-lopengl32
-lfreeglut
-lglu32
*/
#include "glut_import.hpp"

#include <GL\glut.h>


void terreno () {
	glColor3f(0,1,0);
	glBegin(GL_QUADS);
		glVertex2f(0,0);
		glVertex2f(10,0);
		glVertex2f(10,2.5);
		glVertex2f(0,2.5);
	glEnd();

}

void casa() {
	glColor3f(1,1,1);
	glBegin(GL_QUADS);
		glVertex2f(4,2);
		glVertex2f(8,2);
		glVertex2f(8,5);
		glVertex2f(4,5);
	glEnd();
	
		
	glColor3f(0,1,0);
	glBegin(GL_TRIANGLES);
		glVertex2f(3,5);
		glVertex2f(6,8);
		glVertex2f(9,5);
	glEnd();
}

void draw() {
	glClearColor(0,0.75,255, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	terreno();
	casa();
	glFlush(); 
}
int createWindow(int argc, char **argv) {
	glutInit(&argc,argv); 
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	glutInitWindowSize(400,400);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Casinha");
	gluOrtho2D(0,10,0,10); 
	glutDisplayFunc(draw);
	glutMainLoop();
	
	
	return 1;
}
