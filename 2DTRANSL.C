// 2d translation

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm;

    int i;

    int x2, y2, x1, y1, x, y;

    printf("Enter the 2 line end points: ");
    printf("x1,y1,x2,y2\n");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    initgraph(&gd, &gm, "c:\\tc\\bgi");

    line(x1, y1, x2, y2);

    printf("Enter translation co-ordinates ");
    printf("x,y ");
    scanf("%d%d", &x, &y);

    x1 = x1 + x;
    y1 = y1 + y;
    x2 = x2 + x;
    y2 = y2 + y;

    printf("Line after translation");
    setcolor(RED);
    line(x1, y1, x2, y2);

    getch();
    closegraph();
}
