#include "Pieces.h"


namespace Game
{
	void Pieces::get_random_piece(int seed, int x, int y)
	{
		Rectangle rect;
		
		rect.width = 10;
		rect.height = 10;

		switch (seed)
		{
		case 1:
			// box
			rect.tL = Point(x - 10, y - 10);
			rect.bR = Point(x, y);
			box_list.push_back(rect);

			rect.tL = Point(x - 10, y);
			rect.bR = Point(x, y + 10);
			box_list.push_back(rect);

			rect.tL = Point(x, y - 10);
			rect.bR = Point(x + 10, y);
			box_list.push_back(rect);

			rect.tL = Point(x, y);
			rect.bR = Point(x + 10, y + 10);
			box_list.push_back(rect);

			break;
		
		case 2:
			// L
			rect.tL = Point(x - 5, y - 5);
			rect.bR = Point(x + 5, y + 5);
			box_list.push_back(rect);

			rect.tL = Point(x + 5, y - 5);
			rect.bR = Point(x + 15, y + 5);
			box_list.push_back(rect);

			rect.tL = Point(x - 5, y - 15);
			rect.bR = Point(x + 5, y + 5);
			box_list.push_back(rect);

			rect.tL = Point(x - 5, y - 25);
			rect.bR = Point(x + 5, y - 15);
			box_list.push_back(rect);

			break;
		
		case 3:
			// straight line
			rect.tL = Point(x - 5, y - 10);
			rect.bR = Point(x + 5, y);
			box_list.push_back(rect);

			rect.tL = Point(x - 5, y - 20);
			rect.bR = Point(x + 5, y - 10);
			box_list.push_back(rect);

			rect.tL = Point(x - 5, y);
			rect.bR = Point(x + 5, y + 10);
			box_list.push_back(rect);

			rect.tL = Point(x - 5, y + 10);
			rect.bR = Point(x + 5, y + 20);
			box_list.push_back(rect);

			break;
		
		case 4:
			// Reverse L
			rect.tL = Point(x - 5, y - 5);
			rect.bR = Point(x + 5, y + 5);
			box_list.push_back(rect);

			rect.tL = Point(x - 15, y - 5);
			rect.bR = Point(x - 5, y + 5);
			box_list.push_back(rect);

			rect.tL = Point(x - 5, y - 15);
			rect.bR = Point(x + 5, y + 5);
			box_list.push_back(rect);

			rect.tL = Point(x - 5, y - 25);
			rect.bR = Point(x + 5, y - 15);
			box_list.push_back(rect);

			break;
		
		case 5:
			// Z 
			rect.tL = Point(x - 5, y);
			rect.bR = Point(x + 5, y + 10);
			box_list.push_back(rect);

			rect.tL = Point(x + 5, y);
			rect.bR = Point(x + 15, y + 10);
			box_list.push_back(rect);

			rect.tL = Point(x - 5, y - 10);
			rect.bR = Point(x + 5, y);
			box_list.push_back(rect);

			rect.tL = Point(x - 15, y - 10);
			rect.bR = Point(x - 5, y);
			box_list.push_back(rect);

			break;
			
		case 6:
			// Inverse Z 
			rect.tL = Point(x - 5, y);
			rect.bR = Point(x + 5, y + 10);
			box_list.push_back(rect);

			rect.tL = Point(x - 15, y);
			rect.bR = Point(x - 5, y + 10);
			box_list.push_back(rect);

			rect.tL = Point(x - 5, y - 10);
			rect.bR = Point(x + 5, y);
			box_list.push_back(rect);

			rect.tL = Point(x + 5, y - 10);
			rect.bR = Point(x + 15, y);
			box_list.push_back(rect);

			break;
		
		case 7:
			rect.tL = Point(x - 5, y - 15);
			rect.bR = Point(x + 5, y - 5);
			box_list.push_back(rect);

			rect.tL = Point(x - 5, y - 5);
			rect.bR = Point(x + 5, y + 5);
			box_list.push_back(rect);

			rect.tL = Point(x - 15, y - 5);
			rect.bR = Point(x - 5, y + 5);
			box_list.push_back(rect);

			rect.tL = Point(x + 5, y - 5);
			rect.bR = Point(x + 15, y + 5);
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
			Physics::drawShape(box_list[i]);
		}
	}

	void Pieces::move_piece(int x, int y)
	{
		for (int i = 0; i < box_list.size(); i++)
		{
			Physics::moveShape(box_list[i], x, y);
		}
	}

	Game::Point Pieces::get_centre() const
	{
		return centre;
	}

	std::vector<Rectangle> Pieces::get_box_list() const
	{
		return box_list;
	}
}

