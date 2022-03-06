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
a1=a1*2;
b1=b1*2;
c1=c1*2;
d1=d1*2;
a2=a2*1.3;
b2=b2*1.3;
c2=c2*1.3;
d2=d2*1.3;
line(a1,a2,b1,b2);
line(b1,b2,c1,c2);
line(c1,c2,d1,d2);
line(d1,d2,a1,a2);