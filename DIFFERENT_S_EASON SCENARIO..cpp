#include <windows.h>
#include <GL/glut.h>
#include<Gl/gl.h>
#include <iostream>
#include<stdlib.h>
#include<math.h>
#define PI   3.14159265358979323846

using namespace std;

GLfloat birdPosition=0.0f,birdPosition1=0.0f,cloudPosition=0.0f,cloudPosition1=0.0f,carPosition=0.0f,carPosition1=0.0f,boatPosition = 0.0f,snowPosition=0.0f,positionRain = 0.0f;
GLfloat birdSpeed=0.0f,birdSpeed1=0.0f,cloudSpeed=0.0f,cloudSpeed1=0.0f,snowSpeed=0.0f,boatSpeed= 0.0f,carSpeed= 0.0f,carSpeed1= 0.0f,rainSpeed=0.01;
bool winter=false,rainy=false,summer=true;

void update(int value)
{
    if (boatPosition < -2.0)
        boatPosition = 3.5f;
    else if (boatPosition > 3.5)
        boatPosition = -2.0f;

    if (carPosition > 4.0)
        carPosition = -0.4f;

    if (carPosition1 < -4.0)
        carPosition1 = 1.0f;

    if (cloudPosition > 1.8)
        cloudPosition = -3.0f;

    if (cloudPosition1 < -4.0)
        cloudPosition1 = 1.0;

    if (birdPosition > 4.0)
        birdPosition = -0.5;

    if (positionRain < -0.5)
        positionRain=0.0;

    if (snowPosition < -0.3)
        snowPosition=0.0;

    boatPosition -=boatSpeed;
    carPosition -=carSpeed;
    carPosition1 -=carSpeed1;
    snowPosition-=snowSpeed;
    positionRain-=rainSpeed;
    cloudPosition-=cloudSpeed;
    cloudPosition1-=cloudSpeed1;
    birdPosition-=birdSpeed;
    birdPosition1-=birdSpeed1;
    glutPostRedisplay();
    glutTimerFunc(100, update,0);
}

void circle(GLfloat x, GLfloat y, GLfloat r)
{
    int i;
    int triangleAmount = 20; //# of triangles used to draw circle
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);

    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x+(r*cos(i * twicePi / triangleAmount)),
            y+(r*sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.01f);
}


void boat()
{
    ///BOAT01///
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f,  -1.01f);
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.2f, -1.08f);
    glVertex2f(0.1f,  -1.08f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(122, 122, 82);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(0.1f, -1.01f);
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.3f, -0.93f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(0.1f, -0.91f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat01///
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(0.1f, -1.08f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat01///
    glVertex2f(-0.2f, -1.01f);
    glVertex2f(-0.3f, -0.93f);
    glVertex2f(-0.2f, -1.08f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.2f, -0.93f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.3f, -0.93f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.91f);
    glVertex2f(0.1f, -1.01f);
    glVertex2f(0.0f, -0.91f);
    glVertex2f(0.0f, -1.01f);
    glVertex2f(-0.1f, -0.91f);
    glVertex2f(-0.1f, -1.01f);
    glVertex2f(-0.2f, -0.91f);
    glVertex2f(-0.2f, -1.01f);
    glEnd();

///BOAT02///
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(-0.2f,-0.75f);
    glVertex2f(-0.2f,-0.82f);
    glVertex2f(0.1f, -0.82f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(122, 122, 82);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(-0.2f,-0.75f);
    glVertex2f(-0.3f,-0.67f);
    glVertex2f(-0.2f,-0.65f);
    glVertex2f(0.1f, -0.65f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat02///
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.82f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);///boat02///
    glVertex2f(-0.2f, -0.75f);
    glVertex2f(-0.3f, -0.67f);
    glVertex2f(-0.2f, -0.82f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(0.1f,  -0.65f);
    glVertex2f(0.2f,  -0.67f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.3f, -0.67f);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.1f, - 0.65f);
    glVertex2f(0.1f, - 0.75f);
    glVertex2f(0.0f, - 0.65f);
    glVertex2f(0.0f,  -0.75f);
    glVertex2f(-0.1f, -0.65f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.65f);
    glVertex2f(-0.2f, -0.75f);
    glEnd();

    ///SHIP///
    if (rainy==true || summer==true)
    {
        glPushMatrix();
        glTranslatef(boatPosition,0.0f, 0.0f);
        glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0);
        glVertex2f(-1.8f, 0.19f);
        glVertex2f(-1.2f, 0.19f);
        glVertex2f(-1.077f, 0.47f);
        glVertex2f(-1.19f, 0.29f);
        glVertex2f(-1.9f, 0.29f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(102, 255, 255);
        glVertex2f(-1.85f, 0.29f);
        glVertex2f(-1.25f, 0.29f);
        glVertex2f(-1.25f, 0.47f);
        glVertex2f(-1.85f, 0.47f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(71, 107, 107);
        glVertex2f(-1.8f, 0.47f);
        glVertex2f(-1.35f, 0.47f);
        glVertex2f(-1.35f, 0.61f);
        glVertex2f(-1.8f, 0.61f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(153, 102, 51);
        glVertex2f(-1.5f, 0.61f);
        glVertex2f(-1.6f, 0.61f);
        glVertex2f(-1.6f, 0.66f);
        glVertex2f(-1.5f, 0.66f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 0, 0);
        glVertex2f(-1.55f, 0.66f);
        glVertex2f(-1.55f, 0.72f);
        glVertex2f(-1.75f, 0.72f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0);
        glVertex2f(-1.8f, 0.44f);
        glVertex2f(-1.72f, 0.44f);
        glVertex2f(-1.72f, 0.35f);
        glVertex2f(-1.8f, 0.35f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0);
        glVertex2f(-1.62f, 0.44f);
        glVertex2f(-1.56f, 0.44f);
        glVertex2f(-1.56f, 0.35f);
        glVertex2f(-1.62f, 0.35f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0);
        glVertex2f(-1.40f, 0.44f);
        glVertex2f(-1.32f, 0.44f);
        glVertex2f(-1.32f, 0.35f);
        glVertex2f(-1.40f, 0.35f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0);
        glVertex2f(-1.7f, 0.48f);
        glVertex2f(-1.62f, 0.48f);
        glVertex2f(-1.62f, 0.58f);
        glVertex2f(-1.7f, 0.58f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(255, 255, 0);
        glVertex2f(-1.5f, 0.48f);
        glVertex2f(-1.42f, 0.48f);
        glVertex2f(-1.42f, 0.58f);
        glVertex2f(-1.5f, 0.58f);
        glEnd();

        glLineWidth(2);
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2f(-1.85f, 0.29f);
        glVertex2f(-1.25f, 0.29f);
        glVertex2f(-1.25f, 0.47f);
        glVertex2f(-1.85f, 0.47f);
        glEnd();
        glLineWidth(2);
        glBegin(GL_LINES);
        glVertex2f(-1.25f, 0.29f);
        glVertex2f(-1.25f, 0.47f);
        glVertex2f(-1.85f, 0.47f);
        glVertex2f(-1.85f, 0.29f);
        glEnd();
        glLineWidth(2);
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2f(-1.8f, 0.47f);
        glVertex2f(-1.35f, 0.47f);
        glVertex2f(-1.35f, 0.61f);
        glVertex2f(-1.8f, 0.61f);
        glEnd();
        glLineWidth(2);
        glBegin(GL_LINES);
        glColor3ub(0,0,0);
        glVertex2f(-1.35f, 0.47f);
        glVertex2f(-1.35f, 0.61f);
        glVertex2f(-1.8f, 0.61f);
        glVertex2f(-1.8f, 0.47f);
        glEnd();
        glPopMatrix();
    }
}

void road()
{
    ///HIGHWAYROAD///
    glBegin(GL_QUADS);
    glColor3ub(64, 64, 64);
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(2.0f, -1.25f);
    glVertex2f(-2.0f, -1.25f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);///LINES///
    glVertex2f(-2.0f, -2.0f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(2.0f, -1.25f);
    glVertex2f(-2.0f, -1.25f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(0.2f, -1.60f);
    glVertex2f(0.4f, -1.60f);
    glVertex2f(0.4f, -1.64f);
    glVertex2f(0.2f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(0.6f, -1.60f);
    glVertex2f(0.8f, -1.60f);
    glVertex2f(0.8f, -1.64f);
    glVertex2f(0.6f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.0f, -1.60f);
    glVertex2f(1.2f, -1.60f);
    glVertex2f(1.2f, -1.64f);
    glVertex2f(1.0f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.4f, -1.60f);
    glVertex2f(1.6f, -1.60f);
    glVertex2f(1.6f, -1.64f);
    glVertex2f(1.4f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(1.8f, -1.60f);
    glVertex2f(2.0f, -1.60f);
    glVertex2f(2.0f, -1.64f);
    glVertex2f(1.8f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.0f, -1.60f);
    glVertex2f(-0.2f, -1.60f);
    glVertex2f(-0.2f, -1.64f);
    glVertex2f(-0.0f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.4f, -1.60f);
    glVertex2f(-0.6f, -1.60f);
    glVertex2f(-0.6f, -1.64f);
    glVertex2f(-0.4f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-0.8f, -1.60f);
    glVertex2f(-1.0f, -1.60f);
    glVertex2f(-1.0f, -1.64f);
    glVertex2f(-0.8f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-1.2f, -1.60f);
    glVertex2f(-1.4f, -1.60f);
    glVertex2f(-1.4f, -1.64f);
    glVertex2f(-1.2f, -1.64f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);///DESH///
    glVertex2f(-1.6f, -1.60f);
    glVertex2f(-1.8f, -1.60f);
    glVertex2f(-1.8f, -1.64f);
    glVertex2f(-1.6f, -1.64f);
    glEnd();
}


void river()
{
    if (winter==true)
    {
        glColor3ub(51, 102, 255);
    }
    else if (summer==true)
    {
        glColor3ub(0, 102, 255);
    }
    else if (rainy==true)
    {
        glColor3ub(0, 0, 255);
    }
    else
    {

    }

    glBegin(GL_QUADS);
    glVertex2f(-2.0f, 0.80f);
    glVertex2f(2.0f, 0.80f);
    glVertex2f(2.0f, -2.0f);
    glVertex2f(-2.0f, -2.0f);
    glEnd();

    glFlush();
}

void ground()
{

    ///GROUND01///
    glBegin(GL_POLYGON);
    if (winter==true)
    {
        glColor3ub(255, 255, 255);
    }
    else if (summer==true)
    {
        glColor3ub(0, 255, 0);
    }

    else if (rainy==true)
    {
        glColor3ub(0, 102, 0);
    }
    else
    {

    }

    glVertex2f(-0.7f,  -0.0f);
    glVertex2f(-2.0f,  -0.0f);
    glVertex2f(-2.0f,  -2.0f);
    glVertex2f(-0.7f,  -2.0f);
    glVertex2f(-0.5f,  -2.0f);
    glVertex2f(-0.28f,  -1.8f);
    glVertex2f(-0.7f,  -1.6f);
    glVertex2f(-0.7f,  -1.75f);
    glVertex2f(-0.3f,  -1.4f);
    glVertex2f(-0.3f,  -1.18f);
    glVertex2f(-0.7f,  -1.0f);
    glVertex2f(-0.7f,  -1.17f);
    glVertex2f(-0.24f,  -0.97f);
    glVertex2f(-0.7f,  -0.6f);
    glVertex2f(-0.7f,  -0.8f);
    glVertex2f(-0.38f,  -0.65f);
    glVertex2f(-0.7f,  -0.44f);
    glVertex2f(-0.7f,  -0.6f);
    glVertex2f(-0.3f,  -0.4f);
    glEnd();

///GROUND02///
    glBegin(GL_POLYGON);

    glVertex2f(1.0f,  -0.6f);
    glVertex2f(2.0f,  -0.6f);
    glVertex2f(2.0f,  -2.0f);
    glVertex2f(1.0f,  -2.0f);
    glVertex2f(0.7f,  -2.0f);
    glVertex2f(0.7f,  -1.68f);
    glVertex2f(1.0f,  -1.9f);
    glVertex2f(1.0f,  -1.52f);
    glVertex2f(0.75f,  -1.3f);
    glVertex2f(1.0f,  -1.0f);
    glVertex2f(1.0f,  -1.1f);
    glVertex2f(0.7f,  -0.93f);
    glVertex2f(0.7f,  -0.8f);
    glEnd();

    glFlush();
}
void hill()
{
    ///HILL01///
    glBegin(GL_POLYGON);
    if (winter==true)
    {
        glColor3ub(255, 255, 255);
    }
    else if (summer==true)
    {
        glColor3ub(0, 255, 0);
    }

    else if (rainy==true)
    {
        glColor3ub(0, 102, 0);
    }
    else
    {

    }
    glVertex2f(-1.5f,  0.8f);
    glVertex2f(-2.0f,  0.8f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-1.53f, 0.90f);
    glVertex2f(-1.97f, 0.90f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-1.65f, 1.05f);
    glVertex2f(-1.85f, 1.05f);
    glVertex2f(-1.75f, 1.10f);
    glEnd();
///HILL02///
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f,  0.8f);
    glVertex2f(-1.5f,  0.8f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-1.03f, 0.90f);
    glVertex2f(-1.47f, 0.90f);
    glVertex2f(-1.35f, 1.05f);
    glVertex2f(-1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-1.15f, 1.05f);
    glVertex2f(-1.35f,1.05f);
    glVertex2f(-1.25f,1.10f);
    glEnd();
///HILL03///
    glBegin(GL_POLYGON);
    glVertex2f(-0.5f,  0.8f);
    glVertex2f(-1.0f,  0.8f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.53f, 0.90f);
    glVertex2f(-0.97f, 0.90f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.65f, 1.05f);
    glVertex2f(-0.85f, 1.05f);
    glVertex2f(-0.75f, 1.10f);
    glEnd();
///HILL04///
    glBegin(GL_POLYGON);
    glVertex2f(-0.0f,  0.8f);
    glVertex2f(-0.5f,  0.8f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.03f, 0.90f);
    glVertex2f(-0.47f, 0.90f);
    glVertex2f(-0.35f, 1.05f);
    glVertex2f(-0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.15f, 1.05f);
    glVertex2f(-0.35f,1.05f);
    glVertex2f(-0.25f,1.10f);
    glEnd();
///HILL05///
    glBegin(GL_POLYGON);
    glVertex2f(1.5f,  0.8f);
    glVertex2f(2.0f,  0.8f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.53f, 0.90f);
    glVertex2f(1.97f, 0.90f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.65f, 1.05f);
    glVertex2f(1.85f, 1.05f);
    glVertex2f(1.75f, 1.10f);
    glEnd();
///HILL06///
    glBegin(GL_POLYGON);
    glVertex2f(1.0f,  0.8f);
    glVertex2f(1.5f,  0.8f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.03f, 0.90f);
    glVertex2f(1.47f, 0.90f);
    glVertex2f(1.35f, 1.05f);
    glVertex2f(1.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.15f, 1.05f);
    glVertex2f(1.35f,1.05f);
    glVertex2f(1.25f,1.10f);
    glEnd();
///HILL07///
    glBegin(GL_POLYGON);
    glVertex2f(0.5f,  0.8f);
    glVertex2f(1.0f,  0.8f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.53f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.53f, 0.90f);
    glVertex2f(0.97f, 0.90f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.65f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.65f, 1.05f);
    glVertex2f(0.85f, 1.05f);
    glVertex2f(0.75f, 1.10f);
    glEnd();
///HILL08///
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,  0.8f);
    glVertex2f(0.5f,  0.8f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.03f, 0.90f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.03f, 0.90f);
    glVertex2f(0.47f, 0.90f);
    glVertex2f(0.35f, 1.05f);
    glVertex2f(0.15f, 1.05f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.15f, 1.05f);
    glVertex2f(0.35f,1.05f);
    glVertex2f(0.25f,1.10f);
    glEnd();
    glFlush();
}

void grass_walkingroad ()
{
    if (summer==true || rainy==true)
    {
        ///GRASS01///
        glBegin(GL_POLYGON);
        glColor3ub(0, 204, 0);
        glVertex2f(-1.89f, -0.5f);
        glVertex2f(-1.86f, -0.450f);
        glVertex2f(-1.84f, -0.150f);
        glVertex2f(-1.87f, -0.350f);
        glVertex2f(-1.89f, -0.5f);
        glVertex2f(-1.92f, -0.450f);
        glVertex2f(-1.94f, -0.150f);
        glVertex2f(-1.91f, -0.350f);
        glVertex2f(-1.89f, -0.5f);
        glVertex2f(-1.88f, -0.350f);
        glVertex2f(-1.89f, -0.150f);
        glVertex2f(-1.90f, -0.350f);
        glEnd();
///GRASS02///
        glBegin(GL_POLYGON);
        glColor3ub(102, 153, 0);
        glVertex2f(-0.90f, -0.6f);
        glVertex2f(-0.87f, -0.550f);
        glVertex2f(-0.85f, -0.250f);
        glVertex2f(-0.88f, -0.450f);
        glVertex2f(-0.90f, -0.6f);
        glVertex2f(-0.89f, -0.550f);
        glVertex2f(-0.90f, -0.250f);
        glVertex2f(-0.91f, -0.450f);
        glVertex2f(-0.90f, -0.6f);
        glVertex2f(-0.93f, -0.550f);
        glVertex2f(-0.95f, -0.250f);
        glVertex2f(-0.92f, -0.450f);
        glEnd();
///GRASS03///
        glBegin(GL_POLYGON);
        glColor3ub(0, 204, 0);
        glVertex2f(-0.60f, -0.5f);
        glVertex2f(-0.57f, -0.450f);
        glVertex2f(-0.55f, -0.150f);
        glVertex2f(-0.58f, -0.350f);
        glVertex2f(-0.60f, -0.5f);
        glVertex2f(-0.59f, -0.450f);
        glVertex2f(-0.60f, -0.150f);
        glVertex2f(-0.61f, -0.350f);
        glVertex2f(-0.60f, -0.5f);
        glVertex2f(-0.63f, -0.450f);
        glVertex2f(-0.65f, -0.150f);
        glVertex2f(-0.62f, -0.350f);
        glEnd();
///GRASS04///
        glBegin(GL_POLYGON);
        glColor3ub(102, 153, 0);
        glVertex2f(-0.79f, -0.57f);
        glVertex2f(-0.76f, -0.450f);
        glVertex2f(-0.74f, -0.150f);
        glVertex2f(-0.78f, -0.350f);
        glVertex2f(-0.79f, -0.57f);
        glVertex2f(-0.78f, -0.450f);
        glVertex2f(-0.79f, -0.150f);
        glVertex2f(-0.80f, -0.350f);
        glVertex2f(-0.79f, -0.57f);
        glVertex2f(-0.82f, -0.450f);
        glVertex2f(-0.84f, -0.150f);
        glVertex2f(-0.81f, -0.350f);
        glEnd();
///GRASS05///
        glBegin(GL_POLYGON);
        glColor3ub(0, 204, 0);
        glVertex2f(-0.69f, -0.53f);
        glVertex2f(-0.66f, -0.450f);
        glVertex2f(-0.64f, -0.150f);
        glVertex2f(-0.68f, -0.350f);
        glVertex2f(-0.69f, -0.53f);
        glVertex2f(-0.68f, -0.450f);
        glVertex2f(-0.69f, -0.150f);
        glVertex2f(-0.70f, -0.350f);
        glVertex2f(-0.69f, -0.53f);
        glVertex2f(-0.72f, -0.450f);
        glVertex2f(-0.74f, -0.150f);
        glVertex2f(-0.71f, -0.350f);
        glEnd();

///WALKING ROAD///
        glBegin(GL_POLYGON);
        glColor3ub(153, 153, 102);
        glVertex2f(-1.73f, -0.5f);
        glVertex2f(-1.57f, -0.5f);
        glVertex2f(-1.45f, -1.3f);
        glVertex2f(-1.61f, -1.3f);
        glEnd();
        glBegin(GL_QUADS);
        glVertex2f(-1.45f, -1.3f);
        glVertex2f(-1.61f, -1.3f);
        glVertex2f(-1.01f, -2.0f);
        glVertex2f(-1.18f, -2.0f);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(-1.45f, -1.3f);
        glVertex2f(-1.61f, -1.3f);
        glVertex2f(-1.01f, -2.0f);
        glVertex2f(-1.18f, -2.0f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(153, 153, 102);
        glVertex2f(-0.98f, -0.3f);
        glVertex2f(-1.14f, -0.3f);
        glVertex2f(-1.26f, -1.85f);
        glVertex2f(-1.1f, -1.85f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(153, 153, 102);
        glVertex2f(1.48f, -0.8f);
        glVertex2f(1.61f, -0.8f);
        glVertex2f(1.83f, -2.0f);
        glVertex2f(1.70f, -2.0f);
        glEnd();
    }
}

void bird ()
{
    ///BIRD01///
    if (rainy==true || summer==true)
    {
        glPushMatrix();
        glTranslatef(birdPosition,0.0f, 0.0f);
        glBegin(GL_POLYGON);
        glColor3ub(184,134,11);
        glVertex2f(-1.8f,  1.55f);
        glVertex2f(-1.7f,  1.65f);
        glVertex2f(-1.95f, 1.63f);
        glVertex2f(-1.9f, 1.53f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(217, 217, 217);
        glVertex2f(-1.78f,1.641f);
        glVertex2f(-1.88f,1.8f);
        glVertex2f(-1.85f,1.639f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(242, 242, 242 );
        glVertex2f(-1.78f,1.641f);
        glVertex2f(-1.91f,1.75f);
        glVertex2f(-1.87f,1.639f);
        glEnd();

        glPointSize( 2.5 );
        glBegin(GL_POINTS);

        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-01.74f,1.635f);
        glEnd();
        glPopMatrix();

///BIRD02///
        glPushMatrix();
        glTranslatef(birdPosition1,0.0f, 0.0f);
        glBegin(GL_POLYGON);
        glColor3ub(255, 153, 0);
        glVertex2f(-1.5f,  1.35f);
        glVertex2f(-1.4f,  1.45f);
        glVertex2f(-1.65f, 1.43f);
        glVertex2f(-1.6f, 1.33f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(217, 217, 217);
        glVertex2f(-1.48f,1.441f);
        glVertex2f(-1.58f,1.6f);
        glVertex2f(-1.55f,1.439f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(242, 242, 242 );
        glVertex2f(-1.48f,1.441f);
        glVertex2f(-1.61f,1.55f);
        glVertex2f(-1.57f,1.439f);
        glEnd();

        glPointSize( 2.5 );
        glBegin(GL_POINTS);
        glColor3ub(0,0,0);
        glVertex2f(-01.44f,1.435f);
        glEnd();
        glPopMatrix();
    }

    birdPosition+=0.1;
    birdPosition1+=0.04;
}

void tree ()
{
    ///TREE01///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(0.91f, -0.1f);
    glVertex2f(0.91f, -0.7f);
    glVertex2f(0.94f, -0.7f);
    glVertex2f(0.94f, -0.1f);
    glEnd();
///TREE02///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(1.14f, -0.0f);
    glVertex2f(1.14f, -0.7f);
    glVertex2f(1.17f, -0.7f);
    glVertex2f(1.17f, -0.0f);
    glEnd();
///TREE03///
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(1.81f, -0.0f);
    glVertex2f(1.81f, -0.7f);
    glVertex2f(1.84f, -0.7f);
    glVertex2f(1.84f, -0.0f);
    glEnd();

///LEAF01///
    glBegin(GL_POLYGON);
    if (winter==true)
    {
        glColor3ub(204, 204, 0 );
    }
    else if (summer==true)
    {
        glColor3ub(0, 255, 0 );
    }
    else if (rainy==true)
    {
        glColor3ub(0, 153, 0 );
    }
    else
    {

    }
    glVertex2f(0.80f, -0.1f);//height
    glVertex2f(1.05f, -0.1f);
    glVertex2f(0.925f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.85f, 0.1f);//height
    glVertex2f(1.00f, 0.1f);
    glVertex2f(0.925f, 0.4f);
    glEnd();
///LEAF02///
    glBegin(GL_POLYGON);
    glVertex2f(1.03f, -0.0f);//height
    glVertex2f(1.28f, -0.0f);
    glVertex2f(1.155f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.06f, 0.1f);//height
    glVertex2f(1.25f, 0.1f);
    glVertex2f(1.155f, 0.4f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.08f, 0.2f);
    glVertex2f(1.23f, 0.2f);
    glVertex2f(1.155f, 0.5f);
    glEnd();
///LEAF03///
    glBegin(GL_POLYGON);
    glVertex2f(1.70f, -0.0f);//height
    glVertex2f(1.95f, -0.0f);
    glVertex2f(1.825f, 0.2f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.74f, 0.1f);//height
    glVertex2f(1.91f, 0.1f);
    glVertex2f(1.825f, 0.4f);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(1.76f, 0.2f);
    glVertex2f(1.89f, 0.2f);
    glVertex2f(1.825f, 0.5f);
    glEnd();
}

void house()
{
    ///FENCE01///
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(1.7f, -0.6f);//width
    glVertex2f(2.0f, -0.60f);
    glVertex2f(2.0f, -0.60f);
    glVertex2f(1.7f, -0.6f);
    glVertex2f(1.7f, -0.5f);//width
    glVertex2f(2.0f, -0.50f);
    glVertex2f(2.0f, -0.50f);
    glVertex2f(1.7f, -0.5f);
    glVertex2f(1.7f, -0.7f);//width
    glVertex2f(2.0f, -0.70f);
    glVertex2f(2.0f, -0.70f);
    glVertex2f(1.7f, -0.7f);

    glVertex2f(1.76f, -0.5f);//height
    glVertex2f(1.76f, -0.7f);
    glVertex2f(1.78f, -0.7f);
    glVertex2f(1.78f, -0.5f);
    glVertex2f(1.86f, -0.5f);//height
    glVertex2f(1.86f, -0.7f);
    glVertex2f(1.88f, -0.7f);
    glVertex2f(1.88f, -0.5f);
    glVertex2f(1.96f, -0.5f);//height
    glVertex2f(1.96f, -0.7f);
    glVertex2f(1.98f, -0.7f);
    glVertex2f(1.98f, -0.5f);
    glEnd();
///FENCE02///
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(0.9f, -0.6f);//width
    glVertex2f(1.2f, -0.60f);
    glVertex2f(1.2f, -0.60f);
    glVertex2f(0.9f, -0.6f);
    glVertex2f(0.9f, -0.5f);//width
    glVertex2f(1.2f, -0.50f);
    glVertex2f(1.2f, -0.50f);
    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.7f);//width
    glVertex2f(1.2f, -0.70f);
    glVertex2f(1.2f, -0.70f);
    glVertex2f(0.9f, -0.7f);

    glVertex2f(0.96f, -0.5f);//height
    glVertex2f(0.96f, -0.7f);
    glVertex2f(0.98f, -0.7f);
    glVertex2f(0.98f, -0.5f);
    glVertex2f(1.06f, -0.5f);//height
    glVertex2f(1.06f, -0.7f);
    glVertex2f(1.08f, -0.7f);
    glVertex2f(1.08f, -0.5f);
    glVertex2f(1.16f, -0.5f);//height
    glVertex2f(1.16f, -0.7f);
    glVertex2f(1.18f, -0.7f);
    glVertex2f(1.18f, -0.5f);
    glEnd();

///HOUSE///
    glBegin(GL_QUADS);
    glColor3ub(255, 204, 255);///house body01
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glEnd();
    ///house upper part01
    glBegin(GL_QUADS);
    if (winter==true)
    {
        glColor3ub(255, 255, 255);
    }
    else
        glColor3ub(204, 0, 0);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house door01
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0); ///house window01
    glVertex2f(-1.15f, -0.1f);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-1.3f, -0.3f);
    glVertex2f(-1.3f, 0.1f);
    glVertex2f(-0.9f, 0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-1.5f, 0.1f);
    glVertex2f(-1.3f, 0.4f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glVertex2f(-1.05f, -0.0f);
    glVertex2f(-1.05f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.1f, -0.3f);
    glVertex2f(-1.1f, -0.0f);
    glVertex2f(-1.0f, -0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.15f, -0.1f);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glVertex2f(-1.20f, -0.1f);
    glVertex2f(-1.20f, -0.20f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.15f, -0.20f);
    glVertex2f(-1.25f, -0.20f);
    glVertex2f(-1.25f, -0.1f);
    glVertex2f(-1.15f, -0.1f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0); ///house body02
    glVertex2f(-1.3f, -0.0f);
    glVertex2f(-1.8f, -0.0f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.3f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 68, 0); ///house door02
    glVertex2f(-1.6f, -0.1f);
    glVertex2f(-1.7f, -0.1f);
    glVertex2f(-1.7f, -0.5f);
    glVertex2f(-1.6f, -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 68, 0); ///house window02
    glVertex2f(-1.4f, -0.2f);
    glVertex2f(-1.5f, -0.2f);
    glVertex2f(-1.5f, -0.3f);
    glVertex2f(-1.4f, -0.3f);
    glEnd();
    ///house upper part02
    glBegin(GL_POLYGON);
    if (winter==true)
    {
        glColor3ub(255, 255, 255);
    }
    else
        glColor3ub(0, 255, 204);
    glVertex2f(-1.2f, 0.0f);
    glVertex2f(-1.9f, 0.0f);
    glVertex2f(-1.7f, 0.3f);
    glVertex2f(-1.4f, 0.3f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.3f,-0.0f);
    glVertex2f(-1.8f,-0.0f);
    glVertex2f(-1.8f, -0.5f);
    glVertex2f(-1.3f, -0.5f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.8f,-0.0f);
    glVertex2f(-1.8f,-0.5f);
    glVertex2f(-1.3f,-0.5f);
    glVertex2f(-1.3f,-0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.2f,0.0f);
    glVertex2f(-1.9f,0.0f);
    glVertex2f(-1.7f,0.3f);
    glVertex2f(-1.4f,0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.9f,0.0f);
    glVertex2f(-1.7f,0.3f);
    glVertex2f(-1.4f,0.3f);
    glVertex2f(-1.2f,0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.6f,-0.1f);
    glVertex2f(-1.70f,-0.1f);
    glVertex2f(-1.70f,-0.5f);
    glVertex2f(-1.6f,-0.5f);
    glVertex2f(-1.65f,-0.1f);
    glVertex2f(-1.65f,-0.5f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.70f,-0.1f);
    glVertex2f(-1.70f,-0.5f);
    glVertex2f(-1.6f,-0.5f);
    glVertex2f(-1.6f,-0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.4f,-0.2f);
    glVertex2f(-1.5f,-0.2f);
    glVertex2f(-1.5f,-0.3f);
    glVertex2f(-1.4f,-0.3f);
    glVertex2f(-1.45f,-0.2f);
    glVertex2f(-1.45f,-0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(-1.5f,-0.2f);
    glVertex2f(-1.5f,-0.3f);
    glVertex2f(-1.4f,-0.3f);
    glVertex2f(-1.4f,-0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214, 214, 194);///house body03
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(1.2f, -0.8f);
    glVertex2f(1.7f, -0.8f);
    glVertex2f(1.7f, -0.3f);
    glVertex2f(1.2f, -0.3f);
    glEnd();
    ///house upper part03
    glBegin(GL_POLYGON);
    if (winter==true)
    {
        glColor3ub(255, 255, 255);
    }
    else
        glColor3ub(102, 0, 102);
    glVertex2f(1.3f, -0.1f);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house window03
    glVertex2f(1.3f, -0.6f);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 0, 0);///house door03
    glVertex2f(1.5f, -0.5f);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.1f);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.1f, -0.4f);
    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.6f, -0.1f);
    glVertex2f(1.3f, -0.1f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.6f);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glVertex2f(1.35f, -0.6f);
    glVertex2f(1.35f, -0.7f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.3f, -0.7f);
    glVertex2f(1.4f, -0.7f);
    glVertex2f(1.4f, -0.6f);
    glVertex2f(1.3f, -0.6f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.5f, -0.5f);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glVertex2f(1.55f, -0.5f);
    glVertex2f(1.55f, -0.8f);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(144,238,144);
    glVertex2f(1.5f, -0.8f);
    glVertex2f(1.6f, -0.8f);
    glVertex2f(1.6f, -0.5f);
    glVertex2f(1.5f, -0.5f);
    glEnd();
}

void Sky_Star(void)
{
///SKY////
    glBegin(GL_POLYGON);
    if (winter==true)
    {
        glColor3ub(26, 26, 26);
    }
    else if (summer==true)
    {
        glColor3ub(155, 215, 232);
    }
    else if (rainy==true)
    {
        glColor3ub(25, 102, 102);
    }
    else
    {

    }

    glVertex2f(0.0f, 0.8f);
    glVertex2f(2.0f,  0.8f);
    glVertex2f(2.0f,  2.0f);
    glVertex2f(0.0f, 2.0f);
    glVertex2f(-0.0f, 0.8f);
    glVertex2f(-2.0f,  0.8f);
    glVertex2f(-2.0f,  2.0f);
    glVertex2f(-0.0f, 2.0f);
    glEnd();

///STARS///
    if (winter==true)
    {
        glPointSize(3);
        glBegin(GL_POINTS);
        glColor3ub(255,255,255);
        glVertex2f(-1.7f, 1.8f);
        glVertex2f(-1.8f, 1.7f);
        glVertex2f(-1.9f, 1.9f);
        glVertex2f(-1.6f, 1.8f);
        glVertex2f(-1.5f, 1.9f);
        glVertex2f(-1.2f, 1.8f);
        glVertex2f(-1.3f, 1.6f);
        glVertex2f(-1.1f, 1.9f);
        glVertex2f(-1.0f, 1.8f);
        glVertex2f(1.1f,  1.8f);
        glVertex2f(1.2,   1.8f);
        glVertex2f(1.3f, 1.5f);
        glVertex2f(1.4f, 1.9f);
        glVertex2f(1.5f, 1.0f);
        glVertex2f(1.6f, 1.9f);
        glVertex2f(1.7f, 1.9f);
        glVertex2f(1.8f, 1.8f);
        glVertex2f(-0.7f, 1.8f);
        glVertex2f(-0.8f, 1.7f);
        glVertex2f(-0.9f, 1.9f);
        glVertex2f(-0.6f, 1.8f);
        glVertex2f(-0.5f, 1.9f);
        glVertex2f(-0.2f, 1.8f);
        glVertex2f(-0.3f, 1.6f);
        glVertex2f(-0.1f, 1.9f);
        glVertex2f(-0.0f, 1.8f);
        glVertex2f(0.1f,  1.8f);
        glVertex2f(0.2,   1.8f);
        glVertex2f(0.3f, 1.5f);
        glVertex2f(0.4f, 1.9f);
        glVertex2f(0.5f, 1.0f);
        glVertex2f(0.6f, 1.9f);
        glVertex2f(0.7f, 1.9f);
        glVertex2f(0.8f, 1.8f);
        glEnd();
    }

    if (winter==true)
    {
        glColor3ub(255, 255, 255);
        circle(1.66,1.8,0.12);
    }
    else if (summer==true)
    {
        glColor3ub(255, 255, 0);
        circle(-1.66,1.8,0.12);
    }
    else if (rainy==true)
    {
        glColor3ub(230, 230, 0);
        circle(-1.66,1.8,0.12);
    }
    else
    {

    }

    glFlush();
}

void cloud ()
{
    ///CLOUD01///
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(-0.45f, 1.65f);
    glVertex2f(-0.45f, 1.80f);
    glVertex2f(-1.0f, 1.80f);
    glVertex2f(-1.0f, 1.65f);
    glEnd();

    circle(-0.45,1.73,0.09);
    circle(-1.0,1.73,0.15);
    circle(-0.55,1.79,0.07);
    circle(-0.7,1.80,0.12);
    circle(-0.85,1.73,0.10);
    circle(-0.69,1.69,0.14);
    circle(-0.53,1.69,0.12);

///CLOUD02///
    glPushMatrix();
    glTranslatef(cloudPosition,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(0.45f, 1.65f);
    glVertex2f(0.45f, 1.80f);
    glVertex2f(1.0f, 1.80f);
    glVertex2f(1.0f, 1.65f);
    glEnd();

    circle(0.45,1.73,0.09);
    circle(1.0,1.73,0.15);
    circle(0.55,1.79,0.07);
    circle(0.7,1.80,0.12);
    circle(0.85,1.73,0.10);
    circle(0.69,1.69,0.14);
    circle(0.53,1.69,0.12);

    glPopMatrix();

///CLOUD03///
    circle(-0.1,1.33,0.09);
    circle(-0.2,1.27,0.12);
    circle(-0.33,1.29,0.09);

///CLOUD04///
    glPushMatrix();
    glTranslatef(cloudPosition1,0.0f, 0.0f);
    circle(1.8,1.33,0.09);
    circle(1.7,1.34,0.12);
    circle(1.6,1.33,0.09);
    glPopMatrix();

    cloudPosition+=0.05;
    cloudPosition1-=0.06;
}

void snow()
{
    if (winter==true)
    {
        glPushMatrix();
        glTranslatef(0.0,snowPosition,0.0);
        glPointSize(3);
        glBegin(GL_POINTS);
        glColor3ub(255,255,255);
        glVertex2f(-.0,1.9);
        glVertex2f(-.0,1.85);
        //glVertex2f(-.0,1.65);
        glVertex2f(-.0,1.60);
        glVertex2f(-.0,1.35);
        //glVertex2f(-.0,1.30);
        glVertex2f(-.0, 10);
        glVertex2f(-.0,.95);
        //glVertex2f(-.0,.70);
        glVertex2f(-.0,.65);
        glVertex2f(-.0,.45);
        //glVertex2f(-.0,.40);
        glVertex2f(-.0,.10);
        glVertex2f(-.0,.05);
        //glVertex2f(-.1,2.0);
        glVertex2f(-.1,1.95);
        glVertex2f(-.1,1.70);
        //glVertex2f(-.1,1.65);
        glVertex2f(-.1,1.40);
        glVertex2f(-.1,1.35);
        //glVertex2f(-.1,1.15);
        glVertex2f(-.1, 10);
        glVertex2f(-.1,.80);
        //glVertex2f(-.1,.75);
        glVertex2f(-.1,.50);
        glVertex2f(-.1,.45);
        //glVertex2f(-.1,.20);
        glVertex2f(-.1,.15);
        glVertex2f(-.2,1.90);
        //glVertex2f(-.2,1.85);
        glVertex2f(-.2,1.60);
        glVertex2f(-.2,1.55);
        //glVertex2f(-.2,1.35);
        glVertex2f(-.2,1.30);
        glVertex2f(-.2, 1.0);
        //glVertex2f(-.2,.95);
        glVertex2f(-.2,.70);
        glVertex2f(-.2,.65);
        //glVertex2f(-.2,.40);
        glVertex2f(-.2,.35);
        glVertex2f(-.2,.10);
        //glVertex2f(-.2,.05);
        glVertex2f(-.3,2.0);
        glVertex2f(-.3,1.95);
        //glVertex2f(-.3,1.70);
        glVertex2f(-.3,1.65);
        glVertex2f(-.3,1.40);
        //glVertex2f(-.3,1.35);
        glVertex2f(-.3,1.05);
        glVertex2f(-.3, 1.0);
        //glVertex2f(-.3,.80);
        glVertex2f(-.3,.75);
        glVertex2f(-.3,.50);
        //glVertex2f(-.3,.45);
        glVertex2f(-.3,.20);
        glVertex2f(-.3,.15);
        //glVertex2f(-.4,1.95);
        glVertex2f(-.4,1.90);
        glVertex2f(-.4,1.60);
        //glVertex2f(-.4,1.55);
        glVertex2f(-.4,1.30);
        glVertex2f(-.4,1.25);
        //glVertex2f(-.4, 1.0);
        glVertex2f(-.4,.95);
        glVertex2f(-.4,.70);
        //glVertex2f(-.4,.65);
        glVertex2f(-.4,.40);
        glVertex2f(-.4,.35);
        //glVertex2f(-.4,.10);
        glVertex2f(-.4,.05);
        glVertex2f(-.5,2);
        //glVertex2f(-.5,1.95);
        glVertex2f(-.5,1.90);
        glVertex2f(-.5,1.60);
        //glVertex2f(-.5,1.55);
        glVertex2f(-.5,1.30);
        glVertex2f(-.5,1.25);
        //glVertex2f(-.5, 1.0);
        glVertex2f(-.5,.95);
        glVertex2f(-.5,.70);
        //glVertex2f(-.5,.65);
        glVertex2f(-.5,.40);
        glVertex2f(-.5,.35);
        //glVertex2f(-.5,.10);
        glVertex2f(-.5,.05);
        glVertex2f(-.6,2);
        //glVertex2f(-.6,1.95);
        glVertex2f(-.6,1.90);
        glVertex2f(-.6,1.60);
        //glVertex2f(-.6,1.55);
        glVertex2f(-.6,1.30);
        glVertex2f(-.6,1.25);
        //glVertex2f(-.6, 1.0);
        glVertex2f(-.6,.95);
        glVertex2f(-.6,.70);
        //glVertex2f(-.6,.65);
        glVertex2f(-.6,.40);
        glVertex2f(-.6,.35);
        //glVertex2f(-.6,.10);
        glVertex2f(-.6,.05);
        glVertex2f(-.7,2);
        //glVertex2f(-.7,1.95);
        glVertex2f(-.7,1.90);
        glVertex2f(-.7,1.60);
        //glVertex2f(-.7,1.55);
        glVertex2f(-.7,1.30);
        glVertex2f(-.7,1.25);
        //glVertex2f(-.7, 1.0);
        glVertex2f(-.7,.95);
        glVertex2f(-.7,.70);
        //glVertex2f(-.7,.65);
        glVertex2f(-.7,.40);
        glVertex2f(-.7,.35);
        //glVertex2f(-.7,.10);
        glVertex2f(-.7,.05);
        glVertex2f(-.8,2);
        //glVertex2f(-.8,1.95);
        glVertex2f(-.8,1.90);
        glVertex2f(-.8,1.60);
        //glVertex2f(-.8,1.55);
        glVertex2f(-.8,1.30);
        glVertex2f(-.8,1.25);
        //glVertex2f(-.8, 1.0);
        glVertex2f(-.8,.95);
        glVertex2f(-.8,.70);
        //glVertex2f(-.8,.65);
        glVertex2f(-.8,.40);
        glVertex2f(-.8,.35);
        //glVertex2f(-.8,.10);
        glVertex2f(-.8,.05);
        glVertex2f(-.5,2);
        //glVertex2f(-.9,1.95);
        glVertex2f(-.9,1.90);
        glVertex2f(-.9,1.60);
        //glVertex2f(-.9,1.55);
        glVertex2f(-.9,1.30);
        glVertex2f(-.9,1.25);
        //glVertex2f(-.9, 1.0);
        glVertex2f(-.9,.95);
        glVertex2f(-.9,.70);
        glVertex2f(-.9,.65);
        //glVertex2f(-.9,.40);
        glVertex2f(-.9,.35);
        glVertex2f(-.9,.10);
        //glVertex2f(-.9,.05);
        glVertex2f(-1,2);
        glVertex2f(-1,1.95);
        //glVertex2f(-1,1.90);
        glVertex2f(-1,1.60);
        glVertex2f(-1,1.55);
        //glVertex2f(-1,1.30);
        glVertex2f(-1,1.25);
        glVertex2f(-1, 1.0);
        //glVertex2f(-1,.95);
        glVertex2f(-1,.70);
        glVertex2f(-1,.65);
        //glVertex2f(-1,.40);
        glVertex2f(-1,.35);
        glVertex2f(-1,.10);
        //glVertex2f(-1,.05);
        glVertex2f(-.5,2);
        glVertex2f(-1.1,1.95);
        //glVertex2f(-1.1,1.90);
        glVertex2f(-1.1,1.60);
        glVertex2f(-1.1,1.55);
        //glVertex2f(-1.1,1.30);
        glVertex2f(-1.1,1.25);
        glVertex2f(-1.1, 1.0);
        //glVertex2f(-1.1,.95);
        glVertex2f(-1.1,.70);
        glVertex2f(-1.1,.65);
        //glVertex2f(-1.1,.40);
        glVertex2f(-1.1,.35);
        glVertex2f(-1.1,.10);
        //glVertex2f(-1.1,.05);
        glVertex2f(-1.2,2);
        glVertex2f(-1.2,1.95);
        //glVertex2f(-1.2,1.90);
        glVertex2f(-1.2,1.60);
        glVertex2f(-1.2,1.55);
        //glVertex2f(-1.2,1.30);
        glVertex2f(-1.2,1.25);
        glVertex2f(-1.2, 1.0);
        //glVertex2f(-1.2,.95);
        glVertex2f(-1.2,.70);
        glVertex2f(-1.2,.65);
        //glVertex2f(-1.2,.40);
        glVertex2f(-1.2,.35);
        glVertex2f(-1.2,.10);
        //glVertex2f(-1.2,.05);
        glVertex2f(-1.3,2);
        glVertex2f(-1.3,1.95);
        //glVertex2f(-1.3,1.90);
        glVertex2f(-1.3,1.60);
        glVertex2f(-1.3,1.55);
        //glVertex2f(-1.3,1.30);
        glVertex2f(-1.3,1.25);
        glVertex2f(-1.3, 1.0);
        //glVertex2f(-1.3,.95);
        glVertex2f(-1.3,.70);
        glVertex2f(-1.3,.65);
        //glVertex2f(-1.3,.40);
        glVertex2f(-1.3,.35);
        glVertex2f(-1.3,.10);
        //glVertex2f(-1.3,.05);
        glVertex2f(-1.4,2);
        glVertex2f(-1.4,1.95);
        //glVertex2f(-1.4,1.90);
        glVertex2f(-1.4,1.60);
        glVertex2f(-1.4,1.55);
        //glVertex2f(-1.4,1.30);
        glVertex2f(-1.4,1.25);
        glVertex2f(-1.4, 1.0);
        //glVertex2f(-1.4,.95);
        glVertex2f(-1.4,.70);
        glVertex2f(-1.4,.65);
        //glVertex2f(-1.4,.40);
        glVertex2f(-1.4,.35);
        glVertex2f(-1.4,.10);
        //glVertex2f(-1.4,.05);
        glVertex2f(-1.5,2);
        glVertex2f(-1.5,1.95);
        //glVertex2f(-1.5,1.90);
        glVertex2f(-1.5,1.60);
        glVertex2f(-1.5,1.55);
        //glVertex2f(-1.5,1.30);
        glVertex2f(-1.5,1.25);
        glVertex2f(-1.5, 1.0);
        //glVertex2f(-1.5,.95);
        glVertex2f(-1.5,.70);
        glVertex2f(-1.5,.65);
        //glVertex2f(-1.5,.40);
        glVertex2f(-1.5,.35);
        glVertex2f(-1.5,.10);
        //glVertex2f(-1.5,.05);
        glVertex2f(-1.6,2);
        glVertex2f(-1.6,1.95);
        //glVertex2f(-1.6,1.90);
        glVertex2f(-1.6,1.60);
        glVertex2f(-1.6,1.55);
        //glVertex2f(-1.6,1.30);
        glVertex2f(-1.6,1.25);
        glVertex2f(-1.6, 1.0);
        //glVertex2f(-1.6,.95);
        glVertex2f(-1.6,.70);
        glVertex2f(-1.6,.65);
        //glVertex2f(-1.6,.40);
        glVertex2f(-1.6,.35);
        glVertex2f(-1.6,.10);
        //glVertex2f(-1.6,.05);
        glVertex2f(-1.7,2);
        glVertex2f(-1.7,1.95);
        //glVertex2f(-1.7,1.90);
        glVertex2f(-1.7,1.60);
        glVertex2f(-1.7,1.55);
        //glVertex2f(-1.7,1.30);
        glVertex2f(-1.7,1.25);
        glVertex2f(-1.7, 1.0);
        //glVertex2f(-1.7,.95);
        glVertex2f(-1.7,.70);
        glVertex2f(-1.7,.65);
        //glVertex2f(-1.7,.40);
        glVertex2f(-1.7,.35);
        glVertex2f(-1.7,.10);
        //glVertex2f(-1.7,.05);
        glVertex2f(-1.8,2);
        glVertex2f(-1.8,1.95);
        //glVertex2f(-1.8,1.90);
        glVertex2f(-1.8,1.60);
        glVertex2f(-1.8,1.55);
        //glVertex2f(-1.8,1.30);
        glVertex2f(-1.8,1.25);
        glVertex2f(-1.8, 1.0);
        //glVertex2f(-1.8,.95);
        glVertex2f(-1.8,.70);
        glVertex2f(-1.8,.65);
        //glVertex2f(-1.8,.40);
        glVertex2f(-1.8,.35);
        glVertex2f(-1.8,.10);
        //glVertex2f(-1.8,.05);
        glVertex2f(-1.9,2);
        glVertex2f(-1.9,1.95);
        //glVertex2f(-1.9,1.90);
        glVertex2f(-1.9,1.60);
        glVertex2f(-1.9,1.55);
        //glVertex2f(-1.9,1.30);
        glVertex2f(-1.9,1.25);
        glVertex2f(-1.9, 1.0);
        //glVertex2f(-1.9,.95);
        glVertex2f(-1.9,.70);
        glVertex2f(-1.9,.65);
        //glVertex2f(-1.9,.40);
        glVertex2f(-1.9,.35);
        glVertex2f(-1.9,.10);
        //glVertex2f(-1.9,.05);
        glVertex2f(.1,2);
        glVertex2f(.1,1.95);
        //glVertex2f(.1,1.90);
        glVertex2f(.1,1.60);
        glVertex2f(.1,1.55);
        //glVertex2f(.1,1.30);
        glVertex2f(.1,1.25);
        glVertex2f(.1, 1.0);
        //glVertex2f(.1,.95);
        glVertex2f(.1,.70);
        glVertex2f(.1,.65);
        //glVertex2f(.1,.40);
        glVertex2f(.1,.35);
        glVertex2f(.1,.10);
        //glVertex2f(.1,.05);
        glVertex2f(.2,2);
        glVertex2f(.2,1.95);
        //glVertex2f(.2,1.90);
        glVertex2f(.2,1.60);
        glVertex2f(.2,1.55);
        //glVertex2f(.2,1.30);
        glVertex2f(.2,1.25);
        glVertex2f(.2, 1.0);
        //glVertex2f(.2,.95);
        glVertex2f(.2,.70);
        glVertex2f(.2,.65);
        //glVertex2f(.2,.40);
        glVertex2f(.2,.35);
        glVertex2f(.2,.10);
        //glVertex2f(.2,.05);
        glVertex2f(.3,2);
        glVertex2f(.3,1.95);
        //glVertex2f(.3,1.90);
        glVertex2f(.3,1.60);
        glVertex2f(.3,1.55);
        //glVertex2f(.3,1.30);
        glVertex2f(.3,1.25);
        glVertex2f(.3, 1.0);
        //glVertex2f(.3,.95);
        glVertex2f(.3,.70);
        glVertex2f(.3,.65);
        //glVertex2f(.3,.40);
        glVertex2f(.3,.35);
        glVertex2f(.3,.10);
        //glVertex2f(.3,.05);
        glVertex2f(.4,2);
        glVertex2f(.4,1.95);
        //glVertex2f(.4,1.90);
        glVertex2f(.4,1.60);
        glVertex2f(.4,1.55);
        //glVertex2f(.4,1.30);
        glVertex2f(.4,1.25);
        glVertex2f(.4, 1.0);
        //glVertex2f(.4,.95);
        glVertex2f(.4,.70);
        glVertex2f(.4,.65);
        //glVertex2f(.4,.40);
        glVertex2f(.4,.35);
        glVertex2f(.4,.10);
        //glVertex2f(.4,.05);
        glVertex2f(.5,2);
        glVertex2f(.5,1.95);
        //glVertex2f(.5,1.90);
        glVertex2f(.5,1.60);
        glVertex2f(.5,1.55);
        //glVertex2f(.5,1.30);
        glVertex2f(.5,1.25);
        glVertex2f(.5, 1.0);
        //glVertex2f(.5,.95);
        glVertex2f(.5,.70);
        glVertex2f(.5,.65);
        //glVertex2f(.5,.40);
        glVertex2f(.5,.35);
        glVertex2f(.5,.10);
        //glVertex2f(.5,.05);
        glVertex2f(.6,2);
        glVertex2f(.6,1.95);
        //glVertex2f(.6,1.90);
        glVertex2f(.6,1.60);
        glVertex2f(.6,1.55);
        //glVertex2f(.6,1.30);
        glVertex2f(.6,1.25);
        glVertex2f(.6, 1.0);
        //glVertex2f(.6,.95);
        glVertex2f(.6,.70);
        glVertex2f(.6,.65);
        //glVertex2f(.6,.40);
        glVertex2f(.6,.35);
        glVertex2f(.6,.10);
        //glVertex2f(.6,.05);
        glVertex2f(.7,2);
        glVertex2f(.7,1.95);
        //glVertex2f(.7,1.90);
        glVertex2f(.7,1.60);
        glVertex2f(.7,1.55);
        //glVertex2f(.7,1.30);
        glVertex2f(.7,1.25);
        glVertex2f(.7, 1.0);
        //glVertex2f(.7,.95);
        glVertex2f(.7,.70);
        glVertex2f(.7,.65);
        //glVertex2f(.7,.40);
        glVertex2f(.7,.35);
        glVertex2f(.7,.10);
        //glVertex2f(.7,.05);
        glVertex2f(.8,2);
        glVertex2f(.8,1.95);
        //glVertex2f(.8,1.90);
        glVertex2f(.8,1.60);
        glVertex2f(.8,1.55);

        glVertex2f(.8,1.25);
        glVertex2f(.8, 1.0);

        glVertex2f(.8,.70);
        glVertex2f(.8,.65);

        glVertex2f(.8,.35);
        glVertex2f(.8,.10);

        glVertex2f(.9,2);
        glVertex2f(.9,1.95);

        glVertex2f(.9,1.60);
        glVertex2f(.9,1.55);

        glVertex2f(.9,1.25);
        glVertex2f(.9, 1.0);

        glVertex2f(.9,.70);
        glVertex2f(.9,.65);

        glVertex2f(.9,.35);
        glVertex2f(.9,.10);

        glVertex2f(1.0,2);
        glVertex2f(1.0,1.95);

        glVertex2f(1.0,1.60);
        glVertex2f(1.0,1.55);
        //glVertex2f(1.0,1.30);
        glVertex2f(1.0,1.25);
        glVertex2f(1.0, 1.0);
        //glVertex2f(1.0,.95);
        glVertex2f(1.0,.70);
        glVertex2f(1.0,.65);
        //glVertex2f(1.0,.40);
        glVertex2f(1.0,.35);
        glVertex2f(1.0,.10);
        //glVertex2f(1.0,.05);
        glVertex2f(1.1,2);
        glVertex2f(1.1,1.95);
        //glVertex2f(1.1,1.90);
        glVertex2f(1.1,1.60);
        glVertex2f(1.1,1.55);
        //glVertex2f(1.1,1.30);
        glVertex2f(1.1,1.25);
        glVertex2f(1.1, 1.0);
        //glVertex2f(1.1,.95);
        glVertex2f(1.1,.70);
        glVertex2f(1.1,.65);
        //glVertex2f(1.1,.40);
        glVertex2f(1.1,.35);
        glVertex2f(1.1,.10);
        //glVertex2f(1.1,.05);
        glVertex2f(1.2,2);
        glVertex2f(1.2,1.95);
        //glVertex2f(1.2,1.90);
        glVertex2f(1.2,1.60);
        glVertex2f(1.2,1.55);
        //glVertex2f(1.2,1.30);
        glVertex2f(1.2,1.25);
        glVertex2f(1.2, 1.0);
        //glVertex2f(1.2,.95);
        glVertex2f(1.2,.70);
        glVertex2f(1.2,.65);
        //glVertex2f(1.2,.40);
        glVertex2f(1.2,.35);
        glVertex2f(1.2,.10);
        //glVertex2f(1.2,.05);
        glVertex2f(1.3,2);
        glVertex2f(1.3,1.95);
        //glVertex2f(1.3,1.90);
        glVertex2f(1.3,1.60);
        glVertex2f(1.3,1.55);
        //glVertex2f(1.3,1.30);
        glVertex2f(1.3,1.25);
        glVertex2f(1.3, 1.0);
        //glVertex2f(1.3,.95);
        glVertex2f(1.3,.70);
        glVertex2f(1.3,.65);
        //glVertex2f(1.3,.40);
        glVertex2f(1.3,.35);
        glVertex2f(1.3,.10);
        //glVertex2f(1.3,.05);
        glVertex2f(1.4,2);
        glVertex2f(1.4,1.95);
        //glVertex2f(1.4,1.90);
        glVertex2f(1.4,1.60);
        glVertex2f(1.4,1.55);
        //glVertex2f(1.4,1.30);
        glVertex2f(1.4,1.25);
        glVertex2f(1.4, 1.0);
        //glVertex2f(1.4,.95);
        glVertex2f(1.4,.70);
        glVertex2f(1.4,.65);
        //glVertex2f(1.4,.40);
        glVertex2f(1.4,.35);
        glVertex2f(1.4,.10);
        //glVertex2f(1.4,.05);
        glVertex2f(1.5,2);
        glVertex2f(1.5,1.95);
        //glVertex2f(1.5,1.90);
        glVertex2f(1.5,1.60);
        glVertex2f(1.5,1.55);
        //glVertex2f(1.5,1.30);
        glVertex2f(1.5,1.25);
        glVertex2f(1.5, 1.0);
        //glVertex2f(1.5,.95);
        glVertex2f(1.5,.70);
        glVertex2f(1.5,.65);
        //glVertex2f(1.5,.40);
        glVertex2f(1.5,.35);
        glVertex2f(1.5,.10);
        //glVertex2f(1.5,.05);
        glVertex2f(1.6,2);
        glVertex2f(1.6,1.95);
        //glVertex2f(1.6,1.90);
        glVertex2f(1.6,1.60);
        glVertex2f(1.6,1.55);
        //glVertex2f(1.6,1.30);
        glVertex2f(1.6,1.25);
        glVertex2f(1.6, 1.0);
        //glVertex2f(1.6,.95);
        glVertex2f(1.6,.70);
        glVertex2f(1.6,.65);
        //glVertex2f(1.6,.40);
        glVertex2f(1.6,.35);
        glVertex2f(1.6,.10);
        //glVertex2f(1.6,.05);
        glVertex2f(1.7,2);
        glVertex2f(1.7,1.95);
        //glVertex2f(1.7,1.90);
        glVertex2f(1.7,1.60);
        //glVertex2f(1.7,1.55);
        glVertex2f(1.7,1.30);
        //glVertex2f(1.7,1.25);
        glVertex2f(1.7, 1.0);
        glVertex2f(1.7,.95);
        //glVertex2f(1.7,.70);
        glVertex2f(1.7,.65);
        //glVertex2f(1.7,.40);
        glVertex2f(1.7,.35);
        //glVertex2f(1.7,.10);
        glVertex2f(1.7,.05);
        glVertex2f(1.8,2);
        //glVertex2f(1.8,1.95);
        glVertex2f(1.8,1.90);
        glVertex2f(1.8,1.60);
        //glVertex2f(1.8,1.55);
        glVertex2f(1.8,1.30);
        glVertex2f(1.8,1.25);
        //glVertex2f(1.8, 1.0);
        glVertex2f(1.8,.95);
        //glVertex2f(1.8,.70);
        glVertex2f(1.8,.65);
        //glVertex2f(1.8,.40);
        glVertex2f(1.8,.35);
        //glVertex2f(1.8,.10);
        glVertex2f(1.8,.05);
        glVertex2f(1.9,2);
        //glVertex2f(1.9,1.95);
        glVertex2f(1.9,1.90);
        glVertex2f(1.9,1.60);
        //glVertex2f(1.9,1.55);
        glVertex2f(1.9,1.30);
        glVertex2f(1.9,1.25);
        //glVertex2f(1.9, 1.0);
        glVertex2f(1.9,.95);
        //glVertex2f(1.9,.70);
        glVertex2f(1.9,.65);
        //glVertex2f(1.9,.40);
        glVertex2f(1.9,.35);
        glVertex2f(1.9,.10);
        //glVertex2f(1.9,.05);
        glVertex2f(-.0,-2);
        //glVertex2f(-.0,-1.9);
        glVertex2f(-.0,-1.8);
        //glVertex2f(-.0,-1.6);
        glVertex2f(-.0,-1.5);
        glVertex2f(-.0,-1.3);
        //glVertex2f(-.0,-1.2);
        glVertex2f(-.0, -1);
        //glVertex2f(-.0,-.9);
        glVertex2f(-.0,-.7);
        //glVertex2f(-.0,-.6);
        glVertex2f(-.0,-.4);
        //glVertex2f(-.0,-.3);
        glVertex2f(-.0,-.1);
        //glVertex2f(-.1,-1.9);
        glVertex2f(-.1,-1.7);
        //glVertex2f(-.1,-1.6);
        glVertex2f(-.1,-1.4);
        //glVertex2f(-.1,-1.3);
        glVertex2f(-.1,-1.1);
        //glVertex2f(-.1, -1);
        //glVertex2f(-.1,-.8);
        glVertex2f(-.1,-.7);
        //glVertex2f(-.1,-.5);
        glVertex2f(-.1,-.4);
        //glVertex2f(-.1,-.2);
        glVertex2f(-.1,-.1);
        //glVertex2f(-.1,-.0);
        glVertex2f(-.2,-2);
        glVertex2f(-.2,-1.9);
        //glVertex2f(-.2,-1.8);
        glVertex2f(-.2,-1.6);
        //glVertex2f(-.2,-1.5);
        glVertex2f(-.2,-1.3);
        //glVertex2f(-.2,-1.2);
        glVertex2f(-.2, -1);
        //glVertex2f(-.2,-.9);
        glVertex2f(-.2,-.7);
        //glVertex2f(-.2,-.6);
        glVertex2f(-.2,-.4);
        glVertex2f(-.2,-.3);
        //glVertex2f(-.2,-.1);
        glVertex2f(-.3,-1.9);
        glVertex2f(-.3,-1.7);
        //glVertex2f(-.3,-1.6);
        glVertex2f(-.3,-1.4);
        glVertex2f(-.3,-1.3);
        //glVertex2f(-.3,-1.1);
        glVertex2f(-.3, -1);
        glVertex2f(-.3,-.8);
        //glVertex2f(-.3,-.7);
        glVertex2f(-.3,-.5);
        glVertex2f(-.3,-.4);
        //glVertex2f(-.3,-.2);
        glVertex2f(-.3,-.1);
        glVertex2f(-.3,-.0);
        glVertex2f(-.4,-2);
        //glVertex2f(-.4,-1.9);
        glVertex2f(-.4,-1.8);
        glVertex2f(-.4,-1.6);
        //glVertex2f(-.4,-1.5);
        glVertex2f(-.4,-1.3);
        glVertex2f(-.4,-1.2);
        //glVertex2f(-.4, -1);
        glVertex2f(-.4,-.9);
        glVertex2f(-.4,-.7);
        //glVertex2f(-.4,-.6);
        glVertex2f(-.4,-.4);
        glVertex2f(-.4,-.3);
        //glVertex2f(-.4,-.1);
        glVertex2f(-.5,-1.9);
        glVertex2f(-.5,-1.7);
        //glVertex2f(-.5,-1.6);
        glVertex2f(-.5,-1.4);
        //glVertex2f(-.5,-1.3);
        glVertex2f(-.5,-1.1);
        //glVertex2f(-.5, -1);
        glVertex2f(-.5,-.8);
        //glVertex2f(-.5,-.7);
        glVertex2f(-.5,-.5);
        //glVertex2f(-.5,-.4);
        glVertex2f(-.5,-.2);
        //glVertex2f(-.5,-.1);
        glVertex2f(-.5,-.0);
        //glVertex2f(-.6,-2);
        glVertex2f(-.6,-1.9);
        //glVertex2f(-.6,-1.8);
        glVertex2f(-.6,-1.6);
        //glVertex2f(-.6,-1.5);
        glVertex2f(-.6,-1.3);
        //glVertex2f(-.6,-1.2);
        glVertex2f(-.6, -1);
        //glVertex2f(-.6,-.9);
        glVertex2f(-.6,-.7);
        glVertex2f(-.6,-.6);
        //glVertex2f(-.6,-.4);
        glVertex2f(-.6,-.3);
        //glVertex2f(-.6,-.1);
        glVertex2f(-.7,-1.9);
        //glVertex2f(-.7,-1.7);
        glVertex2f(-.7,-1.6);
        //glVertex2f(-.7,-1.4);
        glVertex2f(-.7,-1.3);
        glVertex2f(-.7,-1.1);
        //glVertex2f(-.7, -1);
        glVertex2f(-.7,-.8);
        //glVertex2f(-.7,-.7);
        glVertex2f(-.7,-.5);
        //glVertex2f(-.7,-.4);
        glVertex2f(-.7,-.2);
        //glVertex2f(-.7,-.1);
        glVertex2f(-.7,-.0);
        //glVertex2f(-.8,-2);
        glVertex2f(-.8,-1.9);
        //glVertex2f(-.8,-1.8);
        glVertex2f(-.8,-1.6);
        //glVertex2f(-.8,-1.5);
        glVertex2f(-.8,-1.3);
        glVertex2f(-.8,-1.2);
        //glVertex2f(-.8, -1);
        glVertex2f(-.8,-.9);
        glVertex2f(-.8,-.7);
        //glVertex2f(-.8,-.6);
        glVertex2f(-.8,-.4);
        glVertex2f(-.8,-.3);
        //glVertex2f(-.8,-.1);
        glVertex2f(-.9,-1.9);
        //glVertex2f(-.9,-1.7);
        glVertex2f(-.9,-1.6);
        //glVertex2f(-.9,-1.4);
        glVertex2f(-.9,-1.3);
        glVertex2f(-.9,-1.1);
        //glVertex2f(-.9, -1);
        glVertex2f(-.9,-.8);
        //glVertex2f(-.9,-.7);
        glVertex2f(-.9,-.5);
        //glVertex2f(-.9,-.4);
        glVertex2f(-.9,-.2);
        //glVertex2f(-.9,-.1);
        glVertex2f(-.9,-.0);
        //glVertex2f(-1,-2);
        glVertex2f(-1,-1.9);
        //glVertex2f(-1,-1.7);
        glVertex2f(-1,-1.6);
        //glVertex2f(-1,-1.4);
        glVertex2f(-1,-1.3);
        //glVertex2f(-1,-1.1);
        glVertex2f(-1, -1);
        //glVertex2f(-1,-.8);
        glVertex2f(-1,-.7);
        //glVertex2f(-1,-.5);
        glVertex2f(-1,-.4);
        //glVertex2f(-1,-.2);
        glVertex2f(-1,-.1);
        //glVertex2f(-1.1,-1.9);
        glVertex2f(-1.1,-1.7);
        //glVertex2f(-1.1,-1.6);
        glVertex2f(-1.1,-1.4);
        //glVertex2f(-1.1,-1.3);
        glVertex2f(-1.1,-1.1);
        //glVertex2f(-1.1, -1);
        glVertex2f(-1.1,-.8);
        //glVertex2f(-1.1,-.7);
        glVertex2f(-1.1,-.5);
        glVertex2f(-1.1,-.4);
        //glVertex2f(-1.1,-.2);
        glVertex2f(-1.1,-.1);
        //glVertex2f(-1.1,-.0);
        glVertex2f(-1.2,-2);
        //glVertex2f(-1.2,-1.9);
        glVertex2f(-1.2,-1.8);
        //glVertex2f(-1.2,-1.6);
        glVertex2f(-1.2,-1.5);
        //glVertex2f(-1.2,-1.3);
        glVertex2f(-1.2,-1.2);
        //glVertex2f(-1.2, -1);
        glVertex2f(-1.2,-.9);
        //glVertex2f(-1.2,-.7);
        glVertex2f(-1.2,-.6);
        //glVertex2f(-1.2,-.4);
        glVertex2f(-1.2,-.3);
        //glVertex2f(-1.2,-.1);
        glVertex2f(-1.3,-1.9);
        glVertex2f(-1.3,-1.7);
        //glVertex2f(-1.3,-1.6);
        glVertex2f(-1.3,-1.4);
        //glVertex2f(-1.3,-1.3);
        glVertex2f(-1.3,-1.1);
        //glVertex2f(-1.3, -1);
        glVertex2f(-1.3,-.8);
        //glVertex2f(-1.3,-.7);
        glVertex2f(-1.3,-.5);
        //glVertex2f(-1.3,-.4);
        glVertex2f(-1.3,-.2);
        //glVertex2f(-1.3,-.1);
        glVertex2f(-1.3,-.0);
        //glVertex2f(-1.4,-2);
        glVertex2f(-1.4,-1.9);
        glVertex2f(-1.4,-1.8);
        //glVertex2f(-1.4,-1.6);
        glVertex2f(-1.4,-1.5);
        //glVertex2f(-1.4,-1.3);
        glVertex2f(-1.4,-1.2);
        //glVertex2f(-1.4, -1);
        glVertex2f(-1.4,-.9);
        glVertex2f(-1.4,-.7);
        //glVertex2f(-1.4,-.6);
        glVertex2f(-1.4,-.4);
        glVertex2f(-1.4,-.3);
        //glVertex2f(-1.4,-.1);
        glVertex2f(-1.5,-1.9);
        //glVertex2f(-1.5,-1.7);
        glVertex2f(-1.5,-1.6);
        //glVertex2f(-1.5,-1.4);
        glVertex2f(-1.5,-1.3);
        glVertex2f(-1.5,-1.1);
        //glVertex2f(-1.5, -1);
        glVertex2f(-1.5,-.8);
        //glVertex2f(-1.5,-.7);
        glVertex2f(-1.5,-.5);
        //glVertex2f(-1.5,-.4);
        glVertex2f(-1.5,-.2);
        //glVertex2f(-1.5,-.1);
        glVertex2f(-1.5,-.0);
        //glVertex2f(-1.6,-2);
        glVertex2f(-1.6,-1.9);
        //glVertex2f(-1.6,-1.8);
        glVertex2f(-1.6,-1.6);
        //glVertex2f(-1.6,-1.5);
        glVertex2f(-1.6,-1.3);
        //glVertex2f(-1.6,-1.2);
        glVertex2f(-1.6, -1);
        //glVertex2f(-1.6,-.9);
        glVertex2f(-1.6,-.7);
        //glVertex2f(-1.6,-.6);
        glVertex2f(-1.6,-.4);
        //glVertex2f(-1.6,-.3);
        glVertex2f(-1.6,-.1);
        //glVertex2f(-1.7,-1.9);
        glVertex2f(-1.7,-1.7);
        //glVertex2f(-1.7,-1.6);
        glVertex2f(-1.7,-1.4);
        //glVertex2f(-1.7,-1.3);
        glVertex2f(-1.7,-1.1);
        //glVertex2f(-1.7, -1);
        glVertex2f(-1.7,-.8);
        //glVertex2f(-1.7,-.7);
        //glVertex2f(-1.7,-.5);
        glVertex2f(-1.7,-.4);
        //glVertex2f(-1.7,-.2);
        glVertex2f(-1.7,-.1);
        glVertex2f(-1.7,-.0);
        //glVertex2f(-1.8,-2);
        glVertex2f(-1.8,-1.9);
        //glVertex2f(-1.8,-1.8);
        glVertex2f(-1.8,-1.6);
        glVertex2f(-1.8,-1.5);
        //glVertex2f(-1.8,-1.3);
        glVertex2f(-1.8,-1.2);
        //glVertex2f(-1.8, -1);
        glVertex2f(-1.8,-.9);
        //glVertex2f(-1.8,-.7);
        glVertex2f(-1.8,-.6);
        //glVertex2f(-1.8,-.4);
        glVertex2f(-1.8,-.3);
        //glVertex2f(-1.8,-.1);
        glVertex2f(-1.9,-1.9);
        //glVertex2f(-1.9,-1.7);
        glVertex2f(-1.9,-1.6);
        //glVertex2f(-1.9,-1.4);
        glVertex2f(-1.9,-1.3);
        //glVertex2f(-1.9,-1.1);
        glVertex2f(-1.9, -1);
        //glVertex2f(-1.9,-.8);
        glVertex2f(-1.9,-.7);
        glVertex2f(-1.9,-.5);
        glVertex2f(-1.9,-.4);
        //glVertex2f(-1.9,-.2);
        glVertex2f(-1.9,-.1);
        //glVertex2f(-1.9,-.0);
        glVertex2f(.1,-2);
        //glVertex2f(.1,-1.9);
        glVertex2f(.1,-1.7);
        //glVertex2f(.1,-1.6);
        glVertex2f(.1,-1.4);
        //glVertex2f(.1,-1.3);
        glVertex2f(.1,-1.1);
        glVertex2f(.1, -1);
        //glVertex2f(.1,-.8);
        glVertex2f(.1,-.7);
        //glVertex2f(.1,-.5);
        glVertex2f(.1,-.4);
        //glVertex2f(.1,-.2);
        glVertex2f(.1,-.1);
        //glVertex2f(.2,-1.9);
        glVertex2f(.2,-1.8);
        glVertex2f(.2,-1.6);
        //glVertex2f(.2,-1.5);
        glVertex2f(.2,-1.3);
        //glVertex2f(.2,-1.2);
        glVertex2f(.2, -1);
        glVertex2f(.2,-.9);
        //glVertex2f(.2,-.7);
        glVertex2f(.2,-.6);
        //glVertex2f(.2,-.4);
        glVertex2f(.2,-.3);
        //glVertex2f(.2,-.1);
        glVertex2f(.2,-.0);
        //glVertex2f(.3,-2);
        glVertex2f(.3,-1.9);
        //glVertex2f(.3,-1.7);
        glVertex2f(.3,-1.6);
        //glVertex2f(.3,-1.4);
        glVertex2f(.3,-1.3);
        //glVertex2f(.3,-1.1);
        //glVertex2f(.3, -1);
        glVertex2f(.3,-.8);
        //glVertex2f(.3,-.7);
        glVertex2f(.3,-.5);
        glVertex2f(.3,-.4);
        //glVertex2f(.3,-.2);
        glVertex2f(.3,-.1);
        glVertex2f(.4,-1.9);
        //glVertex2f(.4,-1.8);
        glVertex2f(.4,-1.6);
        glVertex2f(.4,-1.5);
        //glVertex2f(.4,-1.3);
        glVertex2f(.4,-1.2);
        //glVertex2f(.4, -1);
        glVertex2f(.4,-.9);
        //glVertex2f(.4,-.7);
        glVertex2f(.4,-.6);
        //glVertex2f(.4,-.4);
        glVertex2f(.4,-.3);
        //glVertex2f(.4,-.1);
        glVertex2f(.4,-.0);
        glVertex2f(.5,-2);
        //glVertex2f(.5,-1.9);
        glVertex2f(.5,-1.7);
        //glVertex2f(.5,-1.6);
        glVertex2f(.5,-1.4);
        //glVertex2f(.5,-1.3);
        glVertex2f(.5,-1.1);
        glVertex2f(.5, -1);
        //glVertex2f(.5,-.8);
        glVertex2f(.5,-.7);
        //glVertex2f(.5,-.5);
        glVertex2f(.5,-.4);
        //glVertex2f(.5,-.2);
        glVertex2f(.5,-.1);
        //glVertex2f(.6,-1.9);
        glVertex2f(.6,-1.8);
        //glVertex2f(.6,-1.6);
        glVertex2f(.6,-1.5);
        //glVertex2f(.6,-1.3);
        glVertex2f(.6,-1.2);
        //glVertex2f(.6, -1);
        glVertex2f(.6,-.9);
        glVertex2f(.6,-.7);
        //glVertex2f(.6,-.6);
        glVertex2f(.6,-.4);
        //glVertex2f(.6,-.3);
        glVertex2f(.6,-.1);
        //glVertex2f(.6,-.0);
        glVertex2f(.7,-2);
        //glVertex2f(.7,-1.9);
        glVertex2f(.7,-1.7);
        //glVertex2f(.7,-1.6);
        glVertex2f(.7,-1.4);
        //glVertex2f(.7,-1.3);
        glVertex2f(.7,-1.1);
        glVertex2f(.7, -1);
        //glVertex2f(.7,-.8);
        glVertex2f(.7,-.7);
        //glVertex2f(.7,-.5);
        glVertex2f(.7,-.4);
        //glVertex2f(.7,-.2);
        glVertex2f(.7,-.1);
        //glVertex2f(.8,-1.9);
        glVertex2f(.8,-1.8);
        glVertex2f(.8,-1.6);
        //glVertex2f(.8,-1.5);
        glVertex2f(.8,-1.3);
        glVertex2f(.8,-1.2);
        //glVertex2f(.8, -1);
        glVertex2f(.8,-.9);
        //glVertex2f(.8,-.7);
        glVertex2f(.8,-.6);
        //glVertex2f(.8,-.4);
        glVertex2f(.8,-.3);
        glVertex2f(.8,-.1);
        //glVertex2f(.8,-.0);
        glVertex2f(.9,-2);
        //glVertex2f(.9,-1.9);
        //glVertex2f(.9,-1.7);
        glVertex2f(.9,-1.6);
        //glVertex2f(.9,-1.4);
        glVertex2f(.9,-1.3);
        glVertex2f(.9,-1.1);
        //glVertex2f(.9, -1);
        glVertex2f(.9,-.8);
        glVertex2f(.9,-.7);
        //glVertex2f(.9,-.5);
        glVertex2f(.9,-.4);
        //glVertex2f(.9,-.2);
        glVertex2f(.9,-.1);
        //glVertex2f(1.0,-1.9);
        //glVertex2f(1.0,-1.7);
        glVertex2f(1.0,-1.6);
        //glVertex2f(1.0,-1.4);
        glVertex2f(1.0,-1.3);
        //glVertex2f(1.0,-1.1);
        //glVertex2f(1.0, -1);
        glVertex2f(1.0,-.8);
        //glVertex2f(1.0,-.7);
        glVertex2f(1.0,-.5);
        //glVertex2f(1.0,-.4);
        glVertex2f(1.0,-.2);
        glVertex2f(1.0,-.1);
        //glVertex2f(1.0,- .0);
        glVertex2f(1.1,-2);
        //glVertex2f(1.1,-1.9);
        glVertex2f(1.1,-1.7);
        //glVertex2f(1.1,-1.6);
        //glVertex2f(1.1,-1.4);
        glVertex2f(1.1,-1.3);
        glVertex2f(1.1,-1.1);
        //glVertex2f(1.1, -1);
        glVertex2f(1.1,-.8);
        glVertex2f(1.1,-.7);
        //glVertex2f(1.1,-.5);
        glVertex2f(1.1,-.4);
        //glVertex2f(1.1,-.2);
        glVertex2f(1.1,-.1);
        glVertex2f(1.2,-1.9);
        //glVertex2f(1.2,-1.8);
        glVertex2f(1.2,-1.6);
        //glVertex2f(1.2,-1.5);
        glVertex2f(1.2,-1.3);
        //glVertex2f(1.2,-1.2);
        glVertex2f(1.2, -1);
        //glVertex2f(1.2,-.9);
        glVertex2f(1.2,-.7);
        //glVertex2f(1.2,-.6);
        glVertex2f(1.2,-.4);
        //glVertex2f(1.2,-.3);
        glVertex2f(1.2,-.1);
        //glVertex2f(1.2,-.0);
        glVertex2f(1.3,-2);
        glVertex2f(1.3,-1.9);
        //glVertex2f(1.3,-1.7);
        glVertex2f(1.3,-1.6);
        //glVertex2f(1.3,-1.4);
        glVertex2f(1.3,-1.3);
        glVertex2f(1.3, -1);
        glVertex2f(1.3,-.8);
        glVertex2f(1.3,-.5);
        glVertex2f(1.3,-.2);
        glVertex2f(1.3,-.1);
        glVertex2f(1.4,-1.8);

        glVertex2f(1.4,-1.5);
        glVertex2f(1.4,-1.3);
        glVertex2f(1.4, -1);
        glVertex2f(1.4,-.7);
        glVertex2f(1.4,-.6);
        glVertex2f(1.4,-.3);

        glVertex2f(1.4,-.0);
        glVertex2f(1.5,-1.9);
        glVertex2f(1.5,-1.7);
        glVertex2f(1.5,-1.4);
        glVertex2f(1.5,-1.3);
        glVertex2f(1.5, -1);
        glVertex2f(1.5,-.7);

        glVertex2f(1.5,-.4);

        glVertex2f(1.5,-.1);
        glVertex2f(1.6,-1.9);

        glVertex2f(1.6,-1.6);
        glVertex2f(1.6,-1.3);
        glVertex2f(1.6, -1);
        glVertex2f(1.6,-.7);
        glVertex2f(1.6,-.4);
        glVertex2f(1.6,-.1);
        glVertex2f(1.6,-.0);
        glVertex2f(1.7,-1.9);
        glVertex2f(1.7,-1.7);
        glVertex2f(1.7,-1.4);
        glVertex2f(1.7,-1.1);
        glVertex2f(1.7, -1);
        glVertex2f(1.7,-.7);
        glVertex2f(1.7,-.5);
        glVertex2f(1.7,-.2);
        glVertex2f(1.8,-1.9);
        glVertex2f(1.8,-1.5);
        glVertex2f(1.8,-1.2);
        glVertex2f(1.8,-.7);
        glVertex2f(1.8,-.4);
        glVertex2f(1.8,-.1);
        glVertex2f(1.9,-2);
        glVertex2f(1.9,-1.9);
        glVertex2f(1.9,-1.6);
        glVertex2f(1.9,-1.4);
        glVertex2f(1.9,-1.1);
        glVertex2f(1.9, -1);
        glVertex2f(1.9,-.7);
        glVertex2f(1.9,-.5);
        glVertex2f(1.9,-.2);
        glVertex2f(1.9,-.1);

        glEnd();

        glPopMatrix();
        glFlush();
    }
    snowPosition-=0.05;
}

void car()
{
    ///CAR01///

    glPushMatrix();
    glTranslatef(carPosition,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 204, 153);
    glVertex2f(-1.7f, -1.45f);
    glVertex2f(-1.8f, -1.45f);
    glVertex2f(-2.0f, -1.45f);
    glVertex2f(-2.0f, -1.3f);
    glVertex2f(-1.8f, -1.3f);
    glVertex2f(-1.7f, -1.35f);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(-1.92,-1.45,0.03);
    circle(-1.78,-1.45,0.03);
    glPopMatrix();

///CAR02///

    glPushMatrix();
    glTranslatef(carPosition1,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 153);
    glVertex2f(1.7f, -1.91f);
    glVertex2f(1.8f, -1.91f);
    glVertex2f(2.0f, -1.91f);
    glVertex2f(2.0f, -1.78f);
    glVertex2f(1.8f, -1.78f);
    glVertex2f(1.7f, -1.86f);
    glEnd();

    glColor3ub(0, 0, 0);
    circle(1.92,-1.91,0.03);
    circle(1.78,-1.91,0.03);

    glPopMatrix();
    glFlush();

}


void Rain()
{
    if(rainy==true)
    {
        glPushMatrix();
        glTranslatef(0.0, 0.5f, 0.0f);

        glPushMatrix();
        glTranslatef(0.0, positionRain, 0.0f);
        for(    float i=2.0f; i>=-2.5f; i-=0.05f)
        {
            for(float j=-2.0f; j<=2.5f; j+=0.05f)
            {
                glLineWidth(1);
                glBegin(GL_LINES);
                glColor3f(1.0f,1.0f,1.0f);
                glVertex2f(j+0.01,i);
                glVertex2f(j,i+0.02);
                glEnd();
            }
        }
        glPopMatrix();
        glPopMatrix();

    }
    positionRain-=0.05;
    glFlush();
}


void display(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(1);
    river();
    boat();
    tree();
    Sky_Star();
    cloud();
    ground();
    grass_walkingroad();
    hill();
    bird();
    house();
    road();
    car();
    Rain();
    snow();
}


void mouse(int button,int state,int x,int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        carSpeed1 += 0.01f;
        if(summer==true || rainy==true)
        {
            boatSpeed += 0.01f;
        }
    }
    if (button == GLUT_RIGHT_BUTTON)
    {
        carSpeed -= 0.01f;
        if(summer==true || rainy==true)
        {
            boatSpeed -= 0.01f;
        }
    }
    if (button==GLUT_MIDDLE_BUTTON)
    {
        carSpeed = 0.0f;
        carSpeed1 = 0.0f;
        boatSpeed = 0.0f;
    }
    glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y)
{
    if(key=='w')
    {
        summer=false;
        winter=true;
        rainy=false;
        glutPostRedisplay();
    }
    else if(key=='s')
    {
        summer=true;
        rainy=false;
        winter=false;
        glutPostRedisplay();
    }
    else if(key=='r')
    {
        rainy=true;
        summer=false;
        winter=false;
        glutPostRedisplay();
    }

    else if(key=='a')
    {
        carSpeed -= 0.01f;
        glutPostRedisplay();
    }
    else if(key=='b')
    {
        carSpeed = 0.0f;
        glutPostRedisplay();
    }
    else if(key=='c')
    {
        carSpeed1 += 0.01f;
        glutPostRedisplay();
    }
    else if(key=='d')
    {
        carSpeed1 = 0.0f;
        glutPostRedisplay();
    }
    else if(key=='e')
    {
        if(summer==true || rainy==true)
        {
            boatSpeed += 0.01f;
            glutPostRedisplay();
        }
    }
    else if(key=='f')
    {
        if(summer==true || rainy==true)
        {
            boatSpeed -= 0.01f;
            glutPostRedisplay();
        }
    }
    else if(key=='g')
    {
        boatSpeed = 0.0f;
        glutPostRedisplay();
    }
    else if(key=='z')
    {
        carSpeed= 0.0f;
        carSpeed1= 0.0f;
        boatSpeed= 0.0f;
        glutIdleFunc(display);
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutCreateWindow("DIFFERENT SEASON SCENARIO");
    glutInitWindowSize(700,700);
    glutInitWindowPosition(0, 0);
    gluOrtho2D(-2,2,-2,2);
    glutDisplayFunc(display);
    glutTimerFunc(100, update, 0);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
    initGL();
    glutMainLoop();
    return 0;
}
