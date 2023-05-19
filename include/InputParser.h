#pragma once


#include <Pieces.h>



namespace Game
{
	static void parseInput(Pieces& p1, int move)
	{
		if (move == 82 || move == 114)
		{
			p1.reotatePieceClock();
		}

		if (move == 75)
		{
			// move right
			p1.move_piece(-5, 0);
		}

		if (move == 77)
		{
			// move left
			p1.move_piece(5, 0);
		}

		if (move == 72)
		{
			// move up
			p1.move_piece(0, -5);
		}

		if (move == 80)
		{
			// move down
			p1.move_piece(0, 5);
		}
	}
}

