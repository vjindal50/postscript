#include <iostream>
#include <fstream>
using namespace std;

class Postscript {
private:
    ofstream file;
public:
    Postscript(const char filename[]) : file(filename) {
    }
    void circle(double x1, double y1, double r, double q1, double q2) // construct a circle
    {
        file << x1 << ' ' << y1 <<" " <<  r <<" " <<" "<< q1 <<" " << q2 <<" arc closepath\n"  ;
    }
     void fillcircle(double x1, double y1, double r, double q1, double q2)
    {
       file << x1 << ' ' << y1 <<" " <<  r <<" " <<" "<< q1 <<" " << q2 <<" arc closepath\n"  ;
    }
    void setColor(double x, double y, double z) 
    {
        file  << x << ' ' << y << ' ' << z <<' '<< " setrgbcolor\n"<< "fill\n"  ;
    }

   
    // complete!
};


int main() 
{

    Postscript p("circle.ps");
    p.circle(40,50,30,0,360);
    p.setColor(1,0,0); 
    p.fillcircle(400,500,30,0,360);
}