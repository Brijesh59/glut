/*
 How to run?
 -> g++ filename.cpp -o filename -framework OpenGL -framework GLUT
*/

#include <GLUT/GLUT.h>

void display();

int main(int argc, char** argv){
  glutInit(&argc, argv);
  // glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);   // GLUT_SINGLE -> ONE FRAME BUFFER
  glutInitWindowPosition(300, 200);
  glutInitWindowSize(640, 480);
  glutCreateWindow("First Glut App");

  glutDisplayFunc(display);
  glutMainLoop();
}

void display(){

  glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2f(-0.5, -0.5);
    glColor3f(0, 1, 0);
    glVertex2f(0.5, -0.5);
    glColor3f(0, 0, 1);
    glVertex2f(0.0, 0.5);
  glEnd();

  // glutSwapBuffers();  // For GLUT_DOUBLE
  glFlush();
}
