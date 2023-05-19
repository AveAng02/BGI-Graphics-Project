
#include "Canvas.h"


void GameSpace::drawGameSpace() const
{
	// primitives::drawShape(topWall);
	primitives::drawShape(bottomWall);
	primitives::drawShape(leftWall);
	primitives::drawShape(rightWall);
}

bool GameSpace::collidesWithBottom(const Game::Pieces& r1) const 
{
	for (int i = 0; i < r1.get_box_list().size(); i++)
	{
		int gap = abs(bottomRight.y - r1.get_box_list()[i].bR.y);

		std::cout << "Gap collidesWithBottom = " << gap << std::endl;

		if (gap < 10)
		{
			return true;
		}
	}

	return false;
}

bool GameSpace::collidesWithRight(const Game::Pieces& p1) const
{
	for (int i = 0; i < p1.get_box_list().size(); i++)
	{
		int gap = abs(topLeft.x - p1.get_box_list()[i].tL.x);

		std::cout << "Gap collidesWithLeft = " << gap << std::endl;

		if (gap < 5)
		{
			return true;
		}
	}

	return false;
}

bool GameSpace::collidesWithLeft(const Game::Pieces& p1) const 
{
	for (int i = 0; i < p1.get_box_list().size(); i++)
	{
		int gap = abs(bottomRight.x - p1.get_box_list()[i].bR.x);

		std::cout << "Gap collidesWithRight = " << gap << std::endl;

		if (gap <= 5)
		{
			return true;
		}
	}

	return false;
}

