#ifndef CIRCLE_HH_
#define CIRCLE_HH_

#include "Arc.hh"

//***This class inherits Arc which in turn inherits the Shape class***//
class Circle : public Arc 
{
 private:
	float radius;
	
 public:
	//***Circle_ draw function draws a circle by taking only Radius from the user while Start & End angle from Arc class- from user***//
	void circle_draw(float r) 
	{
		radius=r; 
		arc_draw(0.0,360.0,radius);
	}

	//***Circle_fill function fills a drawn circle by setting RGB color- default color is Black***//
	void circle_fill(float r) 
	{
		radius=r;
		fill_segment(0.0,360.0,radius);
	}
		
};

#endif
