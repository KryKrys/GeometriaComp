#include<conio.h>
#include<graphics.h>
#include<stdlib.h>


int suelo[10]={0, 380, 640, 380, 640, 480, 0, 480, 0, 380};




void main(){

    int modo, driver= DETECT;

    initgraph(&driver, &modo, "C:\\TC20\\BIN");


	  setfillstyle(SOLID_FILL, GREEN);
    fillpoly(5, suelo);

    
    
    line(180, 270, 150, 300); 
    line(180, 300, 220 , 300);

    /*CUERPE*/
    line(200, 300, 130, 400);
    line(200, 300, 270, 400);
    line(130, 400, 270, 400);


    /*PATAS*/
    line(170, 400, 170, 450);
    line(230, 400, 230, 450); 

    getch();
}
