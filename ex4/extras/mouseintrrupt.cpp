// Write an open gl program to generate a square when mouse is clicked.
#include<GL/glut.h>
GLint x=50;
GLint y=50;
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void drawSquare(int x, int y)
{
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(x+100.0,y+100.0);
	glVertex2f(x+100.0,y+150.0);
	glVertex2f(x+150.0,y+150.0);
	glVertex2f(x+150.0,y+100.0);
	glEnd();
	glFlush();
}

void mousee(int button,int state,int x,int y)
{
	if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
	{
		drawSquare(x,y);
	}
}

void keys(unsigned char key,int x,int y)
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
	gluOrtho2D(0.0,550.0,0.0,550.0);
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitWindowSize(550.0,550.0);
	glutInitWindowPosition(0.0,0.0);
	glutCreateWindow("Objects with events");
	glutMouseFunc(mousee);
	glutKeyboardFunc(keys);
	glutDisplayFunc(display);
	init();
	glutMainLoop();
    return 0;
}
