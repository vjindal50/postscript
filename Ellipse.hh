#ifndef ELLIPSE_HH_
#define ELLIPSE_HH_

#include "Circle.hh" 

class Ellipse : public Circle
{
 private:
	int scale_x;
	int scale_y;
	float radius;
 public:
	void draw_ellipse(int sx, int sy, float r)
	{
		scale_x=sx;
		scale_y=sy;
		radius=r;

		file_open();
		file << sx << ' ' << sy <<" scale \n";
		file_close();
		circle_draw(r);
	}
	
	void fill_ellipse(int sx, int sy, float r)
	{
		draw_ellipse(sx,sy,r);
		circle_fill(r);
	}
};

#endif
