
#include <iostream>
#include <vector>
#include <graphics.h>
#include <Primitives.h>
#include <InputParser.h>
#include <Pieces.h>
#include <physics.h>



int main()
{
	initwindow(1440, 811, "Tetris");

	int seed = 1;
	int centre_x = getmaxx() / 2;
	int centre_y = getmaxy() / 2;

	std::vector<Game::Pieces> piece_list;

	Game::Pieces p1(seed, centre_x, centre_y);
	Game::Pieces p2(seed, centre_x / 2, centre_y / 2);

	int x_pos = 0;
	int y_pos = 0;

	p1.draw_piece();

	// Main game loop
	while (true)
	{
		p2.draw_piece();
		p1.draw_piece();

		if(primitives::P2PCollision(p1, p2))
		{
			std::cout << "Collision!" << std::endl;
		}
		else
		{
			Game::parseInput(p1, getch());
		}
		
		cleardevice();
	}
	

	return 0;
}




