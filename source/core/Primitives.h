#pragma once

#ifndef PRIMITIVES__H_
#define PRIMITIVES__H_


#include <iostream>
#include <graphics.h>


namespace Game
{
	struct Point
	{
		float x;
		float y;

		Point() : x(0), y(0) {}
		Point(const float&x_, const float&y_) : x(x_), y(y_) {}
	};

	typedef struct
	{
		Point src;
		Point dst;
	} Line;

	typedef struct
	{
		Point center;
		int radius;
	} Circle;

	typedef struct
	{
		Point tL;
		Point bR;
		Point center; // mid point of the diagonal
		float width;
		float height;

	} Rectangle;

	inline Point midPoint(const Point &start, const Point &end)
	{
		return Point((start.x + end.x) / 2, (start.y + end.y) / 2);
	}

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

#endif