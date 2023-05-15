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

}

#endif