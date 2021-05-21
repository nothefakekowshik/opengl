// Write an open gl program to generate mouse and keyboard events for closing a window.
#include<GL/glut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(250.0,250.0);
	glEnd();
	glFlush();
}

void mice(int button, int state ,int x, int y)
{
	if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
	{
		exit(0);
	}
}

void keyevent(unsigned char key, int x, int y)
{
	if(key=='q'||key=='Q')
	{
		exit(0);
	}
}

void init()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(25.0);
	gluOrtho2D(0.0,500.0,0.0,500.0);
}
int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500.0,500.0);
	glutInitWindowPosition(0.0,0.0);
	glutCreateWindow("events");
	glutMouseFunc(mice);
	glutKeyboardFunc(keyevent);
	glutDisplayFunc(display);
	init();
	glutMainLoop();
    return 0;
}
