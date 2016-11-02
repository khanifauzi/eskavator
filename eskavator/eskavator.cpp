#if defined __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#endif

#include <math.h>

#define PI 3.1415926535898

void Lingkaran(float size, float x, float y){
	glBegin(GL_POLYGON);
	GLint circle_points = 100;
	int i;
	float angle;
	for(i=0;i<circle_points;i++){
		angle=2*PI*i/circle_points;
		glVertex2f(x+size*cos(angle), y+size*sin(angle));
	}	
	glEnd();
}

void Escavator(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	//d
	glPushMatrix();
		glColor3f(0.5, 0.5, 0.5);
		glTranslatef(0.0, 0.5, 0.0);
		glBegin(GL_POLYGON);
			glVertex3f(0.2, 0.0, 0.0);
			glVertex3f(-0.7, 0.33, 0.0);
			glVertex3f(-0.7, 0.15, 0.0);
			glVertex3f(0.1, -0.3, 0.0);
		glEnd();
	glPopMatrix();
	
	//garuk
	glPushMatrix();
		glColor3f(1.0, 0.7, 0.3);
		glTranslatef(-0.7, -0.0, 0.0);
			glBegin(GL_POLYGON);
			// glColor3f(0.0, 1.0, 0.0);
			glVertex3f(-0.03, -0.17, 0.0);
			glVertex3f(-0.27, -0.22, 0.0);
			glVertex3f(-0.3, -0.4, 0.0);
			glVertex3f(-0.12, -0.62, 0.0);
			glVertex3f(0.05, -0.35, 0.0);
		glEnd();
		glBegin(GL_POLYGON);
			glVertex3f(-0.12, -0.62, 0.0);
			glVertex3f(0.05, -0.35, 0.0);
			glVertex3f(0.3, -0.5, 0.0);
		glEnd();
	glPopMatrix();

	
	//c
	glPushMatrix();
		glTranslatef(0.5, -0.5, 0.0);
		glBegin(GL_POLYGON);
			glColor3f(0.3, 0.3, 0.3);
			glVertex3f(0.0, 0.4, 0.0);
			glVertex3f(-0.4, 0.4, 0.0);
			glVertex3f(-0.4, 0.1, 0.0);
			glVertex3f(0.0, 0.1, 0.0);
		glEnd();
	glPopMatrix();
	
	//f
	glPushMatrix();
		glColor3f(0.4, 0.4, 0.4);
		glTranslatef(-0.8, 0.4, 0.0);
		glBegin(GL_POLYGON);
			glVertex3f(0.4, 0.35, 0.0); //kanan atas
			glVertex3f(0.1, 0.46, 0.0); //kiri atas
			glVertex3f(0.0, 0.2, 0.0);
			glVertex3f(0.02, 0.09, 0.0);
			glVertex3f(-0.15, -0.73, 0.0);
			glVertex3f(-0.03, -0.75, 0.0);
			glVertex3f(0.15, 0, 0.0);
			glVertex3f(0.22, 0.0, 0.0);
		glEnd();
		
		//e dan h
		glColor3f(.0, 0., 0.);
		Lingkaran(0.08, 0.2, 0.3);
		glColor3f(0.3, 0.3 , 0.3);
		Lingkaran(0.05, 0.2, 0.3);
		glColor3f(0.0, 0.0 , 0.0);
		Lingkaran(0.04, -0.07, -0.67);
		glColor3f(0.3, 0.3 , 0.3);
		Lingkaran(0.025, -0.07, -0.67);
	glPopMatrix();

	//body
	glPushMatrix();
		glTranslatef(0.5, 0.0, 0.0);
		glBegin(GL_POLYGON);
			glColor3f(1.0, 0.7, 0.3); //warna tubuh
			glVertex3f(0.0, 0.2, 0.0);
			glVertex3f(0.0, 0.6, 0.0);
			glVertex3f(-0.3, 0.6, 0.0);
			glVertex3f(-0.6, -0.0, 0.0);
			
			glVertex3f(-0.6, -0.15, 0.0);
			glVertex3f(-0.55, -0.2, 0.0);
			glVertex3f(0.35, -0.2, 0.0);
			glVertex3f(0.4, -0.15, 0.0);
			glVertex3f(0.4, 0.15, 0.0);
			glVertex3f(0.35, 0.2, 0.0);
		glEnd();
		
		//kaca
		glTranslatef(0.02, 0.02, 0.0);
		glBegin(GL_POLYGON);
			// glColor3f(0.4, 0.8, 1.0);
			glColor3f(0.3, 0.3, 0.3);
			glVertex3f(-0.08, 0.2, 0.0);
			glVertex3f(-0.08, 0.52, 0.0);
			glVertex3f(-0.27, 0.52, 0.0);
			glVertex3f(-0.5, 0.05, 0.0);
			glVertex3f(-0.48, 0.0, 0.0);
			glVertex3f(-0.37, 0.0, 0.0);
		glEnd();
	glPopMatrix();

	//roda	
	glPushMatrix();
		glTranslatef(0.5, -0.5, 0.0);
		glColor3f(0.1, 0.1, 0.1);
		glRectf(-0.4, -0.1, 0.2, 0.2);
		Lingkaran(0.15, -0.4, 0.05);
		Lingkaran(0.15, 0.2, 0.05);
		glColor3f(0.1, 0.3, 0.3);
		Lingkaran(0.12, -0.4, 0.05);
		Lingkaran(0.12, 0.2, 0.05);
		glColor3f(0.3, 0.2, 0.2);
		Lingkaran(0.05, -0.4, 0.05);
		Lingkaran(0.05, 0.2, 0.05);
		glRectf(-0.4, 0.0, 0.2, 0.1);	
	glPopMatrix();
	
	//ventilasi
	glPushMatrix();
		glTranslatef(0.3, -0.35, 0.0);
		glBegin(GL_POLYGON);
			glColor3f(0.5, 0.3, 0.3);
			glVertex3f(0.2, 0.2, 0.0);
			glVertex3f(0.2, 0.5, 0.0);
			glVertex3f(0.25, 0.5, 0.0);
			glVertex3f(0.25, 0.2, 0.0);
		glEnd();
		glTranslatef(0.07, -0.0, 0.0);
		glBegin(GL_POLYGON);
			glVertex3f(0.2, 0.2, 0.0);
			glVertex3f(0.2, 0.5, 0.0);
			glVertex3f(0.25, 0.5, 0.0);
			glVertex3f(0.25, 0.2, 0.0);
		glEnd();
		glTranslatef(0.07, -0.0, 0.0);
		glBegin(GL_POLYGON);
			glVertex3f(0.2, 0.2, 0.0);
			glVertex3f(0.2, 0.5, 0.0);
			glVertex3f(0.25, 0.5, 0.0);
			glVertex3f(0.25, 0.2, 0.0);
		glEnd();
		glTranslatef(0.07, -0.0, 0.0);
		glBegin(GL_POLYGON);
			glVertex3f(0.2, 0.2, 0.0);
			glVertex3f(0.2, 0.5, 0.0);
			glVertex3f(0.25, 0.5, 0.0);
			glVertex3f(0.25, 0.2, 0.0);
		glEnd();
		glTranslatef(0.07, -0.0, 0.0);
		glBegin(GL_POLYGON);
			glVertex3f(0.2, 0.2, 0.0);
			glVertex3f(0.2, 0.5, 0.0);
			glVertex3f(0.25, 0.5, 0.0);
			glVertex3f(0.25, 0.2, 0.0);
		glEnd();
	glPopMatrix();
		
	float xmax,ymax,xmin,ymin;
	float x = -3.5;float y=-2.0;
	xmax = 2.0;ymax=2.0;
	float add = 0.1;
	float sub = -0.1;
	int i;
	for(i=1;i<=71;i++){
		glLineWidth(1.0f);
		glBegin(GL_LINES);
			glColor3f(0,0,0);
			glVertex3f(x,y,0.0f);
			glVertex3f(x,ymax,0.0f);
		glEnd();
		glFlush();
		x = x + add;
	}
	x = -3.5;y = 2.0;
	xmax = 3.5;ymax = -2.0;
	for(i=1;i<=41;i++){
		glLineWidth(1.0f);
		glBegin(GL_LINES);
			glColor3f(0,0,0);
			glVertex3f(x,y,0.0f);
			glVertex3f(xmax,y,0.0f);
		glEnd();
		glFlush();
		y = y + sub;
	}
	
	glPointSize(10.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex3f(0.0,0.0,0.0);
	glEnd();
		
	glFlush();
}

int main(int argc, char* argv[])
{
 	glutInit(&argc, argv);
 	glutInitWindowSize(800,800);
 	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
 	glutCreateWindow("Ekskavator");
 	glutDisplayFunc(Escavator);
 	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
 	glutMainLoop();
 	return 0;
}
