// 4b) draw a house using lines in openGL.

#include<GL/glut.h>
void ldisplay()
{
    
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
        glColor3f(0.0,0.0,0.0);
        
        // base line
        glVertex2f(200,100);
        glVertex2f(500,100);
        
        // left wall
        glVertex2f(200,100);
        glVertex2f(200,400);
        // right wall
        glVertex2f(500,100);
        glVertex2f(500,400);
        // Top
        glVertex2f(200,400);
        glVertex2f(500,400);
        // door
        glVertex2f(300, 250);
        glVertex2f(400, 250);
        
       glVertex2f(300, 250);
       glVertex2f(300, 100);
        
       glVertex2f(400, 250);
       glVertex2f(400, 100);
    // roof
        glVertex2f(200,400);
        glVertex2f(350,500);

        glVertex2f(500,400);
        glVertex2f(350,500);


	glEnd();
    /*
	glBegin(GL_POINTS);
	glColor3f(0.0,0.0,1.0);
    
    // X-AXIS
    glVertex2f(0.0,0.0);
    glVertex2f(100,0);
	glVertex2f(200.0,0.0);
	glVertex2f(300.0,0.0);
	glVertex2f(400.0,0.0);
	glVertex2f(500.0,0.0);
	glVertex2f(600.0,0.0);
	glVertex2f(700.0,0.0);
    
    // Y-AXIS
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,100.0);
	glVertex2f(0.0,200.0);
	glVertex2f(0.0,300.0);
	glVertex2f(0.0,400.0);
	glVertex2f(0.0,500.0);
	glVertex2f(0.0,600.0);
	glVertex2f(0.0,700.0);
	glEnd();

    */
	glFlush();
}

void init()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glPointSize(10.0);
	glLineWidth(3.0);
	gluOrtho2D(0.0,700.0,0.0,700.0);
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(700.0,700.0);
	glutInitWindowPosition(100.0,100.0);
	glutCreateWindow("Lines");
	glutDisplayFunc(ldisplay);
	init();
	glutMainLoop();
    return 0;
}
