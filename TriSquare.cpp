// TriSquare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include <stdlib.h>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 0.0, 0.0, 0.0); // Set display-//window color to white.
	glMatrixMode(GL_PROJECTION); // Set //projection parameters.
	gluOrtho2D(0, 400, 0, 500);
}

void display() {

	// Set every pixel in the frame buffer to the current clear color.
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);


	glColor3f(0.000, 0.000, 0.804);

	glVertex2f(100.0, 400.0);
	glColor3f(0.098, 0.098, 0.439);
	glVertex2f(100.0, 100.0);
	glColor3f(0.498, 1.000, 0.831);
	glVertex2f(300.0, 400.0);

	glColor3f(0.000, 0.749, 1.000);
	glVertex2f(300.0, 100.0);
	glColor3f(0.251, 0.878, 0.816);
	glVertex2f(100.0, 100.0);
	glColor3f(0.855, 0.647, 0.125);
	glVertex2f(300.0, 400.0);

	glEnd();

	// Flush drawing command buffer to make drawing happen as soon as possible.
	glFlush();
}
void main(int argc, char** argv)
{
	glutInit(&argc, argv); // Initialize GLUT.
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode.
	glutInitWindowPosition(400, 200); // Set top-left display-window position.
	glutInitWindowSize(600, 500); // Set display-window width and height.
	glutCreateWindow("Triangle Making Square"); // Create display window.
	init(); // Execute initialization procedure.
	glutDisplayFunc(display); // Send graphics to display window.
	glutMainLoop(); // Display everything and wait.
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
