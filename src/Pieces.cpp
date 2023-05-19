#include "Pieces.h"


namespace Game
{
	Pieces Pieces::get_random_piece(int seed, int x, int y)
	{
		std::string name;
		primitives::Point topLeft;
		primitives::Point bottomRight;
		primitives::Point centre;
		std::vector<primitives::Rectangle> box_list;

		primitives::Rectangle rect;
		
		rect.width = 10;
		rect.height = 10;

		centre.x = x;
		centre.y = y;

		switch (seed)
		{
		case 1:
			// box
			name = "Box";

			rect.tL = primitives::Point(x - 10, y - 10);
			rect.bR = primitives::Point(x, y);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 10, y);
			rect.bR = primitives::Point(x, y + 10);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x, y - 10);
			rect.bR = primitives::Point(x + 10, y);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x, y);
			rect.bR = primitives::Point(x + 10, y + 10);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			topLeft = primitives::Point(x - 10, y - 10);
			bottomRight = primitives::Point(x + 10, y + 10);

			break;
		
		case 2:
			// L
			name = "L";

			rect.tL = primitives::Point(x - 5, y - 5);
			rect.bR = primitives::Point(x + 5, y + 5);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x + 5, y - 5);
			rect.bR = primitives::Point(x + 15, y + 5);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 5, y - 15);
			rect.bR = primitives::Point(x + 5, y + 5);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 5, y - 25);
			rect.bR = primitives::Point(x + 5, y - 15);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			topLeft = primitives::Point(x - 5, y - 25);
			bottomRight = primitives::Point(x + 15, y + 5);

			break;
		
		case 3:
			// straight line
			name = "straignt Line";

			rect.tL = primitives::Point(x - 5, y - 10);
			rect.bR = primitives::Point(x + 5, y);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 5, y - 20);
			rect.bR = primitives::Point(x + 5, y - 10);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 5, y);
			rect.bR = primitives::Point(x + 5, y + 10);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 5, y + 10);
			rect.bR = primitives::Point(x + 5, y + 20);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			topLeft = primitives::Point(x - 5, y - 20);
			bottomRight = primitives::Point(x + 5, y + 20);

			break;
		
		case 4:
			// Reverse L
			name = "Reverse L";

			rect.tL = primitives::Point(x - 5, y - 5);
			rect.bR = primitives::Point(x + 5, y + 5);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 15, y - 5);
			rect.bR = primitives::Point(x - 5, y + 5);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 5, y - 15);
			rect.bR = primitives::Point(x + 5, y + 5);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 5, y - 25);
			rect.bR = primitives::Point(x + 5, y - 15);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			topLeft = primitives::Point(x - 15, y - 25);
			bottomRight = primitives::Point(x + 5, y + 5);

			break;
		
		case 5:
			// Z 
			name = "Z";

			rect.tL = primitives::Point(x - 5, y);
			rect.bR = primitives::Point(x + 5, y + 10);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x + 5, y);
			rect.bR = primitives::Point(x + 15, y + 10);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 5, y - 10);
			rect.bR = primitives::Point(x + 5, y);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 15, y - 10);
			rect.bR = primitives::Point(x - 5, y);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			topLeft = primitives::Point(x - 15, y - 10);
			bottomRight = primitives::Point(x + 15, y + 10);

			break;
			
		case 6:
			// Inverse Z 
			name = "Inverse Z";

			rect.tL = primitives::Point(x - 5, y);
			rect.bR = primitives::Point(x + 5, y + 10);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 15, y);
			rect.bR = primitives::Point(x - 5, y + 10);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 5, y - 10);
			rect.bR = primitives::Point(x + 5, y);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x + 5, y - 10);
			rect.bR = primitives::Point(x + 15, y);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			topLeft = primitives::Point(x - 15, y - 10);
			bottomRight = primitives::Point(x + 15, y + 10);

			break;
		
		case 7:
			// T
			name = "T";

			rect.tL = primitives::Point(x - 5, y - 15);
			rect.bR = primitives::Point(x + 5, y - 5);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 5, y - 5);
			rect.bR = primitives::Point(x + 5, y + 5);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x - 15, y - 5);
			rect.bR = primitives::Point(x - 5, y + 5);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			rect.tL = primitives::Point(x + 5, y - 5);
			rect.bR = primitives::Point(x + 15, y + 5);
			rect.center.x = (rect.tL.x + rect.bR.x) / 2;
			rect.center.y = (rect.tL.y + rect.bR.y) / 2;
			box_list.push_back(rect);

			topLeft = primitives::Point(x - 15, y - 15);
			bottomRight = primitives::Point(x + 15, y + 5);

			break;

		default:

			std::cout << "No possible piece." << std::endl;
		}
		
		return Pieces(name, topLeft, bottomRight, centre, box_list);
	}

	void Pieces::draw_piece()
	{
		for (int i = 0; i < box_list.size(); i++)
		{
			primitives::drawShape(box_list[i]);
		}
	}

	void Pieces::move_piece(int x, int y)
	{
		for (int i = 0; i < box_list.size(); i++)
		{
			primitives::moveShape(box_list[i], x, y);
		}

		this->centre.x += x;
		this->centre.y += y;

		this->topLeft.x += x;
		this->topLeft.y += y;

		this->bottomRight.x += x;
		this->bottomRight.y += y;
	}

	primitives::Point Pieces::get_centre() const
	{
		return centre;
	}

	std::vector<primitives::Rectangle> Pieces::get_box_list() const
	{
		return box_list;
	}

	void Pieces::rotatePieceClock()
	{
		int xTemp = 0, yTemp = 0;

		for (int i = 0; i < box_list.size(); i++)
		{
			xTemp = box_list[i].center.x;
			yTemp = box_list[i].center.y;

			box_list[i].center.x = this->centre.x - (this->centre.y - yTemp);
			box_list[i].center.y = this->centre.y + (this->centre.x - xTemp);

			box_list[i].tL.x = box_list[i].center.x - (box_list[i].height / 2);
			box_list[i].tL.y = box_list[i].center.y - (box_list[i].width / 2);

			box_list[i].bR.x = box_list[i].center.x + (box_list[i].height / 2);
			box_list[i].bR.y = box_list[i].center.y + (box_list[i].width / 2);
		}

		// rotating top left point
		xTemp = topLeft.x;
		yTemp = topLeft.y;

		topLeft.x = this->centre.x - (this->centre.y - yTemp);
		topLeft.y = this->centre.y + (this->centre.x - xTemp);

		// rotating bottom right point
		xTemp = bottomRight.x;
		yTemp = bottomRight.y;

		bottomRight.x = this->centre.x - (this->centre.y - yTemp);
		bottomRight.y = this->centre.y + (this->centre.x - xTemp);

		this->draw_piece();
	}

	primitives::Point Pieces::get_top_left() const
	{
		return topLeft;
	}

	primitives::Point Pieces::get_bottom_right() const
	{
		return bottomRight;
	}
	
	void Pieces::get_centre(const primitives::Point p1)
	{
		centre = p1;
	}

	void Pieces::get_top_left(const primitives::Point p1)
	{
		topLeft = p1;
	}

	void Pieces::get_bottom_right(const primitives::Point p1)
	{
		bottomRight = p1;
	}

	bool Pieces::P2PCollision(std::vector<Game::Pieces>& piece_list)
	{
		// First check if the bounding boxes collide


		// Check if each rectangle from p1
		// against each rectangle from p2

		for (int j = 0, k = 0, i = 0; i < piece_list.size(); i++)
		{
			for (i = 0; i < box_list.size(); i++)
			{
				for (j = 0; j < piece_list[k].get_box_list().size(); j++)
				{
					if (primitives::rect2rectCollision(box_list[i], piece_list[k].get_box_list()[j]))
					{
						return true;
					}
				}
			}
		}

		return false;
	}

	void Pieces::printPiece()
	{
		std::cout << "Piece Type = " << name << std::endl;
		std::cout << "Centre = " << centre.x << "   " << centre.y << std::endl;
		std::cout << "topLeft = " << topLeft.x << "   " << topLeft.y << std::endl;
		std::cout << "bottomRight = " << bottomRight.x << "   " << bottomRight.y << std::endl;
	}
}

