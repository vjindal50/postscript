#ifndef SHAPE_HH_
#define SHAPE_HH_

class Shape
{
 private:
	int x_axis;
	int y_axis;
 public:
	void move_to(int x, int y) : x_axis(x), y_axis(y) {}
	void save_to_file();	
}

#endif
