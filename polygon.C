/* write a program in c graphics for drawing the following images
// horizontal line
// vertical line
// a square
// a triangle
// a rectangle
// pentagon
// hexagon
// a square with diagonal
// a triagle with perpendicular */

//draw a geometric fig having coordinates a(0,0) b(500,0) c(500,500) d(0,500)
// translate this image along x and y direction with 7 units

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

void horizontal_line();
void vertical_line();
void square();
void rectangle_fig();
void triangle();
void pentagon();
void hexagon();
void sqdiagonal();
void triper();

int main()
{
int gd=DETECT, gm,ch;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");


printf("\n1.horizontal line");
printf("\n2.vertical line");
printf("\n3.square");
printf("\n4.triangle");
printf("\n5.rectangle");
printf("\n6.pentagon");
printf("\n7.hexagon");
printf("\n8.square with diagonal");
printf("\n9.triangle with perpendicular");

printf("\n");
printf("\nEnter your choice: ");
scanf("%d",&ch);

switch(ch)
{
case 1: horizontal_line();
break;

case 2: vertical_line();
break;

case 3: square();
break;

case 4: triangle();
break;

case 5: rectangle_fig();
break;

case 6: pentagon();
break;

case 7: hexagon();
break;

case 8: sqdiagonal();
break;

case 9: triper();
break;

default: printf("wrong choice");
}




getch();

return 0;
}

void horizontal_line()
{
	line(300,120,500,120);
}
void vertical_line()
{
	line(400,300,400,100);
}
void square()
{
//square
line(400,100,500,100);
line(400,200,500,200);
line(400,200,400,100);
line(500,200,500,100);
}

void rectangle_fig()
{
//rectangle

line(350,100,550,100);
line(350,200,550,200);
line(350,200,350,100);
line(550,200,550,100);
}

void triangle()
{
	line(300,270,600,270);
	line(300,270,450,100);
	line(600,270,450,100);
}

void pentagon()
{

line(400,200,550,200);
line(400,200,400,100);
line(550,200,550,100);
line(400,100,475,30);
line(550,100,475,30);
}

void hexagon()
{
	line(400,100,500,150);
	line(500,150,500,250);
	line(500,250,400,300);
	line(300,250,400,300);
	line(400,100,300,150);
	line(300,250,300,150);

}

void sqdiagonal()
{
line(400,100,500,100);
line(400,200,500,200);
line(400,200,400,100);
line(500,200,500,100);
line(400,100,500,200);
line(500,100,400,200);
}

void triper()
{
	line(300,270,600,270);
	line(300,270,450,100);
	line(600,270,450,100);
	line(450,270,450,100);
}