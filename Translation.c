#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
	int gd=DETECT,gm;
	float a1,a2,b1,b2,c1,c2,d1,d2;
    initgraph(&gd,&gm,"c:/turboc3/bgi");
    a1=100;
    a2=100;
    b1=300;
    b2=100;
    c1=300;
    c2=300;
    d1=100;
    d2=300;
    line(a1,a2,b1,b2);
    line(b1,b2,c1,c2);
    line(c1,c2,d1,d2);
    line(d1,d2,a1,a2);
a1=a1+7;
a2=a2+7;
b1=b1+7;
b2=b2+7;
c1=c1+7;
c2=c2+7;
d1=d1+7;
d2=d2+7;
line(a1,a2,b1,b2);
line(b1,b2,c1,c2);
line(c1,c2,d1,d2);
line(d1,d2,a1,a2);

	getch();
	closegraph();


}