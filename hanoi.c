#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <button.h>

void princip(void);

void main(){

    int modo, driver = DETECT;

   

    initgraph(&driver, &modo, "");

    cleardevice();
    
    princip();

    getch();

}

void princip(){
    button jugar, inst, salir;

    setfillstyle(SOLID_FILL,YELLOW);
    bar(0,0,640,480);

    setfillstyle(SOLID_FILL,BLACK);
    bar(20,20,620,460);

    settextstyle(0,0,4);
    outtextxy(170,70,"Torres de ");
    outtextxy(240,130,"Hanoi");

    newButton(&jugar, 250,320, "jugar",RED,BLACK,140,30);
    newButton(&inst, 220,350, "instrucciones",CYAN,BLACK,210,30);
    newButton(&salir, 190,380, "salir",GREEN,BLACK,260,30);

    setfillstyle(SOLID_FILL,BROWN);
    bar(160,410,480,430);
    bar(310,269,330,319);
}