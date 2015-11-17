#ifndef CIRCLE_HH_
#define CIRCLE_HH_

#include "Shape.hh"

class Circle
{
 private:
	double radius;
	double start_angle;
	double end_angle;
	int color;
 public:
	void arc(double sa, double ea, double r) : start_angle(sa), end_angle(ea), radius(r) {}
	void draw(double r) : radius(r) {}
	void fill(int c) : color(c) {}
		
}

#endif
