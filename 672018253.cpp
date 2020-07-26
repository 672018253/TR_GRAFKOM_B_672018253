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

     // warna lapangan1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,-50.0);
    glVertex3f(-20,-9.9,-50.0);
    glVertex3f(-20,-9.9,-45.0);
    glVertex3f(35,-9.9,-45.0);
    glEnd();
     // warna lapangan2
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,-40.0);
    glVertex3f(-20,-9.9,-40.0);
    glVertex3f(-20,-9.9,-35.0);
    glVertex3f(35,-9.9,-35.0);
    glEnd();
    // warna lapangan3
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,-30.0);
    glVertex3f(-20,-9.9,-30.0);
    glVertex3f(-20,-9.9,-25.0);
    glVertex3f(35,-9.9,-25.0);
    glEnd();
    // warna lapangan4
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,-20.0);
    glVertex3f(-20,-9.9,-20.0);
    glVertex3f(-20,-9.9,-15.0);
    glVertex3f(35,-9.9,-15.0);
    glEnd();
    // warna lapangan5
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,-10.0);
    glVertex3f(-20,-9.9,-10.0);
    glVertex3f(-20,-9.9,-5.0);
    glVertex3f(35,-9.9,-5.0);
    glEnd();
    // warna lapangan6
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,0.0);
    glVertex3f(-20,-9.9,0.0);
    glVertex3f(-20,-9.9,5.0);
    glVertex3f(35,-9.9,5.0);
    glEnd();
     // warna lapangan7
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,10.0);
    glVertex3f(-20,-9.9,10.0);
    glVertex3f(-20,-9.9,15.0);
    glVertex3f(35,-9.9,15.0);
    glEnd();
     // warna lapangan8
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,20.0);
    glVertex3f(-20,-9.9,20.0);
    glVertex3f(-20,-9.9,25.0);
    glVertex3f(35,-9.9,25.0);
    glEnd();
    // warna lapangan9
    glBegin(GL_QUADS);
    glColor3f(0.0,0.5,0.0);
    glVertex3f(35,-9.9,30.0);
    glVertex3f(-20,-9.9,30.0);
    glVertex3f(-20,-9.9,35.0);
    glVertex3f(35,-9.9,35.0);
    glEnd();
    
    // warna lapangan putih
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(35,-9.8,-7.8);
    glVertex3f(-20,-9.8,-7.8);
    glVertex3f(-20,-9.8,-7.2);
    glVertex3f(35,-9.8,-7.2);
    glEnd();
    // warna lapangan putih1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(12,-9.8,-13.8);
    glVertex3f(4,-9.8,-13.8);
    glVertex3f(4,-9.8,-13.2);
    glVertex3f(12,-9.8,-13.2);
    glEnd();
    // warna lapangan putih1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-1,-9.8,-7.8);
    glVertex3f(4,-9.8,-13.8);
    glVertex3f(4,-9.8,-13.2);
    glVertex3f(-1,-9.8,-7.2);
    glEnd();
    // warna lapangan putih1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(12,-9.8,-13.8);
    glVertex3f(17,-9.8,-7.8);
    glVertex3f(17,-9.8,-7.2);
    glVertex3f(12,-9.8,-13.2);
    glEnd();
    // warna lapangan putih2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(12,-9.8,-1.8);
    glVertex3f(4,-9.8,-1.8);
    glVertex3f(4,-9.8,-1.2);
    glVertex3f(12,-9.8,-1.2);
    glEnd();
    // warna lapangan putih2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-1,-9.8,-7.8);
    glVertex3f(4,-9.8,-1.8);
    glVertex3f(4,-9.8,-1.2);
    glVertex3f(-1,-9.8,-7.2);
    glEnd();
    // warna lapangan putih2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(12,-9.8,-1.8);
    glVertex3f(17,-9.8,-7.8);
    glVertex3f(17,-9.8,-7.2);
    glVertex3f(12,-9.8,-1.2);
    glEnd();
    // warna lapangan putih3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(17,-9.8,-40.8);
    glVertex3f(-1,-9.8,-40.8);
    glVertex3f(-1,-9.8,-40.2);
    glVertex3f(17,-9.8,-40.2);
    glEnd();
    // warna lapangan putih3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-0.5,-9.8,-50);
    glVertex3f(-1,-9.8,-50);
    glVertex3f(-1,-9.8,-40.2);
    glVertex3f(-0.5,-9.8,-40.2);
    glEnd();
    // warna lapangan putih3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(16.5,-9.8,-50);
    glVertex3f(17,-9.8,-50);
    glVertex3f(17,-9.8,-40.2);
    glVertex3f(16.5,-9.8,-40.2);
    glEnd();
    // warna lapangan putih4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(21,-9.8,-35.8);
    glVertex3f(-5,-9.8,-35.8);
    glVertex3f(-5,-9.8,-35.2);
    glVertex3f(21,-9.8,-35.2);
    glEnd();
    // warna lapangan putih4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-4.5,-9.8,-35.8);
    glVertex3f(-5,-9.8,-35.8);
    glVertex3f(-5,-9.8,-50);
    glVertex3f(-4.5,-9.8,-50);
    glEnd();
    // warna lapangan putih4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(21,-9.8,-35.8);
    glVertex3f(20.5,-9.8,-35.8);
    glVertex3f(20.5,-9.8,-50);
    glVertex3f(21,-9.8,-50);
    glEnd();
    // warna lapangan putih3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(17,-9.8,25.8);
    glVertex3f(-1,-9.8,25.8);
    glVertex3f(-1,-9.8,25.2);
    glVertex3f(17,-9.8,25.2);
    glEnd();
    // warna lapangan putih3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-0.5,-9.8,35);
    glVertex3f(-1,-9.8,35);
    glVertex3f(-1,-9.8,25.8);
    glVertex3f(-0.5,-9.8,25.8);
    glEnd();
    // warna lapangan putih3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(16.5,-9.8,35);
    glVertex3f(17,-9.8,35);
    glVertex3f(17,-9.8,25.8);
    glVertex3f(16.5,-9.8,25.8);
    glEnd();
    // warna lapangan putih4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(21,-9.8,20.8);
    glVertex3f(-5,-9.8,20.8);
    glVertex3f(-5,-9.8,20.2);
    glVertex3f(21,-9.8,20.2);
    glEnd();
    // warna lapangan putih4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-4.5,-9.8,20.8);
    glVertex3f(-5,-9.8,20.8);
    glVertex3f(-5,-9.8,35);
    glVertex3f(-4.5,-9.8,35);
    glEnd();
    // warna lapangan putih4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(21,-9.8,20.8);
    glVertex3f(20.5,-9.8,20.8);
    glVertex3f(20.5,-9.8,35);
    glVertex3f(21,-9.8,35);
    glEnd();


    // tempat penonton 1
    glBegin(GL_QUADS);
    glColor3f(0.8,0.0,0.0);
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
    glColor3f(0.8,0.0,0.0);
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
    glColor3f(0.7,0.0,0.0);
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
    glColor3f(0.7,0.0,0.0);
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
    glColor3f(1,1,0.7);
    glVertex3f(60.0,-10.3,-70.0);
    glVertex3f(60.0,10.0,-70.0);
    glVertex3f(-45.0,10.0,-70.0);
    glVertex3f(-45.0,-10.3,-70.0);
    glEnd();
    // tembok bangunan
    glBegin(GL_QUADS);
    glColor3f(1,1,0.8);
    glVertex3f(60.0,-10.3,-70.0);
    glVertex3f(60.0,10.0,-70.0);
    glVertex3f(60.0,10.0,55.0);
    glVertex3f(60.0,-10.3,55.0);
    glEnd();
    // tembok bangunan
    glBegin(GL_QUADS);
    glColor3f(1,1,0.6);
    glVertex3f(-45.0,-10.3,55.0);
    glVertex3f(-45.0,10.0,55.0);
    glVertex3f(60.0,10.0,55.0);
    glVertex3f(60.0,-10.3,55.0);
    glEnd();
    // tembok bangunan
    glBegin(GL_QUADS);
    glColor3f(1,1,1.9);
    glVertex3f(-45.0,-10.3,55.0);
    glVertex3f(-45.0,10.0,55.0);
    glVertex3f(-45.0,10.0,-70.0);
    glVertex3f(-45.0,-10.3,-70.0);
    glEnd();

    //papan lampu
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40,10.5,-55.0);
    glVertex3f(40,9.0,-55.0);
    glVertex3f(-25,9.0,-55.0);
    glVertex3f(-25,10.5,-55.0);
    glEnd();
    //papan lampu
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40,10.5,-55);
    glVertex3f(40,9.0,-55);
    glVertex3f(40,9.0,40);
    glVertex3f(40,10.5,40);
    glEnd();
    //papan lampu
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25,10.5,40);
    glVertex3f(-25,9.0,40);
    glVertex3f(40,9.0,40);
    glVertex3f(40,10.5,40);
    glEnd();
    //papan lampu
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25,10.5,40);
    glVertex3f(-25,9.0,40);
    glVertex3f(-25,9.0,-55);
    glVertex3f(-25,10.5,-55);
    glEnd();

    //papan iklan
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex3f(39.5,-10.0,-54.5);
    glVertex3f(39.5,-7.0,-54.5);
    glVertex3f(-24.5,-7.0,-54.5);
    glVertex3f(-24.5,-10.0,-54.5);
    glEnd();
    //papan iklan
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex3f(39.5,-10.0,-54.5);
    glVertex3f(39.5,-7.0,-54.5);
    glVertex3f(39.5,-7.0,39.5);
    glVertex3f(39.5,-10.0,39.5);
    glEnd();
    //papan iklan
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex3f(-24.5,-10.0,39.5);
    glVertex3f(-24.5,-7.0,39.5);
    glVertex3f(39.5,-7.0,39.5);
    glVertex3f(39.5,-10.0,39.5);
    glEnd();
    //papan iklan
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex3f(-24.5,-10.0,39.5);
    glVertex3f(-24.5,-7.0,39.5);
    glVertex3f(-24.5,-7.0,-54.5);
    glVertex3f(-24.5,-10.0,-54.5);
    glEnd();

    //tiang gawang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(2.0,-10.0,-50.0);
    glVertex3f(2.0,-2.0,-50.0);
    glVertex3f(2.5,-2.0,-50.0);
    glVertex3f(2.5,-10.0,-50.0);
    glEnd();
     //tiang gawang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(14.0,-10.0,-50.0);
    glVertex3f(14.0,-2.0,-50.0);
    glVertex3f(14.5,-2.0,-50.0);
    glVertex3f(14.5,-10.0,-50.0);
    glEnd();
    //mistar gawang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(14.5,-2.5,-50.0);
    glVertex3f(14.5,-2.0,-50.0);
    glVertex3f(2.5,-2.0,-50.0);
    glVertex3f(2.5,-2.5,-50.0);
    glEnd();

    //tiang gawang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(2.0,-10.0,35.0);
    glVertex3f(2.0,-2.0,35.0);
    glVertex3f(2.5,-2.0,35.0);
    glVertex3f(2.5,-10.0,35.0);
    glEnd();
     //tiang gawang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(14.0,-10.0,35.0);
    glVertex3f(14.0,-2.0,35.0);
    glVertex3f(14.5,-2.0,35.0);
    glVertex3f(14.5,-10.0,35.0);
    glEnd();
    //mistar gawang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(14.0,-2.5,35.0);
    glVertex3f(14.0,-2.0,35.0);
    glVertex3f(2.5,-2.0,35.0);
    glVertex3f(2.5,-2.5,35.0);
    glEnd();

     //tiang corner
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(34.1,-10.0,35.0);
    glVertex3f(34.1,-6.0,35.0);
    glVertex3f(35.1,-6.0,35.0);
    glVertex3f(35.1,-10.0,35.0);
    glEnd();
    //tiang corner
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(34-.1,-10.0,-50.0);
    glVertex3f(34.1,-6.0,-50.0);
    glVertex3f(35.1,-6.0,-50.0);
    glVertex3f(35.1,-10.0,-50.0);
    glEnd();
    //tiang corner
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-19-.1,-10.0,-50.0);
    glVertex3f(-19.1,-6.0,-50.0);
    glVertex3f(-20.1,-6.0,-50.0);
    glVertex3f(-20.1,-10.0,-50.0);
    glEnd();
    //tiang corner
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-19-.1,-10.0,35.0);
    glVertex3f(-19.1,-6.0,35.0);
    glVertex3f(-20.1,-6.0,35.0);
    glVertex3f(-20.1,-10.0,35.0);
    glEnd();

    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(0.0,10.2,40.0);
    glVertex3f(0.0,10.0,56.0);
    glVertex3f(1.0,10.0,56.0);
    glVertex3f(1.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(3.0,10.2,40.0);
    glVertex3f(3.0,10.0,56.0);
    glVertex3f(4.0,10.0,56.0);
    glVertex3f(4.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(6.0,10.2,40.0);
    glVertex3f(6.0,10.0,56.0);
    glVertex3f(7.0,10.0,56.0);
    glVertex3f(7.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(9.0,10.2,40.0);
    glVertex3f(9.0,10.0,56.0);
    glVertex3f(10.0,10.0,56.0);
    glVertex3f(10.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(12.0,10.2,40.0);
    glVertex3f(12.0,10.0,56.0);
    glVertex3f(13.0,10.0,56.0);
    glVertex3f(13.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(15.0,10.2,40.0);
    glVertex3f(15.0,10.0,56.0);
    glVertex3f(16.0,10.0,56.0);
    glVertex3f(16.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(18.0,10.2,40.0);
    glVertex3f(18.0,10.0,56.0);
    glVertex3f(19.0,10.0,56.0);
    glVertex3f(19.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(21.0,10.2,40.0);
    glVertex3f(21.0,10.0,56.0);
    glVertex3f(22.0,10.0,56.0);
    glVertex3f(22.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(24.0,10.2,40.0);
    glVertex3f(24.0,10.0,56.0);
    glVertex3f(25.0,10.0,56.0);
    glVertex3f(25.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(27.0,10.2,40.0);
    glVertex3f(27.0,10.0,56.0);
    glVertex3f(28.0,10.0,56.0);
    glVertex3f(28.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(30.0,10.2,40.0);
    glVertex3f(30.0,10.0,56.0);
    glVertex3f(31.0,10.0,56.0);
    glVertex3f(31.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(33.0,10.2,40.0);
    glVertex3f(33.0,10.0,56.0);
    glVertex3f(34.0,10.0,56.0);
    glVertex3f(34.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(36.0,10.2,40.0);
    glVertex3f(36.0,10.0,56.0);
    glVertex3f(37.0,10.0,56.0);
    glVertex3f(37.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(39.0,10.2,40.0);
    glVertex3f(39.0,10.0,56.0);
    glVertex3f(40.0,10.0,56.0);
    glVertex3f(40.0,10.2,40.0);
    glEnd();
    // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-2.0,10.2,40.0);
    glVertex3f(-2.0,10.0,56.0);
    glVertex3f(-3.0,10.0,56.0);
    glVertex3f(-3.0,10.2,40.0);
    glEnd();
     // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-5.0,10.2,40.0);
    glVertex3f(-5.0,10.0,56.0);
    glVertex3f(-6.0,10.0,56.0);
    glVertex3f(-6.0,10.2,40.0);
    glEnd();
     // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-8.0,10.2,40.0);
    glVertex3f(-8.0,10.0,56.0);
    glVertex3f(-9.0,10.0,56.0);
    glVertex3f(-9.0,10.2,40.0);
    glEnd();
     // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-11.0,10.2,40.0);
    glVertex3f(-11.0,10.0,56.0);
    glVertex3f(-12.0,10.0,56.0);
    glVertex3f(-12.0,10.2,40.0);
    glEnd();
     // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-14.0,10.2,40.0);
    glVertex3f(-14.0,10.0,56.0);
    glVertex3f(-15.0,10.0,56.0);
    glVertex3f(-15.0,10.2,40.0);
    glEnd();
     // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-17.0,10.2,40.0);
    glVertex3f(-17.0,10.0,56.0);
    glVertex3f(-18.0,10.0,56.0);
    glVertex3f(-18.0,10.2,40.0);
    glEnd();
     // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-20.0,10.2,40.0);
    glVertex3f(-20.0,10.0,56.0);
    glVertex3f(-21.0,10.0,56.0);
    glVertex3f(-21.0,10.2,40.0);
    glEnd();
     // tiang bangunan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-23.0,10.2,40.0);
    glVertex3f(-23.0,10.0,56.0);
    glVertex3f(-24.0,10.0,56.0);
    glVertex3f(-24.0,10.2,40.0);
    glEnd();
     // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-2.0,10.2,-71.0);
    glVertex3f(-2.0,10.2,-55.0);
    glVertex3f(-3.0,10.2,-55.0);
    glVertex3f(-3.0,10.2,-71.0);
    glEnd();
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-5.0,10.2,-71.0);
    glVertex3f(-5.0,10.2,-55.0);
    glVertex3f(-6.0,10.2,-55.0);
    glVertex3f(-6.0,10.2,-71.0);
    glEnd();
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-8.0,10.2,-71.0);
    glVertex3f(-8.0,10.2,-55.0);
    glVertex3f(-9.0,10.2,-55.0);
    glVertex3f(-9.0,10.2,-71.0);
    glEnd();
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-11.0,10.2,-71.0);
    glVertex3f(-11.0,10.2,-55.0);
    glVertex3f(-12.0,10.2,-55.0);
    glVertex3f(-12.0,10.2,-71.0);
    glEnd();
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-14.0,10.2,-71.0);
    glVertex3f(-14.0,10.2,-55.0);
    glVertex3f(-15.0,10.2,-55.0);
    glVertex3f(-15.0,10.2,-71.0);
    glEnd();
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-17.0,10.2,-71.0);
    glVertex3f(-17.0,10.2,-55.0);
    glVertex3f(-18.0,10.2,-55.0);
    glVertex3f(-18.0,10.2,-71.0);
    glEnd();
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-20.0,10.2,-71.0);
    glVertex3f(-20.0,10.2,-55.0);
    glVertex3f(-21.0,10.2,-55.0);
    glVertex3f(-21.0,10.2,-71.0);
    glEnd();
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-23.0,10.2,-71.0);
    glVertex3f(-23.0,10.2,-55.0);
    glVertex3f(-24.0,10.2,-55.0);
    glVertex3f(-24.0,10.2,-71.0);
    glEnd();
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(0.0,10.2,-71.0);
    glVertex3f(0.0,10.2,-55.0);
    glVertex3f(1.0,10.2,-55.0);
    glVertex3f(1.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(3.0,10.2,-71.0);
    glVertex3f(3.0,10.2,-55.0);
    glVertex3f(4.0,10.2,-55.0);
    glVertex3f(4.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(6.0,10.2,-71.0);
    glVertex3f(6.0,10.2,-55.0);
    glVertex3f(7.0,10.2,-55.0);
    glVertex3f(7.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(9.0,10.2,-71.0);
    glVertex3f(9.0,10.2,-55.0);
    glVertex3f(10.0,10.2,-55.0);
    glVertex3f(10.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(12.0,10.2,-71.0);
    glVertex3f(12.0,10.2,-55.0);
    glVertex3f(13.0,10.2,-55.0);
    glVertex3f(13.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(15.0,10.2,-71.0);
    glVertex3f(15.0,10.2,-55.0);
    glVertex3f(16.0,10.2,-55.0);
    glVertex3f(16.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(18.0,10.2,-71.0);
    glVertex3f(18.0,10.2,-55.0);
    glVertex3f(19.0,10.2,-55.0);
    glVertex3f(19.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(21.0,10.2,-71.0);
    glVertex3f(21.0,10.2,-55.0);
    glVertex3f(22.0,10.2,-55.0);
    glVertex3f(22.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(24.0,10.2,-71.0);
    glVertex3f(24.0,10.2,-55.0);
    glVertex3f(25.0,10.2,-55.0);
    glVertex3f(25.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(27.0,10.2,-71.0);
    glVertex3f(27.0,10.2,-55.0);
    glVertex3f(28.0,10.2,-55.0);
    glVertex3f(28.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(30.0,10.2,-71.0);
    glVertex3f(30.0,10.2,-55.0);
    glVertex3f(31.0,10.2,-55.0);
    glVertex3f(31.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(33.0,10.2,-71.0);
    glVertex3f(33.0,10.2,-55.0);
    glVertex3f(34.0,10.2,-55.0);
    glVertex3f(34.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(36.0,10.2,-71.0);
    glVertex3f(36.0,10.2,-55.0);
    glVertex3f(37.0,10.2,-55.0);
    glVertex3f(37.0,10.2,-71.0);
    glEnd();;
    // tiang bangunan atas
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(39.0,10.2,-71.0);
    glVertex3f(39.0,10.2,-55.0);
    glVertex3f(40.0,10.2,-55.0);
    glVertex3f(40.0,10.2,-71.0);
    glEnd();;

    // jalan penonton 1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-24.0,-10.0,39.9);
    glVertex3f(-24.0,10.2,55.0);
    glVertex3f(-23.5,10.2,55.0);
    glVertex3f(-23.5,-10.0,39.9);
    glEnd();
    // jalan penonton 1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(39.0,-10.0,39.9);
    glVertex3f(39.0,10.2,55.0);
    glVertex3f(38.5,10.2,55.0);
    glVertex3f(38.5,-10.0,39.9);
    glEnd();
    // jalan penonton 1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(19.0,-10.0,39.9);
    glVertex3f(19.0,10.2,55.0);
    glVertex3f(18.5,10.2,55.0);
    glVertex3f(18.5,-10.0,39.9);
    glEnd();
    // jalan penonton 1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-3.0,-10.0,39.9);
    glVertex3f(-3.0,10.2,55.0);
    glVertex3f(-2.5,10.2,55.0);
    glVertex3f(-2.5,-10.0,39.9);
    glEnd();

    // jalan penonton 2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-24.0,-10.0,-55.0);
    glVertex3f(-24.0,10.2,-70.0);
    glVertex3f(-23.5,10.2,-70.0);
    glVertex3f(-23.5,-10.0,-55.0);
    glEnd();
    // jalan penonton 2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(39.0,-10.0,-55.0);
    glVertex3f(39.0,10.2,-70.0);
    glVertex3f(38.5,10.2,-70.0);
    glVertex3f(38.5,-10.0,-55.0);
    glEnd();
     // jalan penonton 2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-3.0,-10.0,-55.0);
    glVertex3f(-3.0,10.2,-70.0);
    glVertex3f(-2.5,10.2,-70.0);
    glVertex3f(-2.5,-10.0,-55.0);
    glEnd();
    // jalan penonton 2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(19.0,-10.0,-55.0);
    glVertex3f(19.0,10.2,-70.0);
    glVertex3f(18.5,10.2,-70.0);
    glVertex3f(18.5,-10.0,-55.0);
    glEnd();

    // jalan penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.1,-55.0);
    glVertex3f(-45.0,10.1,-55.0);
    glVertex3f(-45.0,10.1,-54.5);
    glVertex3f(-25.0,-10.1,-54.5);
    glEnd();
    // jalan penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.1,40.0);
    glVertex3f(-45.0,10.1,40.0);
    glVertex3f(-45.0,10.1,39.5);
    glVertex3f(-25.0,-10.1,39.5);
    glEnd();
    // jalan penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.1,15.0);
    glVertex3f(-45.0,10.1,15.0);
    glVertex3f(-45.0,10.1,14.5);
    glVertex3f(-25.0,-10.1,14.5);
    glEnd();
    // jalan penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.1,-30.0);
    glVertex3f(-45.0,10.1,-30.0);
    glVertex3f(-45.0,10.1,-29.5);
    glVertex3f(-25.0,-10.1,-29.5);
    glEnd();
    // jalan penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.1,-8.0);
    glVertex3f(-45.0,10.1,-8.0);
    glVertex3f(-45.0,10.1,-7.5);
    glVertex3f(-25.0,-10.1,-7.5);
    glEnd();

    // jalan penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40.0,-10.1,-55.0);
    glVertex3f(60.0,10.1,-55.0);
    glVertex3f(60.0,10.1,-54.5);
    glVertex3f(40.0,-10.1,-54.5);
    glEnd();
   // jalan penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40.0,-10.1,40.0);
    glVertex3f(60.0,10.1,40.0);
    glVertex3f(60.0,10.1,39.5);
    glVertex3f(40.0,-10.1,39.5);
    glEnd();
    // jalan penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40.0,-10.1,15.0);
    glVertex3f(60.0,10.1,15.0);
    glVertex3f(60.0,10.1,14.5);
    glVertex3f(40.0,-10.1,14.5);
    glEnd();
    // jalan penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40.0,-10.1,-30.0);
    glVertex3f(60.0,10.1,-30.0);
    glVertex3f(60.0,10.1,-29.5);
    glVertex3f(40.0,-10.1,-29.5);
    glEnd();
    // jalan penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40.0,-10.1,-8.0);
    glVertex3f(60.0,10.1,-8.0);
    glVertex3f(60.0,10.1,-7.5);
    glVertex3f(40.0,-10.1,-7.5);
    glEnd();
       // Gerbang 1
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(65.0,-10.3,-25.0);
    glVertex3f(65.0,6.0,-25.0);
    glVertex3f(65.0,6.0,-20.0);
    glVertex3f(65.0,-10.3,-20.0);
    glEnd();

    // Gerbang 2
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(65.0,-10.3,-20.0);
    glVertex3f(65.0,6.0,-20.0);
    glVertex3f(60.0,6.0,-20.0);
    glVertex3f(60.0,-10.3,-20.0);
    glEnd();

    // Gerbang 3
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(65.0,-10.3,-25.0);
    glVertex3f(65.0,6.0,-25.0);
    glVertex3f(60.0,6.0,-25.0);
    glVertex3f(60.0,-10.3,-25.0);
    glEnd();

    // Gerbang 4
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(65.0,6.0,-20.0);
    glVertex3f(60.0,6.0,-20.0);
    glVertex3f(60.0,6.0,-25.0);
    glVertex3f(65.0,6.0,-25.0);
    glEnd();
    // Gerbang 1
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(65.0,-10.3,5.0);
    glVertex3f(65.0,6.0,5.0);
    glVertex3f(65.0,6.0,10.0);
    glVertex3f(65.0,-10.3,10.0);
    glEnd();
    // Gerbang 1
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(65.0,-10.3,5.0);
    glVertex3f(65.0,6.0,5.0);
    glVertex3f(60.0,6.0,5.0);
    glVertex3f(60.0,-10.3,5.0);
    glEnd();
    // Gerbang 1
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(65.0,-10.3,10.0);
    glVertex3f(65.0,6.0,10.0);
    glVertex3f(60.0,6.0,10.0);
    glVertex3f(60.0,-10.3,10.0);
    glEnd();
    // Gerbang 1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(65.0,6.0,5.0);
    glVertex3f(60.0,6.0,5.0);
    glVertex3f(60.0,6.0,10.0);
    glVertex3f(65.0,6.0,10.0);
    glEnd();
    // papan nama
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(62.5,1.3,-20.0);
    glVertex3f(62.5,6.0,-20.0);
    glVertex3f(62.5,6.0,5.0);
    glVertex3f(62.5,1.3,5.0);
    glEnd();
    
     // atap tulisan m
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-28.0,10.3,30.0);
    glVertex3f(-42.0,10.1,30.0);
    glVertex3f(-42.0,10.1,32.0);
    glVertex3f(-28.0,10.3,32.0);
    glEnd();
       // atap tulisan m
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-28.0,10.3,14.0);
    glVertex3f(-42.0,10.1,14.0);
    glVertex3f(-42.0,10.1,16.0);
    glVertex3f(-28.0,10.3,16.0);
    glEnd();
       // atap tulisan m
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-28.0,10.3,22.0);
    glVertex3f(-42.0,10.1,30.0);
    glVertex3f(-42.0,10.1,32.0);
    glVertex3f(-28.0,10.3,24.0);
    glEnd();
       // atap tulisan m
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-28.0,10.3,22.0);
    glVertex3f(-42.0,10.1,14.0);
    glVertex3f(-42.0,10.1,16.0);
    glVertex3f(-28.0,10.3,24.0);
    glEnd();
    // atap tulisan f
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-28.0,10.3,-2.0);
    glVertex3f(-42.0,10.1,-2.0);
    glVertex3f(-42.0,10.1,-4.0);
    glVertex3f(-28.0,10.3,-4.0);
    glEnd();
       // atap tulisan f
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-40.0,10.3,-16.0);
    glVertex3f(-42.0,10.1,-16.0);
    glVertex3f(-42.0,10.1,-2.0);
    glVertex3f(-40.0,10.3,-2.0);
    glEnd();
        // atap tulisan f
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-36.0,10.3,-14.0);
    glVertex3f(-34.0,10.1,-14.0);
    glVertex3f(-34.0,10.1,-2.0);
    glVertex3f(-36.0,10.3,-2.0);
    glEnd();
    // atap tulisan c
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-28.0,10.3,-32.0);
    glVertex3f(-42.0,10.1,-32.0);
    glVertex3f(-42.0,10.1,-30.0);
    glVertex3f(-28.0,10.3,-30.0);
    glEnd();
           // atap tulisan c
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-40.0,10.3,-30.0);
    glVertex3f(-42.0,10.1,-30.0);
    glVertex3f(-42.0,10.1,-44.0);
    glVertex3f(-40.0,10.3,-44.0);
    glEnd();
          // atap tulisan c
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-28.0,10.3,-30.0);
    glVertex3f(-30.0,10.1,-30.0);
    glVertex3f(-30.0,10.1,-44.0);
    glVertex3f(-28.0,10.3,-44.0);
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

