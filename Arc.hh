#ifndef ARC_HH_

#define ARC_HH_



#include "Shape.hh"



class Arc : public Shape 

{
 
 private:

	float radius;

	float start_angle;

	float end_angle;
 

public:
	
	void arc_draw(float sa, float ea, float r)

	{
		
		
		int x=getx();

		int y=gety();


		start_angle=sa;

		end_angle=ea;
	
		radius=r;

 
		file_open();

		file << "newpath \n";

		file << x << ' ' << y << ' ' << radius << ' ' << start_angle << ' ' << end_angle << " arc \n";

		file << "gsave \n";

		file << "stroke \n";

		file_close();

	}
	

	void draw_segment(float sa, float ea, float r)

	{
		
		arc_draw(sa,ea,r);

		file_open();

		file << "grestore \n";

		file << "closepath \n";

		file << "gsave \n";

		file << "stroke \n";

		file << "grestore \n";

		file_close();

	}
	

	void fill_segment(float sa, float ea, float r)
	
	{
		
		draw_segment(sa,ea,r);

		file_open();

		file << "fill \n";

		file_close();

	}
	

};



#endif
