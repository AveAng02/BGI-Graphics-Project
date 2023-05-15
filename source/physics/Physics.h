#pragma once

#include "primitives.h"


namespace Game
{
	class Physics
	{
	public:

		static void drawShape(Game::Rectangle rect);
		static void moveShape(Game::Rectangle rect, int x, int y);
		static void rotateShape(Game::Rectangle rect);
	};
}

