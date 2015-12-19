#ifndef TEXT_HH_
#define TEXT_HH_

#include <string>
#include <string.h>
#include "Shape.hh"

class Text : public Shape
{
 private:
	int font_size;
	double angle;
	int scale_x;
	int scale_y;
	
 public:
	void text_write(int x, int y, int s, float ra, char c[100]) 
	{
		font_size=s;
		char str[100];
		strcpy(str,c);

		file_open();
		file << "/Times-Roman findfont \n";
		file << s << " scalefont \n";
		file << "setfont \n";
		file << ra << " rotate \n";
		file << "2 1 scale \n";
		file_close();

		move_to(x,y);

		file_open();
		file << "( " ;
		for(int i=0;str[i]!='\0';i++)
		{
			file << str[i];
		} 
		
		file << " ) true charpath \n";
		file << "gsave \n";
		file << "stroke \n";
		file << "grestore \n";
		file_close(); 
 
	}
	
	void text_fill(int x, int y, int s, float ra, char c[100])
	{	
		text_write(x,y,s,ra,c);
		file_open();
		file << " fill \n";
		file_close();
	}
	
};

#endif
