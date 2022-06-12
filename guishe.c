#include<conio.h>
#include<graphics.h>
#include<stdlib.h>


int suelo[10]={0, 380, 640, 380, 640, 480, 0, 480, 0, 380};
int cuerpe[18]={171, 450, 171, 400, 129, 400, 200, 300, 271, 400, 232, 400, 232, 450, 232, 400, 170, 400};
int cabeza[8]={215, 300, 175, 300, 201, 250, 215, 300};    


void main(){

    int modo, driver= DETECT;

    initgraph(&driver, &modo, "C:\\TC20\\BIN");

    drawpoly(9, cuerpe);
	 /*( arc( 210, 277, 260, 110, 20 );*/
    circle(210, 277, 20);
    drawpoly(4, cabeza);


    getch();
}
