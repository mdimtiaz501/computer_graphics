#include <stdio.h>
#include <stdlib.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gm , area, temp1, temp2, left= 25, top = 40;
    initgraph(&gd,&gm,"");

    setcolor(YELLOW);
    circle(550, 100, 50);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(551,101,YELLOW);

    setcolor(GREEN);
    line(300,300,220,380);
    line(300,300,380,380);
    line(220,380,380,380);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(301,353,GREEN);


    setcolor(BLUE);
    rectangle(240,380,360,480);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(241,381,BLUE);

    setcolor(WHITE);
    rectangle(270,410,330,480);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(271,411,WHITE);\

    setcolor(RED);
    rectangle(340,381,359,401);
    setfillstyle(SOLID_FILL,RED);
    floodfill(341,382,RED);

    setcolor(GREEN);
    line(300,410,300,480);

    getch();
    closegraph();
    return 0;
}
