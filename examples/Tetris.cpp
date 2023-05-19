
#include <iostream>
#include <vector>
#include <graphics.h>
#include <Primitives.h>
#include <Canvas.h>
#include <InputParser.h>
#include <Pieces.h>
#include <physics.h>



int main()
{
	initwindow(1440, 811, "Tetris");

	int seed = 1;
	int centre_x = getmaxx() / 2;
	int centre_y = getmaxy() / 2;

	int spawn_x = getmaxx() / 4;
	int spawn_y = 10;

	std::vector<Game::Pieces> piece_list;

	primitives::Point GS1 = primitives::Point(20, 20);
	primitives::Point GS2 = primitives::Point(centre_x - 10, getmaxy() - 30);

	GameSpace game1(GS1, GS2);

	Game::Pieces p1(seed, spawn_x, spawn_y);
	Game::Pieces p2(seed, centre_x, centre_y);

	int x_pos = 0;
	int y_pos = 0;

	p1.draw_piece();

	// Main game loop
	while (true)
	{
		game1.drawGameSpace();

		p2.draw_piece();
		p1.draw_piece();

		for (int i = 0; i < piece_list.size(); i++)
		{
			piece_list[i].draw_piece();
		}

		if(primitives::P2PCollision(p1, p2))
		{
			std::cout << "Collision!" << std::endl;

			piece_list.push_back(p1);

			p1 = Game::Pieces((std::rand() % 7 + 1), spawn_x, spawn_y);
		}
		else
		{
			Game::parseInput(p1, getch());
		}
		
		cleardevice();
	}
	

	return 0;
}




