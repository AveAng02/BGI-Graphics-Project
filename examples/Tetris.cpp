
#include <iostream>
#include <vector>
#include <graphics.h>
#include <Primitives.h>
#include <InputParser.h>
#include <Pieces.h>
#include <physics.h>
#include <Canvas.h>




int main()
{
	initwindow(1440, 811, "Tetris");

	int FPS = 60;

	int seed = 1;
	int centre_x = getmaxx() / 2;
	int centre_y = getmaxy() / 2;

	int spawn_x = getmaxx() / 4;
	int spawn_y = 50;

	std::vector<Game::Pieces> piece_list;
	std::vector<primitives::Rectangle> rectangle_list;

	primitives::Point GS1 = primitives::Point(20, 25);
	primitives::Point GS2 = primitives::Point(centre_x - 10, getmaxy() - 35);

	GameSpace game1(GS1, GS2);

	Game::Pieces p1(5, spawn_x, spawn_y);

	p1.draw_piece();

	// Main game loop
	while (true)
	{
		game1.drawGameSpace();
		p1.draw_piece();

		for (int i = 0; i < piece_list.size(); i++)
		{
			piece_list[i].draw_piece();
		}

		// replace P2PCollision with accel struct
		if(p1.P2PCollision(piece_list) || game1.collidesWithBottom(p1))
		{
			// add piece to accel struct
			piece_list.push_back(p1);

			p1 = p1.get_random_piece((std::rand() % 7 + 1), spawn_x, spawn_y);

			p1.printPiece();
		}
		else if (game1.collidesWithLeft(p1))
		{
			// get Input
			int move = getch();

			if (move != 77)
			{
				Game::parseInput(p1, move);
			}
		}
		else if(game1.collidesWithRight(p1))
		{
			// get Input
			int move = getch();

			if (move != 75)
			{
				Game::parseInput(p1, move);
			}
		}
		else
		{
			// get Input
			Game::parseInput(p1, getch());
		}

		// Game::parseInput(p1, 80);
		
		cleardevice();
	}
	

	return 0;
}




