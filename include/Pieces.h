#pragma once

#include <iostream>
#include <graphics.h>
#include <primitives.h>
#include <Canvas.h>
#include <vector>


namespace Game
{
	class Pieces
	{
	public:

		Pieces()
		{
			int seed = std::rand() % 7 + 1;

			get_random_piece(seed, 0, 0);

			centre.x = 0;
			centre.y = 0;
		}

		Pieces(int x_, int y_)
		{
			int seed = std::rand() % 7 + 1;

			get_random_piece(seed, x_, y_);

			centre.x = x_;
			centre.y = y_;
		}

		Pieces(int seed, int x_, int y_)
		{
			get_random_piece(seed % 8, x_, y_);

			centre.x = x_;
			centre.y = y_;
		}

		Pieces operator=(const Pieces& p2) 
		{
			this->centre.x = p2.centre.x;
			this->centre.y = p2.centre.y;
			this->box_list = p2.get_box_list();

			return *this;
		}

		void draw_piece();

		void move_piece(int x, int y);

		primitives::Point get_centre() const;

		primitives::Point get_top_left() const;

		primitives::Point get_bottom_right() const;

		std::vector<primitives::Rectangle> get_box_list() const;

		void reotatePieceClock();

	private:

		void get_random_piece(int seed, int x, int y);

		primitives::Point topLeft;
		primitives::Point bottomRight;
		primitives::Point centre;
		std::vector<primitives::Rectangle> box_list;
	};
}

