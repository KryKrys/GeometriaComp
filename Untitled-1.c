#include <graphics.h>
#include <stdio.h>
#include <mouse.h>
#include <dos.h>

#define MAX 15

void main(){

    int modo, driver = DETECT;
    int mposx, mposy;
    int boole, cont = 0;

    initgraph(&driver, &modo, "");

    setbkcolor(LIGHTBLUE);

    mver();

    while(cont < MAX){

        while(mclick()!=1){
		    mposx=mxpos(1);
		    mposy=mypos(1);

            delay(100);

            if(mclick()==1)
                cont++;

	    }
        
        mocultar();

        setcolor(RED);
        circle(mposx,mposy,2);
        setfillstyle(SOLID_FILL,RED);
        floodfill(mposx,mposy,RED);

        mver();
        
    }

    mocultar();
    getch();
}