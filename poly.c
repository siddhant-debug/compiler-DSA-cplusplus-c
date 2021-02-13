#include <graphics.h>
#include <conio.h>


int main() 
{
	//initilizing graphic driver and 
	//graphic mode variable
	int graphicdriver=DETECT,graphicmode;

	//calling initgraph with parameters
	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

	//Printing message for user
	outtextxy(10, 10 + 10, "Program to draw polygon of different shapes in C graphics");

	//points of ploygon 1
	int p1[]={320,150,420,300,500,300,320,150};

	//points of ploygon
	int p2[]={320,150,420,300,250,300,320,150};

	//drawing polygon 1
	drawpoly(4, p1);

	//drawing polygon 2
	drawpoly(4, p2);

	getch();

	return 0;
}

