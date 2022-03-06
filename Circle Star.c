 #include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
	int gd=DETECT,gm;
	int i;

	initgraph(&gd,&gm,"c:/turboc3/bgi");
	circle(300,250,150);
	
line(300,100,275,200);


line(300,100,325,200);

line(440,200,325,200);
line(160,200,275,200);

line(440,200,350,270);
line(160,200,250,270);
line(190,350,250,270);
line(410,350,350,270);
line(410,350,300,330);
line(190,350,300,330);
getch();
setcolor(0);
circle(300,250,150);
	getch();
	closegraph();


}