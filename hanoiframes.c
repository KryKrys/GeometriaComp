#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include<stdlib.h>
#include<BMP256.h>
#include<256IMAGE.h>
 
/*Las funciones p# son para mostrar los diferentes frames, en cada una de ellas se dibujara un movimiento*/
void p7()
{
  
}
 

void p6()
{
   
}
 

void p5()
{
        
}
 

void p4()
{
   
}
 

void p3()
{
   
}
 

void p2()
{

}
 

void p1()
{
   
}
 

void start()
{
    
    cleardevice();
    settextstyle(3, 0, 1);
    outtextxy(270, 116, "Punto de partida");
 
    
    setfillstyle(SOLID_FILL, RED);
    rectangle(94, 346, 204, 373);
    floodfill(98, 349, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(111, 314, 186, 342);
    floodfill(113, 320, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(135, 288, 167, 310);
    floodfill(137, 290, 15);
 
    
    outline();
}
 

int outline()
{
    
    line(28, 376, 602, 376);
 
    
    line(149, 191, 149, 376);
 
    
    line(321, 186, 321, 376);
 

    line(496, 185, 496, 376);
 
    
    settextstyle(3, 0, 1);
    outtextxy(138, 390, "(1)");
    outtextxy(313, 390, "(2)");
    outtextxy(488, 390, "(3)");

    return 0;
}

void main()
{
    int modo, driver = DETECT;
    initgraph(&driver, &modo, "");
    cleardevice();
   
    start();
 
   
    p1();
 
   
    p2();
 
   
    p3();
 
   
    p4();
 
  
    p5();
 
   
    p6();
 
    
    p7();
 
    
    getch();
 
   
    closegraph();
}