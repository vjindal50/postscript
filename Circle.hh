#ifndef CIRCLE_HH_
#define CIRCLE_HH_

#include "Arc.hh"

class Circle : public Arc 
{
 private:
	float radius;
	
 public:
	void circle_draw(float r) 
	{
		radius=r; 
		arc_draw(0.0,360.0,radius);
	}
	void circle_fill(float r) 
	{
		radius=r;
		fill_segment(0.0,360.0,radius);
	}
		
};

#endif
