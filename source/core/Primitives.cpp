
#include "Primitives.h"

// Add functions to complete rectangle 


namespace Game
{
	void calculate_top_left(Rectangle& p1)
	{
		p1.tL.x = p1.center.x - (p1.height / 2);
		p1.tL.y = p1.center.y - (p1.width / 2);
	}

	void calculate_bottom_right(Rectangle& p1)
	{
		p1.bR.x = p1.center.x - (p1.height / 2);
		p1.bR.y = p1.center.y - (p1.width / 2);
	}

	void calculate_centre(Rectangle& p1)
	{
		p1.center.x = (p1.bR.x + p1.tL.x) / 2;
		p1.center.y = (p1.bR.y + p1.tL.y) / 2;
	}
}

