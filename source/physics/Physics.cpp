
#include "Physics.h"


namespace Game
{
	void Physics::drawShape(Game::Rectangle rect)
	{
		rectangle(rect.tL.x, rect.tL.y, rect.bR.x, rect.bR.y);
	}

	void Physics::moveShape(Game::Rectangle rect, int x, int y)
	{
		// rectangle(rect.tL.x + x, rect.tL.y + y, rect.bR.x + x, rect.bR.y + y);
		rect.tL.x += x;
		rect.tL.y += y;
		rect.bR.x += x; 
		rect.bR.y += y;

		drawShape(rect);
	}

	static void rotateShape(Game::Rectangle rect)
	{

	}
}
