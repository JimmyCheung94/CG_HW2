#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "GL/glut.h"

void drawHexagram() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	const double pi = 3.41592654;//define ¦Ð
	double r = 200;//define radius 

	//draw the 2 triangles 
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.8f, 0.2f);
	glVertex2f(0, r);
	glVertex2f(r * cos(pi / 6), -r/2);
	glVertex2f(-r * cos(pi / 6), -r/2);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(0, -r);
	glVertex2f(r * cos(pi / 6), r/2);
	glVertex2f(-r * cos(pi / 6), r/2);
	glEnd();

	//draw the circle
	glBegin(GL_LINE_STRIP);
	for (int i = 0; i < 360; ++i)
		glVertex2f(r *cos(2 * pi / 360 * i), r * sin(2 * pi / 360 * i));
	glEnd();

	//To draw "1"
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-280, 500);
	glVertex2f(-280, 400);
	glEnd();

	//To draw "2"
	glBegin(GL_LINE_STRIP);
	glVertex2f(-240, 500);
	glVertex2f(-200, 500);
	glVertex2f(-200, 450);
	glVertex2f(-240, 450);
	glVertex2f(-240, 400);
	glVertex2f(-200, 400);
	glEnd();

	//To draw "3"
	glBegin(GL_LINE_STRIP);
	glVertex2f(-160, 500);
	glVertex2f(-120, 500);
	glVertex2f(-120, 450);
	glVertex2f(-160, 450);
	glVertex2f(-120, 450);
	glVertex2f(-120, 400);
	glVertex2f(-160, 400);
	glEnd();

	//To draw "3"
	glBegin(GL_LINE_STRIP);
	glVertex2f(-80, 500);
	glVertex2f(-40, 500);
	glVertex2f(-40, 450);
	glVertex2f(-80, 450);
	glVertex2f(-40, 450);
	glVertex2f(-40, 400);
	glVertex2f(-80, 400);
	glEnd();

	//To draw "0"
	glBegin(GL_LINE_LOOP);
	glVertex2f(0, 500);
	glVertex2f(40, 500);
	glVertex2f(40, 400);
	glVertex2f(0, 400);
	glEnd();

	//To draw "4"
	glBegin(GL_LINE_STRIP);
	glVertex2f(80, 500);
	glVertex2f(80, 450);
	glVertex2f(120, 450);
	glVertex2f(120, 500);
	glVertex2f(120, 400);
	glEnd();

	//To draw "0"
	glBegin(GL_LINE_LOOP);
	glVertex2f(160, 500);
	glVertex2f(200, 500);
	glVertex2f(200, 400);
	glVertex2f(160, 400);
	glEnd();

	//To draw "4"
	glBegin(GL_LINE_STRIP);
	glVertex2f(240, 500);
	glVertex2f(240, 450);
	glVertex2f(280, 450);
	glVertex2f(280, 500);
	glVertex2f(280, 400);
	glEnd();

	glFlush();
}


int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	//init the window
	glutInitWindowSize(300, 450);
	glutCreateWindow("HW2 By 12330404");
	glClearColor(0.0, 0.0, 0.0, 0.0);
	gluOrtho2D(-300.0, 300.0, -300.0, 600.0);

	//run the function 
	glutDisplayFunc(drawHexagram);
	glutMainLoop();
	return 0;

}