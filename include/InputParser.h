#pragma once


#include <Pieces.h>



namespace Game
{
	static void parseInput(Pieces& p1, int move, int x_pos = 10, int y_pos = 10)
	{
		if (move == 82 || move == 114)
		{
			p1.rotatePieceClock();
		}

		if (move == 75)
		{
			// move right
			p1.move_piece(-x_pos, 0);
		}

		if (move == 77)
		{
			// move left
			p1.move_piece(x_pos, 0);
		}

		if (move == 72)
		{
			// move up
			p1.move_piece(0, -y_pos);
		}

		if (move == 80)
		{
			// move down
			p1.move_piece(0, y_pos);
		}
	}
}

