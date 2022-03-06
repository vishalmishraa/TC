//draw a geometric fig having coordinates a(0,0) b(500,0) c(500,500) d(0,500)
// translate this image along x and y direction with 7 units

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void draw();
void translate();

int gd=DETECT,gm;
int n,x[10],y[10],i;

int main()
{
      printf("enter no. of sides: ");
      scanf("%d",&n);

      printf("enter co-ordinates:\n");
      for(i=0;i<n;i++)
      {
      scanf("%d%d",&x[i],&y[i]);
      }

      initgraph(&gd,&gm,"c:\\turboc3\\bgi");
      cleardevice();

      draw();

      translate();

      setcolor(YELLOW);
      draw();


getch();
closegraph();
return 0;
}

void draw()
{
	for(i=0;i<n;i++)
	line(x[i],y[i],x[(i+1)%n],y[(i+1)%n]);
}

void translate()
{
	for(i=0;i<n;i++)
	{
	  x[i]=x[i]+7;
	  y[i]=y[i]+7;
	}
}