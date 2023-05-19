
#include "Canvas.h"


void GameSpace::drawGameSpace()
{
	Canvas::drawShape(topWall);
	Canvas::drawShape(bottomWall);
	Canvas::drawShape(leftWall);
	Canvas::drawShape(rightWall);
}

