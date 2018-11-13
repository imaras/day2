#pragma once

class color
{
private:
	double r;
	double g;
	double b;
public:
	color();
	color(double red, double green, double blue);
	double get_red() const;
	double get_green() const;
	double get_blue() const;
	void set_red(double red);
	void set_green(double green);
	void set_blue(double blue);
	COLORREF get_color_ref() const;
	double get_luminance() const;
	bool operator==(const color& other) const;
};
