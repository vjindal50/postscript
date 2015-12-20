
#include "Shape.hh"
#include "Polyline.hh"
#include "Rectangle.hh"
#include "Arc.hh"
#include "Circle.hh"
#include "Ellipse.hh"
#include "Text.hh"

#include <stdio.h>
#include <stdlib.h>
#include <string>

void refresh()
{
	ofstream file;
	file.open("PostScript.ps");
	file.close();
}

void refresh_scr()
{
	//clrscr();
	cout<< "Postscript transformations to choose from : \n";
	cout<< "\t1.  Polyline \n";
	cout<< "\t2.  Rectangle \n";
	cout<< "\t3.  Text \n";
	cout<< "\t4.  Arc \n";
	cout<< "\t5.  Circle \n";
	cout<< "\t6.  Ellipse \n";
	cout<< "\t7.  Segment \n";
	cout<< "\t8.  Erase \n";
	cout<< "\t9. Set Border \n";
	cout<< "\t10. Set color (r,g,b) \n";
	cout<< "\t11. Exit \n\n"; 
	cout<< "\t\tSelect the Shape you want to draw : ";
}

int main()
{
	//clrscr();
	refresh();
	
	int choice=0;
	
	while(1)
	{
		int x=0,y=0;

		refresh_scr();
		cin>>choice;
		if(choice==1)
		{			
			Polyline l;
			
			cout<<"\n Enter the Mandatory Parameters for Line : \n";
			
			cout<<"\t Start Point : \n";
			cout<<"\t\t x-axis : ";
			cin>>x;
			cout<<"\t\t y-axis : ";
			cin>>y;
			l.move_to(x,y);

			cout<<"\t End Point : \n";
			cout<<"\t\t x-axis : ";
			cin>>x;
			cout<<"\t\t y-axis : ";
			cin>>y;
			l.line_draw(x,y);			
		}

		else if(choice==2)
		{
			int h=0,w=0;
			char ch='n';
			Rectangle r;
			cout<<"\n Enter the Mandatory Parameters for Rectangle : \n";
			
			cout<<"\t Start Point : \n";
			cout<<"\t\t x-axis : ";
			cin>>x;
			cout<<"\t\t y-axis : ";
			cin>>y;
			r.move_to(x,y);
			
			cout<<"\n Enter width : ";
			cin>>w;
			cout<<" Enter height : ";
			cin>>h;

			while(1)
			{
		
				cout<<"\n\t Do you want to fill the rectangle (y/n) ? : ";
				cin>>ch;
				if(ch=='y' || ch=='Y')
				{
					r.fill_rect(h,w);
					break;
				}
				else if(ch=='n' || ch=='N')
				{
					r.draw_rect(h,w);
					break;
				}
				else
				{
					cout<<"\t\tChoose correctly";
					continue;
				}			
			}
		}
		
		else if(choice==3)
		{
			int s=0,ra=0;
			char ch='n';
			char c[100];

			Text t;
			cout<<"\n Enter the Mandatory Parameters for Text : \n";
			
			cout<<"\t Start Point : \n";
			cout<<"\t\t x-axis : ";
			cin>>x;
			cout<<"\t\t y-axis : ";
			cin>>y;
			
			cout<<"\n Enter size : ";
			cin>>s;
			cout<<"\n Enter Text : ";
			cin>>c;

			while(1)
			{
		
				cout<<"\n\t Do you want to rotate the text (y/n) ? : ";
				cin>>ch;
				if(ch=='y' || ch=='Y')
				{
					cout<<"\t Rotation angle : ";
					cin>>ra;
					break;
				}
				else if(ch=='n' || ch=='N')
				{
					ra=0;
					break;
				}
				else
				{
					cout<<"\t\tChoose correctly";
					continue;
				}			
			}
			
			while(1)
			{
		
				cout<<"\n\t Do you want to fill text (y/n) ? : ";
				cin>>ch;
				if(ch=='y' || ch=='Y')
				{
					t.text_fill(x,y,s,ra,c);
					break;
				}
				else if(ch=='n' || ch=='N')
				{
					t.text_write(x,y,s,ra,c);
					break;
				}
				else
				{
					cout<<"\t\tChoose correctly";
					continue;
				}			
			}
		}
		
		else if(choice==4)
		{
			float sa=0,ea=0,r;
			char ch='n';
			Arc a;
			cout<<"\n Enter the Mandatory Parameters for Arc : \n";
			
			cout<<"\t Start Point : \n";
			cout<<"\t\t x-axis : ";
			cin>>x;
			cout<<"\t\t y-axis : ";
			cin>>y;
			a.move_to(x,y);
			
			cout<<"\t Enter start angle : ";
			cin>>sa;
			cout<<"\t Enter end angle : ";
			cin>>ea;
			cout<<"\t Enter radius : ";
			cin>>r;
			
			a.arc_draw(sa,ea,r);	
		}

		else if(choice==5)
		{
			float r;
			char ch='n';
			Circle c;
			cout<<"\n Enter the Mandatory Parameters for Circle : \n";
			
			cout<<"\t Start Point : \n";
			cout<<"\t\t x-axis : ";
			cin>>x;
			cout<<"\t\t y-axis : ";
			cin>>y;
			c.move_to(x,y);
			
			cout<<"\t Enter radius : ";
			cin>>r;
			
			while(1)
			{
		
				cout<<"\n\t Do you want to fill the circle (y/n) ? : ";
				cin>>ch;
				if(ch=='y' || ch=='Y')
				{
					c.circle_fill(r);
					break;
				}
				else if(ch=='n' || ch=='N')
				{
					c.circle_draw(r);
					break;
				}
				else
				{
					cout<<"\t\tChoose correctly";
					continue;
				}			
			}
				
		}

		else if(choice==6)
		{
			int sx=0,sy=0;
			float r;
			char ch='n';
			Ellipse e;
			cout<<"\n Enter the Mandatory Parameters for Ellipse : \n";
			
			cout<<"\t Start Point : \n";
			cout<<"\t\t x-axis : ";
			cin>>x;
			cout<<"\t\t y-axis : ";
			cin>>y;
			e.move_to(x,y);
			
			cout<<"\t Enter scaling factor \n";
			cout<<"\t\t x-axis : ";
			cin>>sx;
			cout<<"\t\t y-axis : ";
			cin>>sy;
			cout<<"\t Enter radius : ";
			cin>>r;
			
			while(1)
			{
		
				cout<<"\n\t Do you want to fill the ellipse (y/n) ? : ";
				cin>>ch;
				if(ch=='y' || ch=='Y')
				{
					e.fill_ellipse(sx,sy,r);
					break;
				}
				else if(ch=='n' || ch=='N')
				{
					e.draw_ellipse(sx,sy,r);
					break;
				}
				else
				{
					cout<<"\t\tChoose correctly";
					continue;
				}			
			}
				
		}

		else if(choice==7)
		{
			float sa=0,ea=0,r;
			char ch='n';
			Arc s;
			cout<<"\n Enter the Mandatory Parameters for Segment : \n";
			
			cout<<"\t Start Point : \n";
			cout<<"\t\t x-axis : ";
			cin>>x;
			cout<<"\t\t y-axis : ";
			cin>>y;
			s.move_to(x,y);
			
			cout<<"\t Enter start angle : ";
			cin>>sa;
			cout<<"\t Enter end angle : ";
			cin>>ea;
			cout<<"\t Enter radius : ";
			cin>>r;
			
			//.arc_draw(sa,ea,r);	

			while(1)
			{
		
				cout<<"\n\t Do you want to fill the segment (y/n) ? : ";
				cin>>ch;
				if(ch=='y' || ch=='Y')
				{
					s.fill_segment(sa,ea,r);
					break;
				}
				else if(ch=='n' || ch=='N')
				{
					s.draw_segment(sa,ea,r);
					break;
				}
				else
				{
					cout<<"\t\tChoose correctly";
					continue;
				}			
			}
				
		}

		else if(choice==8)
		{
			Shape s;
			s.erase();
		}

		else if(choice==9)
		{
			float br=1;
			Shape s;
			cout<<"\n Enter Line width : ";
			cin>>br;
			s.border(br);
		}

		else if(choice==10)
		{
			float r=0,g=0,b=0;

			Shape s;
			cout<<"\n Enter shades : \n";
			cout<<"\t\t Red : ";
			cin>>r;
			cout<<"\t\t Green : ";
			cin>>g;
			cout<<"\t\t Blue : ";
			cin>>b;
			s.setcolor(r,g,b);		
		}
		else if(choice == 11)
		{
			exit(0);
		}
		else
		{
			cout<<"\n\t Invalid Choice..... Enter again.... \n";
			continue;
		}

	}

	
}
