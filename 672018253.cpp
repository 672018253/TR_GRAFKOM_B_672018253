#include<windows.h>
#include<gl/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("Glen pippa (672018189)");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}

void tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);

        // fondasi lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(70,-10.3,-85.0);
    glVertex3f(-55,-10.3,-85.0);
    glVertex3f(-55,-10.3,70.0);
    glVertex3f(70,-10.3,70.0);
    glEnd();

    //lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,1,0.0);
    glVertex3f(35,-10.0,-50.0);
    glVertex3f(-20,-10.0,-50.0);
    glVertex3f(-20,-10.0,35.0);
    glVertex3f(35,-10.0,35.0);
    glEnd();

    // luas lapangan
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(35.5,-10.1,-50.5);
    glVertex3f(-20.5,-10.1,-50.5);
    glVertex3f(-20.5,-10.1,35.5);
    glVertex3f(35.5,-10.1,35.5);
    glEnd();

     // luas lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.8,0.0);
    glVertex3f(40,-10.2,-55.0);
    glVertex3f(-25,-10.2,-55.0);
    glVertex3f(-25,-10.2,40.0);
    glVertex3f(40,-10.2,40.0);
    glEnd();

     // warna lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,-50.0);
    glVertex3f(-20,-9.9,-50.0);
    glVertex3f(-20,-9.9,-45.0);
    glVertex3f(35,-9.9,-45.0);
    glEnd();
     // warna lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,-40.0);
    glVertex3f(-20,-9.9,-40.0);
    glVertex3f(-20,-9.9,-35.0);
    glVertex3f(35,-9.9,-35.0);
    glEnd();
    // warna lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,-30.0);
    glVertex3f(-20,-9.9,-30.0);
    glVertex3f(-20,-9.9,-25.0);
    glVertex3f(35,-9.9,-25.0);
    glEnd();
    // warna lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,-20.0);
    glVertex3f(-20,-9.9,-20.0);
    glVertex3f(-20,-9.9,-15.0);
    glVertex3f(35,-9.9,-15.0);
    glEnd();
    // warna lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,-10.0);
    glVertex3f(-20,-9.9,-10.0);
    glVertex3f(-20,-9.9,-5.0);
    glVertex3f(35,-9.9,-5.0);
    glEnd();
    // warna lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,0.0);
    glVertex3f(-20,-9.9,0.0);
    glVertex3f(-20,-9.9,5.0);
    glVertex3f(35,-9.9,5.0);
    glEnd();
     // warna lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,10.0);
    glVertex3f(-20,-9.9,10.0);
    glVertex3f(-20,-9.9,15.0);
    glVertex3f(35,-9.9,15.0);
    glEnd();
     // warna lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,20.0);
    glVertex3f(-20,-9.9,20.0);
    glVertex3f(-20,-9.9,25.0);
    glVertex3f(35,-9.9,25.0);
    glEnd();
    // warna lapangan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,30.0);
    glVertex3f(-20,-9.9,30.0);
    glVertex3f(-20,-9.9,35.0);
    glVertex3f(35,-9.9,35.0);
    glEnd();

    // tempat penonton 1
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-24.0,-10.1,39.9);
    glVertex3f(-44.0,10.1,55.0);
    glVertex3f(59.0,10.1,55.0);
    glVertex3f(39.0,-10.1,39.9);
    glEnd();
    // jalan penonton 1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.2,39.9);
    glVertex3f(-45.0,10.0,55.0);
    glVertex3f(60.0,10.0,55.0);
    glVertex3f(40.0,-10.2,39.9);
    glEnd();
    // atap penonton 1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.5);
    glVertex3f(-25.0,10.2,39.9);
    glVertex3f(-45.0,10.0,55.0);
    glVertex3f(60.0,10.0,55.0);
    glVertex3f(40.0,10.2,39.9);
    glEnd();

    // tempat penonton 2
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-24.0,-10.1,-55.0);
    glVertex3f(-44.0,10.1,-70.0);
    glVertex3f(59.0,10.1,-70.0);
    glVertex3f(39.0,-10.1,-55.0);
    glEnd();
    // jalan penonton 2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.2,-55.0);
    glVertex3f(-45.0,10.0,-70.0);
    glVertex3f(60.0,10.0,-70.0);
    glVertex3f(40.0,-10.2,-55.0);
    glEnd();
    // atap penonton 2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.5);
    glVertex3f(-25.0,10.2,-55.0);
    glVertex3f(-45.0,10.0,-70.0);
    glVertex3f(60.0,10.0,-70.0);
    glVertex3f(40.0,10.2,-55.0);
    glEnd();

     // tempat penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-25.0,-10.2,40.0);
    glVertex3f(-45.0,10.0,55.0);
    glVertex3f(-45.0,10.0,-70.0);
    glVertex3f(-25.0,-10.2,-55.0);
    glEnd();
    // atap penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.5);
    glVertex3f(-25.0,10.2,40.0);
    glVertex3f(-45.0,10.0,55.0);
    glVertex3f(-45.0,10.0,-70.0);
    glVertex3f(-25.0,10.2,-55.0);
    glEnd();

     // tempat penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(40.0,-10.2,40.0);
    glVertex3f(60.0,10.0,55.0);
    glVertex3f(60.0,10.0,-70.0);
    glVertex3f(40.0,-10.2,-55.0);
    glEnd();
     // atap penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.5);
    glVertex3f(40.0,10.2,40.0);
    glVertex3f(60.0,10.0,55.0);
    glVertex3f(60.0,10.0,-70.0);
    glVertex3f(40.0,10.2,-55.0);
    glEnd();

     // tembok bangunan
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.5);
    glVertex3f(60.0,-10.3,-70.0);
    glVertex3f(60.0,10.0,-70.0);
    glVertex3f(-45.0,10.0,-70.0);
    glVertex3f(-45.0,-10.3,-70.0);
    glEnd();
    // tembok bangunan
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.5);
    glVertex3f(60.0,-10.3,-70.0);
    glVertex3f(60.0,10.0,-70.0);
    glVertex3f(60.0,10.0,55.0);
    glVertex3f(60.0,-10.3,55.0);
    glEnd();
    // tembok bangunan
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.5);
    glVertex3f(-45.0,-10.3,55.0);
    glVertex3f(-45.0,10.0,55.0);
    glVertex3f(60.0,10.0,55.0);
    glVertex3f(60.0,-10.3,55.0);
    glEnd();
    // tembok bangunan
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.5);
    glVertex3f(-45.0,-10.3,55.0);
    glVertex3f(-45.0,10.0,55.0);
    glVertex3f(-45.0,10.0,-70.0);
    glVertex3f(-45.0,-10.3,-70.0);
    glEnd();

    

    glPushMatrix();
    glPopMatrix();

    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'w':
        case 'W':
            glTranslatef(0.0,0.0,3.0);
            break;
        case 'd':
        case 'D':
            glTranslatef(3.0,0.0,0.0);
            break;
        case 's':
        case 'S':
            glTranslatef(0.0,0.0,-3.0);
            break;
        case 'a':
        case 'A':
            glTranslatef(-3.0,0.0,0.0);
            break;
        case '7':
            glTranslatef(0.0,3.0,0.0);
            break;
        case '9':
            glTranslatef(0.0,-3.0,0.0);
            break;
        case '2':
            glRotatef(2.0,1.0,0.0,0.0);
            break;
        case '8':
            glRotatef(-2.0,1.0,0.0,0.0);
            break;
        case '6':
            glRotatef(2.0,0.0,1.0,0.0);
            break;
        case '4':
            glRotatef(-2.0,0.0,1.0,0.0);
            break;
        case '1':
            glRotatef(2.0,0.0,0.0,1.0);
            break;
        case '3':
            glRotatef(-2.0,0.0,0.0,1.0);
            break;
        case '5':
            if (is_depth)
            {
                is_depth = 0;
                glDisable(GL_DEPTH_TEST);
            }
            else
            {
                is_depth = 1;
                glEnable(GL_DEPTH_TEST);
            }

    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(7.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}

