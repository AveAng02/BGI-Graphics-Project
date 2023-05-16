
#include <iostream>
#include <graphics.h>
#include <Primitives.h>
#include <Pieces.h>



int main()
{
	initwindow(1440, 811, "Tetris");

	int move = 0;
	int seed = 1;
	int centre_x = getmaxx() / 2;
	int centre_y = getmaxy() / 2;

	Game::Pieces p1(seed, centre_x, centre_y);

	int x_pos = 0;
	int y_pos = 0;

	p1.draw_piece();

	// Main game loop
	while (true)
	{
		p1.move_piece(x_pos, y_pos);

		move = getch();

		if (move == 13)
		{
			p1 = Game::Pieces((std::rand() % 7 + 1), centre_x, centre_y);

			p1.draw_piece();
		}

		if (move == 82 || move == 114)
		{
			p1.reotatePieceClock();
		}

		if (move == 75)
		{
			// move right
			x_pos -= 5;
		}

		if (move == 77)
		{
			// move left
			x_pos += 5;
		}

		if (move == 72)
		{
			// move up
			y_pos -= 5;
		}

		if (move == 80)
		{
			// move down
			y_pos += 5;
		}

		cleardevice();
	}
	

	return 0;
}




