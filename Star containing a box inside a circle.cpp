#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TC\BGI");

    setcolor(WHITE);
    circle(350,200,80);
    setcolor(GREEN);
    rectangle(300,150,400,250);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(305,155,GREEN);

    line(290,280,350,350);
    line(410,280,350,350);

    line(290,280,210,280);
    line(210,280,260,200);

    line(260,200,210,120);
    line(210,120,290,120);

    line(290,120,350,50);
    line(350,50,410,120);

    line(410,120,490,120);
    line(440,200,490,120);

    line(410,280,490,280);
    line(490,280,440,200);

    getch();
}
