#include <iostream>
#include <GLUT/GLUT.h>

using namespace std;

int pntX1, pntY1, r;
void display();
void midPointCircleAlgo();
void plot(int, int);

int main(int argc, char** argv){

	cout << "Enter the coordinates of the center:\n\n";
	cout << "X-coordinate   : "; cin >> pntX1;
	cout << "\nY-coordinate : "; cin >> pntY1;
	cout << "\nEnter radius : "; cin >> r;

	glutInit(&argc, argv);
    
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 150);
	glutCreateWindow ("Mid Point Circle");
	glutDisplayFunc(display);
	glutMainLoop();

}

void display(){

	glClear (GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100, 100, -100, 100);

	midPointCircleAlgo();

	glFlush ();
}


void midPointCircleAlgo(){

	int x = 0;
	int y = r;
	int P = 1 - r;
    
	plot(x, y);

	while (y > x)
	{
		if (P < 0){
			x++; 
			P += 2*x + 1;
		}
		else{
			y--;
			x++;
			P += 2*(x-y) + 1;
		}
		plot(x, y); 
		plot(x, -y);
		plot(-x, y); 
		plot(-x, -y); 
		plot(y, x); 
		plot(-y, x); 
		plot(y, -x); 
		plot(-y, -x);
	}

}



void plot(int x, int y){

    glPointSize(4);
	glBegin(GL_POINTS);
        glColor3f (1, 0.0, 0.0);
	    glVertex2i(x+pntX1, y+pntY1);
	glEnd();
}

