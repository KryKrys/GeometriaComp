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

casa[26]={
    449,0,
    414,73,
    421,84,
    492,84,
    491,407,
    640,464,
    640,65,
    495,65,
    540,0,
    466,0,
    495,65,
    493,91,
    504,97,
    640,100
}

void fondo(void);



void main(){

    int modo, driver = DETECT;
    int x;

    initgraph(&driver, &modo, "");

    fondo();
    drawpoly(13,casa);
    while(kbhit()==0){
        setfillstyle(SOLID_FILL,WHITE);
        bar(100+x,20,150+x,40);
        bar(10+x,120,60+x,140);
        bar(200+x,80,250+x,100);
        
        circle(0,0,70);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(0,0,WHITE);

        if(x<640){
            x+=10;
        }else{
            x=10;
        
        }

        delay(300);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        bar(0,0,640,350);
        
    }

}

void fondo(){
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    bar(0,0,640,480);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    bar(0,350,640,480);
}