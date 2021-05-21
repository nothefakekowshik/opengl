// 4 a) Write an open GL program to draw a white rectangle on a black background.
#include<GL/glut.h>
void rdisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
        glVertex2f(100.0,100.0);
        glVertex2f(150.0,100.0);
        //glVertex2f(150.0,100.0);
        glVertex2f(150.0,200.0);
        //glVertex2f(150.0,200.0);
        glVertex2f(100.0,200.0);
        //glVertex2f(100.0,200.0);
        //glVertex2f(100.0,100.0);
	glEnd();
	glFlush();
}

void init()
{
	glClearColor(0.0,0.0,0.0,1.0);
	glLineWidth(5.0);
	gluOrtho2D(0.0,500.0,0.0,500.0);
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500.0,500.0);
	glutInitWindowPosition(0.0,0.0);
	glutCreateWindow("RECTANGLE");
	glutDisplayFunc(rdisplay);
	init();
	glutMainLoop();
    return 0;
}

