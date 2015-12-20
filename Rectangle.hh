#ifndef RECTANGLE_HH_
#define RECTANGLE_HH_

#include "Polyline.hh"

class Rectangle : public Polyline
{
 private:
	float height;
	float width;

 public:
	void draw_rect(float h, float w)
	{
		height=h;
		width=w;
		
		int x=getx();
		int y=gety();
		
		lineto(x+w,y);
		lineto(x+w,y+h);
		lineto(x,y+h);

		file_open();
		file << "closepath \n";
		file << "gsave \n";
		file << "stroke \n";
		file << "grestore ";
		file_close(); 
	}

	void fill_rect(float h, float w) //, float r, float g, float b) 
	{
		draw_rect(h,w);
		//setcolor(r,g,b);
		file_open();		
		//file << color[1][0] << ' ' << color[1][1] << ' ' << color[1][2] <<" setrgbcolor \n"; 
		file << "fill \n";
		file_close();
	}	
};

#endif
