#include <iostream>
#include <fstream>
using namespace std;

class Postscript
{
 private:
	ofstream file;
 public:
	Postscript(const char filename[]) : file(filename) {}

	void lib()
	{
		file << "/Times-Roman findfont\n";
	}

	void text (double x, double y, string t )
	{
		file << "32 scalefont \n" << "setfont\n";
		file << x << ' ' << y << " moveto\n";
		file << t << " show\n"; 
	}
};
int main()
{
	Postscript p("text.ps");
	p.lib();
 	p.text(100, 200, "(ABCD)");    
}