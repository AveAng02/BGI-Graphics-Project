#include "Pieces.h"


namespace Game
{
	void Pieces::get_random_piece(int seed, int x, int y)
	{
		primitives::Rectangle rect;
		
		rect.width = 10;
		rect.height = 10;

		centre.x = x;
		centre.y = y;

		switch (seed)
		{
		case 1:
			// box
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

			break;
		
		case 2:
			// L
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

			break;
		
		case 3:
			// straight line
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

			break;
		
		case 4:
			// Reverse L
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

			break;
		
		case 5:
			// Z 
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

			break;
			
		case 6:
			// Inverse Z 
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

			break;
		
		case 7:
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

			break;

		default:

			std::cout << "No possible piece." << std::endl;
		}
		
		
	}

	void Pieces::draw_piece()
	{
		for (int i = 0; i < box_list.size(); i++)
		{
			Canvas::drawShape(box_list[i]);
		}
	}

	void Pieces::move_piece(int x, int y)
	{
		for (int i = 0; i < box_list.size(); i++)
		{
			Canvas::moveShape(box_list[i], x, y);
		}
	}

	primitives::Point Pieces::get_centre() const
	{
		return centre;
	}

	std::vector<primitives::Rectangle> Pieces::get_box_list() const
	{
		return box_list;
	}

	void Pieces::reotatePieceClock()
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
}

