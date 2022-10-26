#include <GL\glut.h>

void terreno()
{
	glColor3f(0, 1, 0);
	glBegin(GL_QUADS);
	glVertex2f(0, 0);
	glVertex2f(20, 0);
	glVertex2f(20, 2.5);
	glVertex2f(0, 2.5);
	glEnd();
}

void casa()
{
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2f(2, 2);
	glVertex2f(9, 2);
	glVertex2f(9, 5);
	glVertex2f(2, 5);
	glEnd();

	
	glBegin(GL_TRIANGLES);
	glColor3f(0, 0, 0);
	glVertex2f(1, 5);
	glColor3f(0.7, 0.3, 0.3);
	glVertex2f(5.6, 8);
	glColor3f(0.7, 0.3, 0.3);
	glVertex2f(10, 5);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(5, 2);
	glColor3f(0.6, 0.4, 0.2);
	glVertex2f(5, 3.5);
	glColor3f(0.6, 0.4, 0.2);
	glVertex2f(6, 3.5);
	glColor3f(0.6, 0.4, 0.2);
	glVertex2f(6, 2);
	glEnd();

}

void toy () 
{
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	
//	left
	glVertex2i (12, 2);
	glVertex2i (13, 5);  
	glVertex2i (13, 5);  
	glVertex2i (14, 2);
//	top
	glVertex2i (13, 5);
	glVertex2i (16, 5);
//	right
	glVertex2i (15, 2);
	glVertex2i (16, 5);  
	glVertex2i (16, 5);  
	glVertex2i (17, 2);
//	middle
	glVertex2i (14, 3);
	glVertex2i (14,5);
	glVertex2i (15, 3);
	glVertex2i (15,5);
	
	glColor3f(1,0,0);
	glVertex2i (14, 3);
	glVertex2i (15, 3);
	glEnd();	
	
	
}

void sun() 
{
	glColor3f(1, 0.6, 0);
	
	glBegin(GL_QUADS);
	glVertex2f(15, 14);
	glColor3f(1, 1, 0);
	glVertex2f(18, 14);
		glColor3f(1, 1, 0);
	glVertex2f(18, 18);
	
	glVertex2f(15, 18);
	glEnd();	
}

void draw()
{
	glClearColor(0, 0.75, 255, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	sun();
	terreno();
	casa();
	toy();
	glFlush();
}

int createWindow(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 300);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Casinha");
	gluOrtho2D(0, 20, 0, 20);
	glutDisplayFunc(draw);
	glutMainLoop();

	return 1;
}

int main(int argc, char **argv)
{
	createWindow(argc, argv);
	return 1;
}

