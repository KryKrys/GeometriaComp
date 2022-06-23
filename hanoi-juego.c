#include <stdio.h>
#include <conio.h>
#include <dos.h>

#define MAX 3

struct torre{
    int usada = 0;
    int num;
};


void main(){

    int disco1 = 1, disco2 = 2, disco3 = 3;
    struct torre torre1[MAX], torre2[MAX], torre3[MAX];

    clrscr();

    printf("Torres de hanoi 3 discos");

    printf("\nRealice su primer movimiento");
    
    do{
        printf("Disco 1 a torre n: ");
        scanf(%d,&temp);
    }while(temp > 3 && temp < 0);

    


    getch();

}