#include "Render.h"
#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>



#define beg glBegin(GL_POLYGON);
#define end glEnd();

void Render(double delta_time)
{


	float ambient[4] = { 1, 0.0, 0.1, 0.5 };
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambient);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_LIGHTING);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambient);
	glEnable(GL_COLOR_MATERIAL);
	glColorMaterial(GL_FRONT, GL_AMBIENT);
	float pos[4] = { 5,5, 5,0.5 };
	float dir[3] = { 0, 0, -1 };
	glEnable(GL_LIGHT1);
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, dir);
	glLightfv(GL_LIGHT1, GL_POSITION, pos);
	glClearColor(0.3, 0.3, 0.3, 1.0); 
	double figured[6][3] = { { -3, 0, 0 }, {-1, 4, 0}, {0, 0, 0} ,{6, 4, 0}, {6, -2, 0}, {-3, -2, 0} };
	beg;
	
	glNormal3d(0, 0, -1);
	glVertex3dv(figured[2]);
	glNormal3d(0, 0, -1);
	glVertex3dv(figured[3]);
	glNormal3d(0, 0, -1);
	glVertex3dv(figured[4]);
	glNormal3d(0, 0, -1);
	glVertex3dv(figured[5]);
	glNormal3d(0, 0, -1);
	glVertex3dv(figured[0]);
	glNormal3d(0, 0, -1);
	glVertex3dv(figured[1]);


	end;

	
	double figured1[4][3] = { {-3, 0, 0}, {-3,-2,0}, {-2, -7,0}, {-7,0,0} };
	beg

		glNormal3d(0, 0, -1);
	glVertex3dv(figured1[0]);
	glNormal3d(0, 0, -1);
	glVertex3dv(figured1[1]);
	glNormal3d(0, 0, -1);
	glVertex3dv(figured1[2]);
	glNormal3d(0, 0, -1);
	glVertex3dv(figured1[3]);
	end;
	
	double figured2[6][3] = { { -3, 0, 1 }, {-1, 4, 1}, {0, 0, 1} ,{6, 4, 1}, {6, -2, 1}, {-3, -2, 1} };

	beg;
	glColor3d(0.2, 0.1, 1);
	glNormal3d(0, 0, 1);
	glVertex3dv(figured2[2]);
	glNormal3d(0, 0, 1);
	glVertex3dv(figured2[3]);
	glNormal3d(0, 0, 1);
	glVertex3dv(figured2[4]);
	glNormal3d(0, 0, 1);
	glVertex3dv(figured2[5]);
	glNormal3d(0, 0, 1);
	glVertex3dv(figured2[0]);
	glNormal3d(0, 0, 1);
	glVertex3dv(figured2[1]);
	end;

	
	double figured3[4][3] = { {-3, 0, 1}, {-3,-2,1}, {-2, -7,1}, {-7,0,1} };
	beg
	glColor3d(0.2, 0.1, 1);
	glNormal3b(0, 0, 1);
	glVertex3dv(figured3[0]);
	glNormal3b(0, 0, 1);
	glVertex3dv(figured3[1]);
	glNormal3b(0, 0, 1);
	glVertex3dv(figured3[2]);
	glNormal3b(0, 0, 1);
	glVertex3dv(figured3[3]);
	end;

	
	double A[] = { -7, 0, 1 };
	double B[] = { -7, 0, 0 };
	double C[] = { -2, -7,0 };
	double D[] = { -2, -7,1 };
	glBegin(GL_QUADS);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);
	end;
	A[0] = -3;
	A[1] = -2;
	A[2] = 1;
	B[0] = -3;
	B[1] = -2;
	B[2] = 0;
	C[0] = -2;
	C[1] = -7;
	C[2] = 0;
	D[0] = -2;
	D[1] = -7;
	D[2] = 1;
	glBegin(GL_QUADS);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);
	end;
	A[0] = -3;
	A[1] = -2;
	A[2] = 1;
	B[0] = -3;
	B[1] = -2;
	B[2] = 0;
	C[0] = 6;
	C[1] = -2;
	C[2] = 0;
	D[0] = 6;
	D[1] = -2;
	D[2] = 1;
	glBegin(GL_QUADS);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);
	end;
	A[0] = 6;
	A[1] = 4;
	A[2] = 1;
	B[0] = 6;
	B[1] = 4;
	B[2] = 0;
	C[0] = 6;
	C[1] = -2;
	C[2] = 0;
	D[0] = 6;
	D[1] = -2;
	D[2] = 1;
	glBegin(GL_QUADS);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);
	end;
	A[0] = 6;
	A[1] = 4;
	A[2] = 1;
	B[0] = 6;
	B[1] = 4;
	B[2] = 0;
	C[0] = 0;
	C[1] = 0;
	C[2] = 0;
	D[0] = 0;
	D[1] = 0;
	D[2] = 1;
	glBegin(GL_QUADS);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);
	end;
	A[0] = -1;
	A[1] = 4;
	A[2] = 1;
	B[0] = -1;
	B[1] = 4;
	B[2] = 0;
	C[0] = 0;
	C[1] = 0;
	C[2] = 0;
	D[0] = 0;
	D[1] = 0;
	D[2] = 1;
	glBegin(GL_QUADS);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);
	end;
	A[0] = -1;
	A[1] = 4;
	A[2] = 1;
	B[0] = -1;
	B[1] = 4;
	B[2] = 0;
	C[0] = -3;
	C[1] = 0;
	C[2] = 0;
	D[0] = -3;
	D[1] = 0;
	D[2] = 1;
	glBegin(GL_QUADS);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);
	end;
	A[0] = -7;
	A[1] = 0;
	A[2] = 1;
	B[0] = -7;
	B[1] = 0;
	B[2] = 0;
	C[0] = -3;
	C[1] = 0;
	C[2] = 0;
	D[0] = -3;
	D[1] = 0;
	D[2] = 1;
	glBegin(GL_QUADS);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);
	end;
}