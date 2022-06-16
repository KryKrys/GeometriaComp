
#include <graphics.h>
#include <conio.h>
#include <dos.h>

caperucita[48]={
    210,358,
    198,398,
    210,398,
    181,439,
    206,439,
    206,459,
    206,439,
    219,439,
    219,458,
    219,439,
    240,439,
    210,398,
    223,398,
    222,395,
    224,394,
    226,391,
    227,388,
    226,382,
    225,379,
    223,376,
    220,374,
    215,373,
    223,398,
    210,358
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
void cap(int x);


void main(){

	int modo, driver = DETECT;
    int x=0;

    initgraph(&driver, &modo, "");

    fondo();
    while(kbhit()==0){

        setfillstyle(SOLID_FILL,LIGHTBLUE);
        bar(0,0,640,349);
        
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        floodfill(10,360,DARKGRAY);
    
        setfillstyle(SOLID_FILL,WHITE);
        bar(100+x,20,150+x,40);
        bar(10+x,120,60+x,140);
        bar(200+x,80,250+x,100);

        setcolor(WHITE);
        circle(0,0,70);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(0,0,WHITE);
        casita();

        setcolor(DARKGRAY);
        cap(x);

        if(x>640){
            x=10;
        }

        x+=10;

        delay(1000);


    }

}

void fondo(){
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    bar(0,0,640,480);
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(1,350,639,479);
    floodfill(10,360,DARKGRAY);
}

void casita(){
    
    setcolor(DARKGRAY);
    drawpoly(11,casa);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
        
    drawpoly(11,puerta);
    setcolor(WHITE);
}

void cap(int x){
    int i,aux;
    drawpoly(24,caperucita);
    
    for(i = 0 ; i < 48 ; i+=2 ){
    
        caperucita[i] = caperucita[i] + x;
    }

}