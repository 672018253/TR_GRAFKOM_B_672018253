#include <windows.h>
#include <gl/glut.h>
#include <math.h>

/*    KELOMPOK 2     */
/* RIVERSIDE STADIUM */
/* MIDDLESBROUGH FC  */

#include "rizz.h"

using namespace std;

float xrot = 0;
float yrot = 0;
float xdiff = 0;
float ydiff = 0;
float _angle = 0; 
bool mousedown = false;

int is_depth;

void myInit(void) {
    glClearColor(0.0f, 0.1f, 0.0f, 1.0f);
    glClearDepth(1.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glShadeModel(GL_SMOOTH);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
}

void lapangan() {
    glPushMatrix();
    glRotatef(-_angle, -10.0f, 80.0f, 20.0f);

	rizz1();

    glPopMatrix();
}

void tampil(void) {
    glPushMatrix();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glRotatef(xrot, 1, 0, 0);
    glRotatef(yrot, 0, 1, 0);
    lapangan();
    glPopMatrix();
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'w':
    case 'W':
        glTranslatef(0, 0, 3);
        break;
    case 's':
    case 'S':
        glTranslatef(0, 0, -3);
        break;
    case 'd':
    case 'D':
        glTranslatef(3, 0, 0);
        break;
    case 'a':
    case 'A':
        glTranslatef(-3, 0, 0);
        break;
    case 'q':
    case 'Q':
        glTranslatef(0, 3, 0);
        break;
    case 'e':
    case 'E':
        glTranslatef(0, -3, 0);
        break;
    case 'x':
    case 'X':
        glScalef(1.1, 1.1, 1.1);
        break;
    case 'z':
    case 'Z':
        glScalef(0.9, 0.9, 0.9);
        break;
    case '2':
        glRotatef(-2, 1, 0, 0);
        break;
    case '3':
        glRotatef(2, 1, 0, 0);
        break;
    case '5':
        glRotatef(2, 0, 1, 0);
        break;
    case '4':
        glRotatef(-2, 0, 1, 0);
        break;
    case '6':
        glRotatef(2, 0, 0, 1);
        break;
    case '7':
        glRotatef(-2, 0, 0, 1);
        break;
    case 27:
        exit(0);
        break;
    case '1':
        if (is_depth) {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        mousedown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else {
        mousedown = false;
    }
    glutPostRedisplay();
}

void mousemotion(int x, int y) {
    if (mousedown) {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void ukuran(GLsizei width, GLsizei height) {
    if (height == 0) height = 1;
    GLfloat aspect = (GLfloat)width / (GLfloat)height;
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0f, aspect, 0.1f, -100.0f);
    glTranslatef(0, 0, -200);
    glMatrixMode(GL_MODELVIEW);
}

void update(int value) {
	_angle += 1.0f;
	if (_angle > 360) {
		_angle -= 360;
	}
	glutPostRedisplay();
	glutTimerFunc(50, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 50);
    glutCreateWindow("672018205-672018253-672018189");
    myInit();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mousemotion);
    glutReshapeFunc(ukuran);
    glutTimerFunc(50, update, 0);
    glutMainLoop();
    return 0;
}

