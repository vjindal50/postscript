#ifndef POLYLINE_HH_
#define POLYLINE_HH_

#include "Shape.hh"

class Polyline : public Shape
{
 private:
	int next_x;
	int next_y;
	
 public:
	
	void lineto(int nx, int ny)  
	{
		next_x=nx;
		next_y=ny;
		file_open();
		file << next_x << ' ' << next_y << " lineto \n";
		file_close();
	}
	void line_draw(int nx, int ny)
	{
		lineto(nx,ny);
		file_open();
		file << "stroke \n";
		file_close();
	}
	
	void drawline(int nx, int ny)
	{
		lineto(nx,ny);
		file_open();
		file << "stroke \n";
		file_close();
	}	
};

#endif
