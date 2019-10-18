#include <iostream>
#include "graphics.h"
#include "primitives.h"
#include "matrix.h"
#include "windows.h"
#include "physics.h"

int main()
{
	double theta = -0.78539, step = 0.01; // theta = -pi / 4;
	primitives::Line l;
	std::cout << "Please enter the coordinates for the end points of a line (x,y)." << std::endl;
	std::cin >> l.src.x >> l.src.y >> l.dst.x >> l.dst.y;
	// double radius = getEuclideanDistance(l.src.x, l.src.y, l.dst.x, l.dst.y);
	initwindow(600, 600, "First Sample");
	setcolor(12);
	// std::cout << "Please enter the rotation angle in radians." << std::endl;
	// std::cin >> theta;
	while (1)
	{
		cleardevice();

		if (GetAsyncKeyState(VK_SPACE)) //keyboard input
			system("pause");

		if (theta <= -1.57079 || theta >= 0) // -pi / 2 radians
			step *= -1; // changes the direction of rotation*/
		
		std::cout << "DST x y : " << l.dst.x << " " << l.dst.y << " SRC x y : " << l.src.x << " " << l.src.y << " Radius: " << getEuclideanDistance(l.src.x, l.src.y, l.dst.x, l.dst.y) << std::endl;
		rotateRay(l.dst, step, l.src.x, l.src.y);
		line(l.src.x, l.src.y, l.dst.x, l.dst.y);
		theta += step;

		// alternative method

		/*l.dst.x = l.src.x + static_cast<int>(radius * cos(theta));
		l.dst.y = l.src.y + static_cast<int>(radius * sin(theta));
		line(l.src.x, l.src.y, l.dst.x, l.dst.y);
		theta += step;*/

		swapbuffers();
	}

	//rotateRay(l.dst, theta, 0, 0);
	
	system("pause"); // windows only feature
	closegraph();
	return 0;
}