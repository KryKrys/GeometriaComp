#include <graphics.h>
#include <stdio.h>
#include <mouse.h>
#include <dos.h>
#include <conio.h>

#define MAX 15

struct punto {
int x;
int y;
};

/*punto pxnto(int a, int b);*/

void main(){

    int modo, driver = DETECT;
    int mposx, mposy;
    int cont = 0;
    struct punto p;
    struct punto punto[MAX];
    int maxX= 0, minX = 640;
    int maxY = 0, minY = 480;
    

    initgraph(&driver, &modo, "");

    setbkcolor(LIGHTBLUE);

    mver();


    while(cont < MAX){

        
        while(mclick()!=1){
		    mposx=mxpos(1);
		    mposy=mypos(1);

            delay(10);

            if(mclick()==1)
                cont++;
	    }

        p.x = mposx;
        p.y = mposy;

        if(p.x > maxX)
            maxX = p.x;
        else if (p.x < minX)
            minX = p.x;

        if(p.y > maxY)
            maxY = p.y;
        else if (p.y < minY)
            minY = p.y;



        mocultar();
        
        setcolor(RED);
        circle(mposx,mposy,2);
        setfillstyle(SOLID_FILL,RED);
        floodfill(mposx,mposy,RED);

        mver();
        
    }

    line(maxX,maxY,minX,minY);
    printf("%d, %d" ,maxX, minX);
    printf("%d %d ", maxY, minY);


    mocultar();
    getch();
}

/*punto pxnto(int a, int b){
    punto temp;
    temp.x=a;
    temp.y=b;
    return temp;
}*/