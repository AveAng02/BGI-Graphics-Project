#pragma once

#include "graphics.h"
#include "primitives.h"
#include <Pieces.h>
#include <physics.h>



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

		topWall.height = 10;
		topWall.width = abs(topWall.tL.x - topWall.bR.x);

		bottomWall.height = 10;
		bottomWall.width = abs(bottomWall.tL.x - bottomWall.bR.x);

		leftWall.width = abs(leftWall.tL.y - leftWall.bR.y);
		leftWall.width = 10;

		rightWall.width = abs(rightWall.tL.y - rightWall.bR.y);
		rightWall.width = 10;
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

		topWall.height = 10;
		topWall.width = abs(topWall.tL.x - topWall.bR.x);

		bottomWall.height = 10;
		bottomWall.width = abs(bottomWall.tL.x - bottomWall.bR.x);

		leftWall.width = abs(leftWall.tL.y - leftWall.bR.y);
		leftWall.width = 10;

		rightWall.width = abs(rightWall.tL.y - rightWall.bR.y);
		rightWall.width = 10;
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

		topWall.height = 10;
		topWall.width = abs(topWall.tL.x - topWall.bR.x);

		bottomWall.height = 10;
		bottomWall.width = abs(bottomWall.tL.x - bottomWall.bR.x);

		leftWall.width = abs(leftWall.tL.y - leftWall.bR.y);
		leftWall.width = 10;

		rightWall.width = abs(rightWall.tL.y - rightWall.bR.y);
		rightWall.width = 10;
	}

	void drawGameSpace() const;

	bool collidesWithBottom(const Game::Pieces&) const;

	bool collidesWithRight(const Game::Pieces&) const;

	bool collidesWithLeft(const Game::Pieces&) const;


private:
	int border;
	primitives::Point topLeft;
	primitives::Point bottomRight;
	primitives::Rectangle topWall; 
	primitives::Rectangle leftWall;
	primitives::Rectangle rightWall;
	primitives::Rectangle bottomWall;
};

