// 2b) Write an openGL program to draw lines on a plane and increase the width . 

#include<GL/glut.h>
void ldisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(250.0,250.0);
	glVertex2f(150.0,150.0);
	glColor3f(0.0,1.0,0.0);
	glVertex2f(180.0,250.0);
	glVertex2f(250.0,180.0);
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(450.0,450.0);
	
	glEnd();
	glFlush();
}

void init()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glPointSize(10.0);
	glLineWidth(5.0);
	gluOrtho2D(0.0,500.0,0.0,500.0);
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500.0,500.0);
	glutInitWindowPosition(100.0,100.0);
	glutCreateWindow("Lines");
	glutDisplayFunc(ldisplay);
	init();
	glutMainLoop();
    return 0;
}
