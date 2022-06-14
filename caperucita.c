#include <graphics.h>
#include <conio.h>
#include <dos.h>

caperucita[24]={
    57,382,
    51,382,
    51,352,
    24,352,
    63,291,
    101,352,
    73,352,
    73,379,
    70,379,
    73,379,
    73,352,
    51,352
};

casa[22]={
    489,0,
    422,85,
    424,105,
    508,0,
    571,0,
    487,103,
    640,80,
    640,470,
    486,390,
    487,103,
    424,105
};

puerta[22]={
    524,410,
    524,213,
    534,198,
    547,187,
    560,181,
    570,182,
    584,190,
    593,200,
    603,215,
    609,231,
    608,455
};


void fondo(void);
void casita(void);



void main(){

	int modo, driver = DETECT;
    int x;

    initgraph(&driver, &modo, "");

    fondo();
    setcolor(DARKGRAY);
    line(0,350,640,350);
    while(kbhit()==0){
        setcolor(DARKGRAY);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(30,310,DARKGRAY);
    
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(100+x,20,150+x,40);
        rectangle(10+x,120,60+x,140);
        rectangle(200+x,80,250+x,100);

        floodfill(110+x,25,DARKGRAY);
        floodfill(15+x,125,DARKGRAY);
        floodfill(210+x,85,DARKGRAY);

        setcolor(WHITE);
        circle(0,0,70);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(0,0,WHITE);

        if(x<640){
            x+=10;
        }else{
            x=10;
        
        }
        casita();
        delay(300);


        
    }

}

void fondo(){
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    bar(0,0,640,480);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    bar(0,350,640,480);
}

void casita(){
    
    setcolor(DARKGRAY);
    drawpoly(11,casa);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
        
    drawpoly(11,puerta);
    setcolor(WHITE);
}