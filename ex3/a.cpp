// 3a) Write a program to draw a circle on a plane in open gl.
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

void drawpixel(GLint cx,GLint cy)
{
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
	glVertex2i(cx,cy);
	glEnd();
}

void plotpixel(GLint h,GLint k,GLint x,GLint y)
{
	drawpixel(x+h,y+k);
	drawpixel(-x+h,y+k);
	drawpixel(x+h,-y+k);
	drawpixel(-x+h,-y+k);
	drawpixel(y+h,x+k);
	drawpixel(-y+h,x+k);
	drawpixel(y+h,-x+k);
	drawpixel(-y+h,-x+k);
}

void circle_draw(GLint h,GLint k,GLint r)
{
	GLint d=1-r,x=0,y=r;
	while(x<y)
	{
		plotpixel(h,k,x,y);
		if(d<0)
			d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixel(h,k,x,y);
}

void init(void)
{
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,400.0,0.0,300.0);
}

void display(void)
{
	GLint xc=100,yc=100,r=50;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glPointSize(2.0);
	circle_draw(xc,yc,r);
	glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(0.0,0.0);
	glutInitWindowSize(100.0,100.0);
	glutCreateWindow("CIRCLES");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
    return 0;
}
