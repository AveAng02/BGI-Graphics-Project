#pragma once

#include "graphics.h"
#include "primitives.h"
#include <Pieces.h>


class Canvas
{
public:
	static void drawShape(primitives::Rectangle rect)
	{
		rectangle(rect.tL.x, rect.tL.y, rect.bR.x, rect.bR.y);
	}

	static void moveShape(primitives::Rectangle& rect, int x, int y)
	{
		// rectangle(rect.tL.x + x, rect.tL.y + y, rect.bR.x + x, rect.bR.y + y);
		rect.tL.x += x;
		rect.tL.y += y;
		rect.bR.x += x;
		rect.bR.y += y;
		rect.center.x += x;
		rect.center.y += y;

		drawShape(rect);
	}
};



class GameSpace
{
public:

	GameSpace()
	{
		this->border = 10;
		this->topLeft = primitives::Point(0, 0);
		this->bottomRight = primitives::Point(getmaxx() / 2, getmaxy() / 2);

		topWall.tL = primitives::Point(10, 10);
		topWall.bR = primitives::Point(bottomRight.x + 10 , 20);

		bottomWall.tL = primitives::Point(10, bottomRight.y);
		bottomWall.bR = primitives::Point(bottomRight.x + 10, bottomRight.y + 10);

		leftWall.tL = primitives::Point(10, 20);
		leftWall.bR = primitives::Point(20, bottomRight.y);

		rightWall.tL = primitives::Point(bottomRight.x, 20);
		rightWall.bR = primitives::Point(bottomRight.x + 10, bottomRight.y);
	}

	GameSpace(primitives::Point tL, primitives::Point bR)
	{
		this->border = 10;
		this->topLeft = tL;
		this->bottomRight = bR;

		topWall.tL = primitives::Point(10, 10);
		topWall.bR = primitives::Point(bottomRight.x + 10, 20);

		bottomWall.tL = primitives::Point(10, bottomRight.y);
		bottomWall.bR = primitives::Point(bottomRight.x + 10, bottomRight.y + 10);

		leftWall.tL = primitives::Point(10, 20);
		leftWall.bR = primitives::Point(20, bottomRight.y);

		rightWall.tL = primitives::Point(bottomRight.x, 20);
		rightWall.bR = primitives::Point(bottomRight.x + 10, bottomRight.y);
	}

	GameSpace(primitives::Point tL, primitives::Point bR, int n)
	{
		this->border = n;
		this->topLeft = tL;
		this->bottomRight = bR;

		topWall.tL = primitives::Point(10, 10);
		topWall.bR = primitives::Point(bottomRight.x + 10, 20);

		bottomWall.tL = primitives::Point(10, bottomRight.y);
		bottomWall.bR = primitives::Point(bottomRight.x + 10, bottomRight.y + 10);

		leftWall.tL = primitives::Point(10, 20);
		leftWall.bR = primitives::Point(20, bottomRight.y);

		rightWall.tL = primitives::Point(bottomRight.x, 20);
		rightWall.bR = primitives::Point(bottomRight.x + 10, bottomRight.y);
	}

	void drawGameSpace();

private:
	int border;
	primitives::Point topLeft;
	primitives::Point bottomRight;
	primitives::Rectangle topWall; 
	primitives::Rectangle leftWall;
	primitives::Rectangle rightWall;
	primitives::Rectangle bottomWall;
};

