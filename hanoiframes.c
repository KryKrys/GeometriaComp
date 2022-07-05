#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include<stdlib.h>


#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77
#define punto 46
#define coma 44
#define comi 39
#define ESC 27
#define k 107
#define l 108

char tecla;
char sel;

void outline(void);
void start (void);
void p1(void);
void p2(void);
void p3(void);
void p4(void);
void p5(void);
void p6(void);
void p7(void);
void l1(void);
void l2(void);
void l3(void);
void l4(void);
void l5(void);
void l6(void);
void l7(void);


 
/*Las funciones p# son para mostrar los diferentes frames, en cada una de ellas se dibujara un movimiento*/

void l7(){
    
    cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(264,345, 375, 373);
    floodfill(282, 365, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(111, 346, 187, 373);
    floodfill(142, 359, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(133, 319, 164, 342);
    floodfill(140, 331, 15);
    outtextxy(165, 116, "NO TE QUEDAN MOVIMIENTOS, PERDISTE");
    outline();
    delay(1000);

}

void l6(){

    cleardevice();
   setfillstyle(SOLID_FILL, RED);
    rectangle(264,345, 375, 373);
    floodfill(282, 365, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(111, 346, 187, 373);
    floodfill(142, 359, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(305, 321, 338, 340);
    floodfill(313, 330, 15);
    outline();
    delay(1000);

}

void l5 (){
    cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(264,345, 375, 373);
    floodfill(282, 365, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(458, 347, 533, 373);
    floodfill(474, 363, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(305, 321, 338, 340);
    floodfill(313, 330, 15);
    outline();
    delay(1000);

}

void l4(){
    cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(264,345, 375, 373);
    floodfill(282, 365, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(458, 347, 533, 373);
    floodfill(474, 363, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(478, 320, 511, 342);
    floodfill(489, 334, 15);
    outline();
    delay(1000);

}


void l3(){
    cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(94, 346, 204, 373);
    floodfill(98, 349, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(458, 347, 533, 373);
    floodfill(474, 363, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(478, 320, 511, 342);
    floodfill(489, 334, 15);
    outline();
    delay(1000);


}


void l2(){
    cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(94, 346, 204, 373);
    floodfill(98, 349, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(458, 347, 533, 373);
    floodfill(474, 363, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(304, 353, 336, 373);
    floodfill(317, 365, 15);
    outline();
    delay(1000);

}

void l1(){
    cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(94, 346, 204, 373);
    floodfill(98, 349, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(111, 314, 186, 342);
    floodfill(113, 320, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(304, 353, 336, 373);
    floodfill(317, 365, 15);
    outline();
    delay(1000);

}


void p7()
{
     cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(440, 346, 550, 373);
    floodfill(448, 349, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(460, 315, 535, 344);
    /*ancho 30 largo 75*/
    floodfill(497, 318, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(480, 288, 510, 310);
    floodfill(487, 290, 15);
 
    outtextxy(270, 116, "GANASTE");
    outline();
    delay(1000);
    
  
}
 

void p6()
{
      cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(440, 346, 550, 373);
    floodfill(448, 349, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(460, 315, 535, 344);
    /*ancho 30 largo 75*/
    floodfill(497, 318, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(135, 356, 165, 376);
    floodfill(146, 357, 15);
 
    
    outline();
    delay(1000);
   
}
 

void p5()
{
    cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(440, 346, 550, 373);
    floodfill(448, 349, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(290, 345, 350, 375);
    /*ancho 30 largo 75*/
    floodfill(297, 360, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(135, 356, 165, 376);
    floodfill(146, 357, 15);
 
    
    outline();
    delay(1000);   
        
}
 

void p4()
{
    cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(440, 346, 550, 373);
    floodfill(448, 349, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(290, 345, 350, 375);
    /*ancho 30 largo 75*/
    floodfill(297, 360, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(305, 326, 335, 345);
    floodfill(316, 337, 15);
 
    
    outline(); 
    delay(1000);
}
   
 
void p3()
{
    cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(94, 346, 204, 373);
    floodfill(98, 349, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(290, 345, 350, 375);
    /*ancho 30 largo 75*/
    floodfill(297, 360, 15);
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(305, 326, 335, 345);
    floodfill(316, 337, 15);
 
    
 
    outline();
    delay(1000);

}
 

void p2()
{

    cleardevice();
    setfillstyle(SOLID_FILL, RED);
    rectangle(94, 346, 204, 373);
    floodfill(98, 349, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(290, 345, 350, 375);
    /*ancho 30 largo 75*/
    floodfill(297, 360, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(480, 356, 510, 376);
    floodfill(486, 357, 15);
 
    
    outline();
    delay(1000);

}
 

void p1()
{
    cleardevice();
    
    
    setfillstyle(SOLID_FILL, RED);
    rectangle(94, 346, 204, 373);
    floodfill(98, 349, 15);
 
   
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(111, 314, 186, 342);
    floodfill(113, 320, 15);
 
   
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(480, 356, 510, 376);
    floodfill(486, 357, 15);
 
    
    outline();
    delay(1000);
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
 

void outline()
{
    
    line(28, 376, 602, 376);
    line(149, 191, 149, 376);
    line(321, 186, 321, 376);
    line(496, 185, 496, 376);
 
    
    settextstyle(3, 0, 1);
    outtextxy(138, 390, "(1)");
    outtextxy(313, 390, "(2)");
    outtextxy(488, 390, "(3)");

}

void main()
{
    int modo, driver = DETECT;
    initgraph(&driver, &modo, "");
    cleardevice();

    start();

    do{
        sel = getch();
    }while(sel!=k && sel!=l);

    switch(sel){
        case k: 
            do{
            
                tecla = getch();
                switch(tecla){
                    
                    case arriba:
                        p1();
                    break;

                    case abajo:
                        p2();
                    break;
                    
                    case izquierda:
                        p3();
                    break;
                    
                    case derecha:
                        p4();
                    break;
                        
                    case punto:
                        p5();
                    break;

                    case coma:
                        p6();
                    break;
                    
                    case comi:
                        p7();
                    break;
                    
                }
                        
            }while(tecla!=ESC);

        break;

        case l:
            do{

                tecla = getch();
                switch(tecla){
                    
                    case arriba:
                        l1();
                    break;

                    case abajo:
                        l2();
                    break;
                    
                    case izquierda:
                        l3();
                    break;
                    
                    case derecha:
                        l4();
                    break;
                        
                    case punto:
                        l5();
                    break;

                    case coma:
                        l6();
                    break;
                    
                    case comi:
                        l7();
                    break;
                    
                }
                        
            }while(tecla!=ESC);
        break;
    }
 
   
    closegraph();
}