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
    int puntox[MAX], puntoy[MAX]; /*arreglos donde guardamos los valores de x y y */
    int maxX= 0, minX = 640;    /* variables para comparacion de maximo y minimo de x*/
    int maxY = 0, minY = 480;   /* variables para comparacion de maximo y minimo de y*/
    int a,b;    /*puntos de y de max en x*/
    int c,d;    /*puntos de x de max en y*/
    int convexHull[MAX][2];

    initgraph(&driver, &modo, "");

    setbkcolor(LIGHTBLUE);

    mver();


    while(cont < MAX){

        
        while(mclick()!=1){
		    mposx=mxpos(1);
		    mposy=mypos(1);

            delay(10);

            if(mclick()==1) /*contamos cuantos clicks ha dado*/
                cont++;
	    }

        p.x = mposx;
        p.y = mposy;    /*guardamos dentro de las estructuras de puntos*/

        puntox[cont] = p.x; 
        puntoy[cont] = p.y;

        /*validamos el minimo y el maximo de x y */
        if(p.x > maxX){
            
            maxX = p.x;
            a = p.y;
            printf("max %d %d \n", maxX, a);
        }

        if (p.x < minX){
            minX = puntox[cont];
            b = puntoy[cont];
            printf("min %d %d \n", minX, b);
        }

       if(p.y > maxY){
            maxY = p.y;
            c = p.x;
       }else if (p.y < minY){
            minY = p.y;
            d = p.x;
       }

        mocultar();
        
        setcolor(RED);
        circle(mposx,mposy,2);
        setfillstyle(SOLID_FILL,RED);
        floodfill(mposx,mposy,RED);

        mver();
        
    }

    line(maxX,a,minX,b);
    /*line(maxX,a,c,maxY);*/


    mocultar();
    getch();
}

/*punto pxnto(int a, int b){
    punto temp;
    temp.x=a;
    temp.y=b;
    return temp;
}*/