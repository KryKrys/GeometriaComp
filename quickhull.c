#include <graphics.h>
#include <stdio.h>
#include <dos.h>
#include <mouse.h>
#include <conio.h>

#define MAX 15

struct punto {
int x;
int y;
};

void main(){
    int driver = DETECT, modo;
    int cont = 0, mposx, mposy, i=0;
    struct punto puntoA, puntoC;
    struct punto puntoB, puntoD;
    struct punto p;
    struct punto quickhull[MAX];
    struct punto puntos[MAX];
    int max_X = 0, max_Y = 0, min_X = 640, min_Y = 480; 

    initgraph(&driver, &modo, "");

    setbkcolor(LIGHTBLUE);

    mver();

    while(i < MAX){
        while(cont < MAX){

            
            while(mclick()!=1){
                mposx=mxpos(1);
                mposy=mypos(1);

                delay(10);

                if(mclick()==1) /*contamos cuantos clicks ha dado*/
                    cont++;
            }

            p.y = mposy;
            p.x = mposx;

            /*validar maximo y minimo en x*/
            if(p.x > max_X){
                max_X = p.x;
                puntoB.x = max_X;
                puntoB.y = p.y;
            }else if(p.x < min_X){
                min_X = p.x;
                puntoA.x = p.x;
                puntoA.y = p.y;
            }

            /*validar maximo y minimo en y*/
            if(p.y > max_Y){
                max_Y = p.y;
                puntoC.x = p.x;
                puntoC.y = p.y;
            }else if(p.y < min_Y){
                min_Y = p.y;
                puntoD.y = p.y;
                puntoD.x = p.x;
            }

            mocultar();
            
            setcolor(RED);
            circle(mposx,mposy,2);
            setfillstyle(SOLID_FILL,RED);
            floodfill(mposx,mposy,RED);

            mver();


        }

        line(puntoA.x,puntoA.y,puntoB.x,puntoB.y);
        /*line(puntoC.x,puntoC.y,puntoD.x,puntoD.y);*/
        line(puntoA.x,puntoA.y,puntoC.x,puntoC.y);
        line(puntoB.x,puntoB.y,puntoC.x,puntoC.y);
        i++;
    }


    mocultar();
    getch();

}