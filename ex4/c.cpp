// 4c) Write an open GL program to draw house using polygons on a plane.
#include<GL/glut.h>


void housee()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON);

        glColor3f(1.0,1.0,0.0);
        glVertex2f(100.0,500.0);
        glVertex2f(100.0,100.0);
        glVertex2f(500.0,100.0);
        glVertex2f(500.0,500.0);
        glEnd();
        glBegin(GL_TRIANGLES);
        glColor3f(0.9,0.9,0.5);
        glVertex2f(500.0,500.0);
        glVertex2f(300.0,700.0);
        glVertex2f(100.0,500.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.5);
        glVertex2f(200.0,100.0);
        glVertex2f(200.0,300.0);
        glVertex2f(400.0,300.0);
        glVertex2f(400.0,100.0);
        
	glEnd();

	glFlush();
}


void init()
{
	glClearColor(0.0,0.8,0.0,1.0);
	glLineWidth(3.0);
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
}


int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1000.0,1000.0);
	glutInitWindowPosition(0.0,0.0);
	glutCreateWindow("house");
	glutDisplayFunc(housee);
	init();
	glutMainLoop();
    return 0;
}
