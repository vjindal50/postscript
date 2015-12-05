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
	void lib()
	{
		file << "/Times-Roman findfont\n";
	}

	void text (double m , double x, double y, string t )
	{
		file << m<<" scalefont \n" << "setfont\n";
		file << x << ' ' << y << " moveto\n";
		file << t << " show\n"; 
	}
};
int main()
{
	int x,y, size;
	cout<<"enter the center cordinates ";
	cin>> x >> y;
	cout<<"\nenter the font size ";
	cin>> size;
	
	Postscript p("textbox.ps");
	p.lib();
 	p.text(size, x+2, y+2, "(ABCD)");    
	p.rect(x, y, 100, size+4); 
	
}