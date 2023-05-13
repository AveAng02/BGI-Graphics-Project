

#include <graphics.h>
#include <primitives.h>


#define SPEED 5



void draw_rect(primitives::Rectangle rect)
{
	rectangle(rect.tL.x, rect.tL.y, rect.bR.x, rect.bR.y);
}

void move_rect(primitives::Rectangle rect, int x, int y)
{
	rectangle(rect.tL.x + x, rect.tL.y + y, rect.bR.x + x, rect.bR.y + y);
}


int main()
{
	/*
	while(true)
		take input

		if(time < time_window)
			update physics 
			Apply game logic
			update canvas
	*/

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

	draw_rect(rect1);

	// Main game loop
	while (true)
	{
		move_rect(rect1, x_pos, y_pos);

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




