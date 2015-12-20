#ifndef ELLIPSE_HH_

#define ELLIPSE_HH_



#include "Circle.hh"

//***This class inherits the Circle which inherits the Arc which in turn inherits the Shape class***//



class Ellipse : public Circle

{
 
 private:

	int scale_x;

	int scale_y;

	float radius;


 public:

	//***Draw_Ellipse draws an Ellipse by setting radius, X-axis Scale, Y-axis Scale from user;***//	
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


	//***Fill_Ellipse fills a drawn Ellipse by setting RGB- default color is Black***//
	void fill_ellipse(int sx, int sy, float r)

	{
	
		draw_ellipse(sx,sy,r);

		circle_fill(r);
	
	}

};



#endif
