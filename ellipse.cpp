#include <iostream>
#include <fstream>
using namespace std;

class Postscript {
private:
    ofstream file;
public:
    Postscript(const char filename[]) : file(filename) {
    }
    void lib()
    {
    	file <<"/inch { 72 mul } def\n";
    }
    void scale(double x, double y)
    {
    	file << x<<" "<< y << " scale\n";
    }
    void ellipse(double x1, double y1, double r, double q1, double q2) // construct a ellipse
    {
        file << x1 << ' ' << y1 <<" " <<  r <<" inch" <<" "<< q1 <<" " << q2 <<" arc\n"  ;
    }
     void fillellipse(double x1, double y1, double r, double q1, double q2)
    {
       file << x1 << ' ' << y1 <<" " <<  r <<" " <<" inch "<< q1 <<" " << q2 <<" arc\n"  ;
    }
    void setColor(double x, double y, double z) 
    {
        file  << x << ' ' << y << ' ' << z <<' '<< " setrgbcolor\n"<< "fill\n"  ;
    }

   
    // complete!
};


int main() 
{

    Postscript p("ellipse.ps");
    p.lib();
    p.scale(1, 0.3);
    p.ellipse(400,500,1,0,360);
    p.setColor(1,0,0); 
    p.fillellipse(400,500,30,0,360);
}