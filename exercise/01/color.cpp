#include "stdafx.h"
#include "color.h"

color::color()
{
	r = 0;
	g = 0;
	b = 0;
}

color::color(double red, double green, double blue)
{
	set_red(red);
	set_green(green);
	set_blue(blue);
}

double color::get_red() const
{
	return r;
}

double color::get_green() const
{
	return g;
}

double color::get_blue() const
{
	return b;
}

double clamp(double color_channel)
{
	return std::clamp(color_channel, 0.0, 1.0);
}

void color::set_red(double red)
{
	r = clamp(red);
}

void color::set_green(double green)
{
	g = clamp(green);
}

void color::set_blue(double blue)
{
	b = clamp(blue);
}

COLORREF color::get_color_ref() const
{
	return RGB(r * 255, g * 255, b * 255);
}

double color::get_luminance() const
{
	return 0.2126*r + 0.7152*g + 0.0722*b;
}

bool color::operator==(const color& other) const
{
	return r == other.r && g == other.g && b == other.b;
}