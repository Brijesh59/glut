#include <GLUT/GLUT.h>

void display();

int main(int argc, char** argv){

  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 150);
	glutCreateWindow ("3D Objects");
	glutDisplayFunc(display);
	glutMainLoop();
}

void display(){

  glClear(GL_COLOR_BUFFER_BIT);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  
  glOrtho(-100, 100, -100, 100, -100, 100);
  
//   glutWireTeapot(50);
//   glutWireCube(20);
//   glutWireCone(20,40,40,40);
//   glutWireTorus(20, 30, 40, 40);
//   glutWireSphere(20, 40, 40);

  glFlush();
}