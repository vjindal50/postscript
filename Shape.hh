#ifndef SHAPE_HH_
#define SHAPE_HH_

#include<iostream>
#include<fstream>

using namespace std;

class Shape
{

 private:
	int x_axis;
	int y_axis;
	//int colr,colg,colb;

 public:
	ofstream file;
	float color[2][3];

	void file_open()
	{		
		file.open("PostScript.ps", ios::out | ios::app);
	}
	void file_close()
	{
		file.close();
	}

	void move_to(int x, int y)  
	{
		x_axis=x;
		y_axis=y;
		file_open();
		file <<	x_axis << ' ' << y_axis << " moveto \n";
		file_close(); 	
	}

	void clearscreen()
	{
		file_open();
		file << "erasepage \n";
		file_close(); 
	}

	void setcolor(float r, float g, float b)
	{
		file_open();
		file << r << ' ' << g << ' ' << b << " setrgbcolor \n";
		file_close();		
	}


	void border(float b)
	{
		file_open();
		file << b << " setlinewidth \n";
		file_close();		
	}

	int getx()
	{
		return x_axis;
	}
		
	int gety()
	{
		return y_axis;
	}

	void erase()
	{
		file_open();
		file << "erasepage \n";
		file_close();
	}

};

#endif
