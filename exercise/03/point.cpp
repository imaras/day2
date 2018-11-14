#include "point.h"

point::point()
{
	x = 0;
	y = 0;
}

point::point(int x, int y)
{
	this->x = x;
	this->y = y;
}

bool point::operator==(const point& other) const
{
	return x == other.x && y == other.y;
}

bool point::operator!=(const point& other) const
{
	return !(*this == other);
}

bool point::operator<(const point& other) const
{
	return x < other.x || y < other.y;
}