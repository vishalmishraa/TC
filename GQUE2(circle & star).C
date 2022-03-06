
//cirlce and star


#include<stdio.h>
#include<conio.h>
#include<graphics.h>


int main()
{

int gd=DETECT, gm,i;
int x=350,y=180;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

setcolor(15);
circle(350,270,140);
sleep(3);

for(i=0;i<=90;i++)
{
	putpixel(x,y,GREEN);
	x=x+1;
	y=y+2;
	delay(20);
}

for(i=0;i<=70;i++)
{
	putpixel(x,y,YELLOW);
	x=x-3;
	y=y-2;
	delay(20);
}

for(i=0;i<=120;i++)
{
	putpixel(x,y,BLUE);
	x=x+2;
	delay(20);
}


for(i=0;i<=70;i++)
{
	putpixel(x,y,RED);
	x=x-3;
	y=y+2;
	delay(20);
}

for(i=0;i<=91;i++)
{
	putpixel(x,y,5);
	x=x+1;
	y=y-2;
	delay(20);
}
sleep(3);
setcolor(BLACK);
circle(350,270,140);

getch();
closegraph();
return 0;
}