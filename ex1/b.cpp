// 1b) Write an open GL to specify points large points on a plane.

#include<GL/glut.h>
void pdisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glColor3f(1.0,1.0,1.0);
	glVertex2f(150.0,180.0);
	glColor3f(1.0,0.0,1.0);
	glVertex2f(180.0,150.0);
	glColor3f(0.0,1.0,1.0);
	glVertex2f(250.0,250.0);
	glEnd();
	glFlush();
}


void init()
{
	glClearColor(0.0,0.0,0.0,1.0);
	glPointSize(5.0);
	gluOrtho2D(500.0,0.0,0.0,500.0);
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500.0,500.0);
	glutInitWindowPosition(0.0,0.0);
	glutCreateWindow("Points Display");
	glutDisplayFunc(pdisplay);
	init();
	glutMainLoop();
    return 0;
}
