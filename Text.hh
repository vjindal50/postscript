#ifndef TEXT_HH_
#define TEXT_HH_

#include "Shape.hh"

class Text
{
 private:
	int font_height;
	double font_width;
	int font_color;
	int font_type;
	double angle;
	int trans_x;
	int trans_y;
	
 public:
	void write(int h, double w, int c, int t, char c[100]) : font_height(h), font_width(w), font_color(c), font_type(t) {}
	void rotate(double a) : angle(a) {}
	void translate(int tx, int ty) : trans_x(tx), trans_y(ty) {}	
};

#endif
