#include <graphics.h>
#include <stdio.h>

void main(){

    int modo, driver = DETECT;

    initgraph(&driver, &modo, "");

    cleardevice();

    setfillstyle(SOLID_FILL,YELLOW);
    bar(0,0,640,480);

    setfillstyle(SOLID_FILL,BLACK);
    bar(20,20,620,460);

    settextstyle(0,0,4);
    outtextxy(170,70,"Torres de ");
    outtextxy(240,130,"Hanoi");

    getch();

}