#ifndef POLYLINE_HH_
#define POLYLINE_HH_

#include "Shape.hh"

class Polyline
{
 private:
	int next_x;
	int next_y;
	
 public:
	void stroke(int nx, int ny) : next_x(nx), next_y(ny) {}	
};

#endif
