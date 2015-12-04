#ifndef RECTANGLE_HH_
#define RECTANGLE_HH_

#include "Shape.hh"

class Rectangle
{
 private:
	double height;
	double width;
	int color;
 public:
	void draw(int h, int w) : height(h), width(w) {}
	void fill(int c) : color(c) {}
	void create_border(int thickness);	
};

#endif
