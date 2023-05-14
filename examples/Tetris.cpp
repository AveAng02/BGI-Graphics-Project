

#include <graphics.h>
#include <primitives.h>


#define SPEED 5



int main()
{
	initwindow(1440, 811, "Tetris");

	int move = 0;

	primitives::Rectangle rect1;

	int centre_x = getmaxx() / 2;
	int centre_y = getmaxy() / 2;

	rect1.tL.x = centre_x - 50;
	rect1.tL.y = centre_y - 50;

	rect1.bR.x = centre_x + 50;
	rect1.bR.y = centre_y + 50;

	int x_pos = 0;
	int y_pos = 0;

	drawShape(rect1);

	// Main game loop
	while (true)
	{
		moveShape(rect1, x_pos, y_pos);

		move = getch();

		if (move == 75)
		{
			// move right
			x_pos -= SPEED;
		}

		if (move == 77)
		{
			// move left
			x_pos += SPEED;
		}

		if (move == 72)
		{
			// move up
			y_pos -= SPEED;
		}

		if (move == 80)
		{
			// move down
			y_pos += SPEED;
		}


		cleardevice();
	}



	getch();
	return 0;
}




