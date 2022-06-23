#include <stdio.h>
#include <conio.h>
#include <dos.h>

#define MAX 3

struct torre{
    int num;
    int tope = 0;
    int list[MAX]={
        0,0,0
    };
};


void main(){

    int disco1 = 1, disco2 = 2, disco3 = 3;
    int temp, i;
    struct torre torre1, torre2, torre3;

    clrscr();

    printf("Torres de hanoi 3 discos");

    printf("\nRealice su primer movimiento");
    
    do{
        printf("Disco 1 a torre n: ");
        scanf(%d,&temp);
    }while(temp > MAX && temp < 0);

    if(torre1.num == temp){
        for(i = 0 ; i < MAX ; i++){
            if (torre1.list[i] == 0)
                torre1.list[i] =
        }
    }else if(torre2.num == temp){
        if(torre2.list[0] == 0){
            torre2.list[0] == disco1
        }
    }


    getch();

}