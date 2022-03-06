#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:/turboc3/bgi");
	line(250,150,350,150);

	getch();
	closegraph();
	
	
}