

//moving arrow

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI\\");



//vertical
	for( i=0;i<=42;i++)  {
	cleardevice();
	setcolor(WHITE);
	line(50,470-(10*i),50,430-(10*i));
	line(30,450-(10*i),50,430-(10*i));
	line(70,450-(10*i),50,430-(10*i));
	delay(100);
      }

//horizontal
	 for(i=0;i<=500;i=i+10)
	{
	cleardevice();
		setcolor(WHITE);
		line(10+i,50,50+i,50);
		line(40+i,30,50+i,50);
		line(40+i,70,50+i,50);
	delay(100);
	}

//diagonally
	for( i=0;i<=60;i++)
	{
		cleardevice();
		setcolor(WHITE);

		line(640-(10*i),20+(7*i),600-(10*i),50+(7*i));
		line(610-(10*i),25+(7*i),600-(10*i),50+(7*i));
		line(625-(10*i),50+(7*i),600-(10*i),50+(7*i));

		delay(100);
	}

	getch();
}