#pragma once

#include "graphics.h"
#include "primitives.h"


class Canvas
{
public:
	static void drawShape(primitives::Rectangle rect)
	{
		rectangle(rect.tL.x, rect.tL.y, rect.bR.x, rect.bR.y);
	}

	static void moveShape(primitives::Rectangle rect, int x, int y)
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

