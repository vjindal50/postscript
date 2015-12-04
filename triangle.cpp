#include <iostream>
#include <fstream>
using namespace std;

class Postscript {
private:
    ofstream file;
public:
    Postscript(const char filename[]) : file(filename) {
    }
    void triangle(double x1, double y1, double x2, double y2, double x3, double y3) // construct a triangle 
    {
        file << x1 << ' ' << y1 << " moveto\n" << x2 <<" "<< y2 <<" lineto\n"<< x3 <<" " << y3 <<" lineto\n" << "closepath\n"<< "stroke\n"   ;
    }
     void fillTriangle(double a1, double b1, double a2, double b2, double a3, double b3) 
    {
        file << a1 << ' ' << b1 << " moveto\n" << a2 <<" "<< b2 <<" lineto\n"<< a3 <<" " << b3 <<" lineto\n" << "fill\n" ;
    }
    void setColor(double x, double y, double z) 
    {
        file  << x << ' ' << y << ' ' << z <<' '<< " setrgbcolor\n"  ;
    }

   
    // complete!
};


int main() 
{

    Postscript p("triangle.ps");
 p.fillTriangle(0,200,  200,200, 100, 400);
    p.setColor(1,0,0); // 1 0 0  setrgbcolor
}