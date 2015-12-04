#include <iostream>
#include <fstream>
using namespace std;

class Postscript {
private:
	ofstream file;
public:
	Postscript(const char filename[]) : file(filename) {
	}
	void rect(double x1, double y1, double x2, double y2)
	{
		file << x1 << ' ' << y1 << " moveto\n" << x1 + x2 << " " << y1 << " lineto\n" << x1 + x2 << " " << y1 + y2 << " lineto\n" << x1 << " " << y1 + y2 << " lineto\n" << "closepath\n" << "stroke\n";
	}
	void fillRect(double x, double y, double w, double h)
	{
		file << x << ' ' << y << " moveto\n" << x + w << " " << y << " lineto\n" << x + w << " " << y + h << " lineto\n" << x << " " << y + h << " lineto\n" << "fill\n";
	}
	void setColor(double x, double y, double z)
	{
		file << x << ' ' << y << ' ' << z << ' ' << " setrgbcolor\n";
	}
};

int main()
{

	Postscript p("rect.ps");
	p.setColor(1, 0, 0); // 1 0 0  setrgbcolor
	p.fillRect(100, 100, 250, 100);  // 0 0 moveto 100 0 lineto 100 100 lineto 0 100 lineto fill
	p.setColor(1, 0, 0); // 1 0 0  setrgbcolor
						 //0 200 moveto 200 200 lineto 100 400 lineto fill
}