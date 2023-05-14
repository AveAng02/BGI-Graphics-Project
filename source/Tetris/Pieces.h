#pragma once

#include <graphics.h>
#include <Primitives.h>
#include <Physics.h>
#include <vector>


namespace Game
{
	class Pieces
	{
	public:

		Pieces()
		{
			int seed = std::rand() % 8 + 1;

			get_random_piece(seed, 0, 0);
		}

		Pieces(int seed, int x = 0, int y = 0)
		{
			get_random_piece(seed % 7, x, y);
		}

		void draw_piece();

		void move_piece(int x, int y);

	private:

		void get_random_piece(int seed, int x, int y);

		std::vector<Rectangle> box_list;
	};
}

