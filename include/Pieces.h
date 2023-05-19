#pragma once

#include <iostream>
#include <graphics.h>
#include <primitives.h>
#include <physics.h>
#include <vector>


namespace Game
{
	class Pieces
	{
	public:

		Pieces()
		{
			int seed = std::rand() % 7 + 1;

			*this = get_random_piece(seed, 0, 0);

			centre.x = 0;
			centre.y = 0;
		}

		Pieces(int x_, int y_)
		{
			int seed = std::rand() % 7 + 1;

			*this = get_random_piece(seed, x_, y_);

			centre.x = x_;
			centre.y = y_;
		}

		Pieces(int seed, int x_, int y_)
		{
			*this = get_random_piece(seed % 8, x_, y_);

			centre.x = x_;
			centre.y = y_;
		}

		Pieces(std::string name_,
		primitives::Point topLeft_,
		primitives::Point bottomRight_,
		primitives::Point centre_,
		std::vector<primitives::Rectangle> box_list_)
		{
			this->name = name_;
			this->topLeft = topLeft_;
			this->bottomRight = bottomRight_;
			this->centre = centre_;
			this->box_list = box_list_;
		}

		Pieces operator=(const Pieces& p2) 
		{
			this->centre.x = p2.centre.x;
			this->centre.y = p2.centre.y;
			this->box_list = p2.get_box_list();

			return *this;
		}

		void draw_piece();

		primitives::Point get_centre() const;

		primitives::Point get_top_left() const;

		primitives::Point get_bottom_right() const;

		void get_centre(const primitives::Point);

		void get_top_left(const primitives::Point);

		void get_bottom_right(const primitives::Point);

		void move_piece(int x, int y);

		std::vector<primitives::Rectangle> get_box_list() const;

		bool P2PCollision(std::vector<Game::Pieces>&);

		void rotatePieceClock();

		void printPiece();

		Pieces get_random_piece(int seed, int x, int y);

	private:
		std::string name;
		primitives::Point topLeft;
		primitives::Point bottomRight;
		primitives::Point centre;
		std::vector<primitives::Rectangle> box_list;
	};

}

