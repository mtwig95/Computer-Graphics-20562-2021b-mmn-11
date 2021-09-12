#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <windows.h>
#include <stdlib.h>
#include <iostream>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 700
#define WINDOW_X_OFFSET 0
#define WINDOW_Y_OFFSET 0

void init()
{
	glClearColor(0.2, 0.61, 1.0, 0.0);  // display window color
	glMatrixMode(GL_PROJECTION); // 2D
	gluOrtho2D(0.0, 800, 0.0, 700);
	glMatrixMode(GL_MODELVIEW);
}

void CAR() {
	//The car
	glColor3f(0.612, 0.0, 0.612);
	glBegin(GL_POLYGON);
	glVertex2i(54, 271);
	glVertex2i(564, 263);
	glVertex2i(564, 310);
	glVertex2i(526, 311);
	glVertex2i(534, 314);
	glVertex2i(550, 337);
	glVertex2i(552, 346);
	glVertex2i(548, 361);
	glVertex2i(540, 371);
	glVertex2i(528, 379);
	glVertex2i(512, 383);
	glVertex2i(457, 466);
	glVertex2i(65, 467);
	glVertex2i(62, 441);
	glVertex2i(61, 432);
	glVertex2i(56, 411);
	glVertex2i(51, 373);
	glVertex2i(46, 330);
	glVertex2i(45, 319);
	glVertex2i(45, 301);
	glVertex2i(46, 285);
	glVertex2i(47, 270);
	glVertex2i(47, 269);
	glEnd();

	//Shape of the car
	glColor3f(0, 0.0, 0);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glVertex2i(54, 271);
	glVertex2i(564, 263);
	glVertex2i(564, 310);
	glVertex2i(526, 311);
	glVertex2i(534, 314);
	glVertex2i(550, 337);
	glVertex2i(552, 346);
	glVertex2i(548, 361);
	glVertex2i(540, 371);
	glVertex2i(528, 379);
	glVertex2i(512, 383);
	glVertex2i(457, 466);
	glVertex2i(65, 467);
	glVertex2i(62, 441);
	glVertex2i(61, 432);
	glVertex2i(56, 411);
	glVertex2i(51, 373);
	glVertex2i(46, 330);
	glVertex2i(45, 319);
	glVertex2i(45, 301);
	glVertex2i(46, 285);
	glVertex2i(47, 270);
	glVertex2i(47, 269);
	glEnd();

	//Left window
	glColor3f(0.90, 0.90, 0.90);
	glBegin(GL_POLYGON);
	glVertex2i(80, 457);
	glVertex2i(65, 400);
	glVertex2i(206, 400);
	glVertex2i(206, 457);
	glVertex2i(80, 457);
	glEnd();

	//Middle window
	glColor3f(0.90, 0.90, 0.90);
	glBegin(GL_POLYGON);
	glVertex2i(221, 457);
	glVertex2i(221, 400);
	glVertex2i(375, 400);
	glVertex2i(375, 457);
	glVertex2i(221, 457);
	glEnd();

	//Right window
	glColor3f(0.90, 0.90, 0.90);
	glBegin(GL_POLYGON);
	glVertex2i(387, 457);
	glVertex2i(387, 400);
	glVertex2i(488, 400);
	glVertex2i(454, 457);
	glVertex2i(387, 457);
	glEnd();

	glFlush();
}

void LAND() {
	glColor3f(0.9, 0.9, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(0, 247);
	glVertex2i(0, 0);
	glVertex2i(800, 0);
	glVertex2i(800, 258);
	glVertex2i(780, 267);
	glVertex2i(737, 275);
	glVertex2i(718, 269);
	glVertex2i(693, 253);
	glVertex2i(656, 249);
	glVertex2i(635, 251);
	glVertex2i(618, 264);
	glVertex2i(608, 268);
	glVertex2i(603, 269);
	glVertex2i(571, 269);
	glVertex2i(547, 268);
	glVertex2i(524, 262);
	glVertex2i(461, 248);
	glVertex2i(439, 246);
	glVertex2i(431, 252);
	glVertex2i(407, 259);
	glVertex2i(402, 262);
	glVertex2i(374, 271);
	glVertex2i(343, 268);
	glVertex2i(306, 254);
	glVertex2i(273, 245);
	glVertex2i(240, 248);
	glVertex2i(239, 249);
	glVertex2i(203, 259);
	glVertex2i(173, 266);
	glVertex2i(133, 260);
	glVertex2i(128, 260);
	glVertex2i(126, 259);
	glVertex2i(92, 248);
	glVertex2i(64, 251);
	glVertex2i(52, 256);
	glVertex2i(49, 257);
	glVertex2i(21, 268);
	glVertex2i(9, 269);
	glVertex2i(0, 266);
	glEnd();

	//Small hills of sand
	glColor4f(0.9, 0.9, 0.2, 0.8);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex2i(470, 199);
	glVertex2i(491, 208);
	glVertex2i(526, 213);
	glVertex2i(544, 209);
	glVertex2i(553, 201);
	glVertex2i(558, 197);
	glEnd();

	glColor4f(0.9, 0.9, 0.2, 0.8);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex2i(584, 120);
	glVertex2i(611, 142);
	glVertex2i(655, 147);
	glVertex2i(683, 117);
	glVertex2i(687, 98);
	glEnd();

	glColor4f(0.9, 0.9, 0.2, 0.8);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex2i(14, 180);
	glVertex2i(52, 205);
	glVertex2i(83, 207);
	glVertex2i(106, 202);
	glVertex2i(120, 183);
	glVertex2i(119, 166);
	glEnd();

	glColor4f(0.9, 0.9, 0.0, 0.8);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex2i(241, 151);
	glVertex2i(246, 161);
	glVertex2i(273, 176);
	glVertex2i(314, 185);
	glVertex2i(392, 187);
	glVertex2i(419, 177);
	glVertex2i(468, 159);
	glVertex2i(481, 154);
	glVertex2i(484, 152);
	glEnd();

	glColor4f(0.9, 0.9, 0.0, 0.8);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex2i(392, 69);
	glVertex2i(444, 94);
	glVertex2i(531, 89);
	glVertex2i(578, 66);
	glVertex2i(588, 56);
	glEnd();

	glColor4f(0.9, 0.8, 0.1, 0.8);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex2i(14, 104);
	glVertex2i(14, 104);
	glVertex2i(41, 111);
	glVertex2i(65, 119);
	glVertex2i(88, 113);
	glVertex2i(94, 108);
	glVertex2i(105, 105);
	glVertex2i(119, 103);
	glVertex2i(141, 104);
	glVertex2i(151, 106);
	glVertex2i(189, 105);
	glVertex2i(189, 105);
	glEnd();

	glColor4f(0.9, 0.8, 0.2, 0.8);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex2i(142, 20);
	glVertex2i(186, 38);
	glVertex2i(203, 40);
	glVertex2i(234, 40);
	glVertex2i(279, 24);
	glEnd();

	glColor4f(0.9, 0.8, 0.1, 0.8);
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);
	glVertex2i(676, 218);
	glVertex2i(688, 243);
	glVertex2i(717, 266);
	glVertex2i(731, 273);
	glVertex2i(759, 268);
	glVertex2i(767, 265);
	glVertex2i(787, 259);
	glVertex2i(792, 255);
	glVertex2i(794, 253);
	glVertex2i(796, 253);
	glVertex2i(798, 251);
	glEnd();

	glFlush();
}

void WHEEL(GLfloat x, GLfloat y, GLfloat radius) {
	GLfloat twicePi = 2.0f * 3.14;
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x, y); // center of circle
	for (int i = 0; i <= 20; i++) {
		glVertex2f(
			x + (radius * cos(i * twicePi / 20)),
			y + (radius * sin(i * twicePi / 20))
		);
	}
	glEnd();
}

void NAME()
{
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 0);
	glVertex2i(0, 400);
	glVertex2i(400, 400);
	glVertex2i(400, 0);
	glEnd();

	glColor3f(1, 0, 0);
	glRasterPos2i(108, 230);
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'M');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'a');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'y');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 't');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'a');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'l');

	glRasterPos2i(100, 300);
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'T');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'w');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'i');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'g');

	glFlush();
}

void TITLE() //	//An old dream
{
	glColor3f(1, 1, 1);
	glRasterPos2i(131, 500);
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'A');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'n');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, ' ');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'o');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'l');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'd');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, ' ');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'd');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'r');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'a');
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'm');
	glFlush();
}

void EXIT()
{
	glColor3f(1, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 0);
	glVertex2i(0, 130);
	glVertex2i(400, 130);
	glVertex2i(400, 0);
	glEnd();

	glColor3f(0.30, 0.30, 0.30);
	glRasterPos2i(85, 36);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'E');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'X');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'I');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, 'T');

	glFlush();
}

void Display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(0, 0, 800, 800);
	TITLE();
	LAND();
	CAR();
	WHEEL(130, 256, 34);
	WHEEL(376, 256, 34);

	glViewport(50, 50, 200, 200);
	NAME();
	EXIT();

	glFlush();
}


void mouseEscape(int button, int state, int x, int y)
{
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN && x <= 148 && x >= 49 && y <= 649 && y >= 614)
	{
		glutDestroyWindow(glutGetWindow());
		exit(0);
		glutPostRedisplay();
	}
}

void InitGlut(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutInitWindowPosition(WINDOW_X_OFFSET, WINDOW_Y_OFFSET);
	glutCreateWindow("Maman 11 - Maytal Twig");
}

void RegisterCallback()
{
	glutDisplayFunc(Display);
	glutMouseFunc(mouseEscape);
}

void main(int argc, char** argv)
{
	InitGlut(argc, argv);
	init();
	RegisterCallback();
	glutMainLoop();
}