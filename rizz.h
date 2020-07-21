#include <stdio.h>
#include <stdlib.h>
#include<Windows.h>
#include<GL\glut.h>
#include <string.h>
#include <stdarg.h>

void rizz1(void);


void rizz1(){

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
    glVertex3f(2.0,-0.5,-50.0);
    glVertex3f(2.5,-0.5,-50.0);
    glVertex3f(2.5,-10.0,-50.0);
    glEnd();
     //tiang gawang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(14.0,-10.0,-50.0);
    glVertex3f(14.0,-0.5,-50.0);
    glVertex3f(14.5,-0.5,-50.0);
    glVertex3f(14.5,-10.0,-50.0);
    glEnd();
    //mistar gawang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(14.5,-1.5,-50.0);
    glVertex3f(14.5,-0.5,-50.0);
    glVertex3f(2.5,-0.5,-50.0);
    glVertex3f(2.5,-1.5,-50.0);
    glEnd();

        //tiang gawang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(2.0,-10.0,35.0);
    glVertex3f(2.0,-0.5,35.0);
    glVertex3f(2.5,-0.5,35.0);
    glVertex3f(2.5,-10.0,35.0);
    glEnd();
     //tiang gawang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(14.0,-10.0,35.0);
    glVertex3f(14.0,-0.5,35.0);
    glVertex3f(14.5,-0.5,35.0);
    glVertex3f(14.5,-10.0,35.0);
    glEnd();
    //mistar gawang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(14.0,-1.5,35.0);
    glVertex3f(14.0,-0.5,35.0);
    glVertex3f(2.5,-0.5,35.0);
    glVertex3f(2.5,-1.5,35.0);
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

    // jalan penonton 2
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

    // tempat penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.1,-55.0);
    glVertex3f(-45.0,10.1,-55.0);
    glVertex3f(-45.0,10.1,-54.5);
    glVertex3f(-25.0,-10.1,-54.5);
    glEnd();
    // tempat penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.1,40.0);
    glVertex3f(-45.0,10.1,40.0);
    glVertex3f(-45.0,10.1,39.5);
    glVertex3f(-25.0,-10.1,39.5);
    glEnd();
    // tempat penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.1,15.0);
    glVertex3f(-45.0,10.1,15.0);
    glVertex3f(-45.0,10.1,14.5);
    glVertex3f(-25.0,-10.1,14.5);
    glEnd();
    // tempat penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.1,-30.0);
    glVertex3f(-45.0,10.1,-30.0);
    glVertex3f(-45.0,10.1,-29.5);
    glVertex3f(-25.0,-10.1,-29.5);
    glEnd();
    // tempat penonton 3
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-25.0,-10.1,-8.0);
    glVertex3f(-45.0,10.1,-8.0);
    glVertex3f(-45.0,10.1,-7.5);
    glVertex3f(-25.0,-10.1,-7.5);
    glEnd();

    // tempat penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40.0,-10.1,-55.0);
    glVertex3f(60.0,10.1,-55.0);
    glVertex3f(60.0,10.1,-54.5);
    glVertex3f(40.0,-10.1,-54.5);
    glEnd();
    // tempat penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40.0,-10.1,40.0);
    glVertex3f(60.0,10.1,40.0);
    glVertex3f(60.0,10.1,39.5);
    glVertex3f(40.0,-10.1,39.5);
    glEnd();
    // tempat penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40.0,-10.1,15.0);
    glVertex3f(60.0,10.1,15.0);
    glVertex3f(60.0,10.1,14.5);
    glVertex3f(40.0,-10.1,14.5);
    glEnd();
    // tempat penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40.0,-10.1,-30.0);
    glVertex3f(60.0,10.1,-30.0);
    glVertex3f(60.0,10.1,-29.5);
    glVertex3f(40.0,-10.1,-29.5);
    glEnd();
    // tempat penonton 4
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(40.0,-10.1,-8.0);
    glVertex3f(60.0,10.1,-8.0);
    glVertex3f(60.0,10.1,-7.5);
    glVertex3f(40.0,-10.1,-7.5);
    glEnd();

	//glPopMatrix();
	glutSwapBuffers();
    //glFlush();
}
