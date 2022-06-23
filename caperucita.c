#include <graphics.h>
#include <conio.h>
#include <dos.h>

/*puerta2[]={
    578,188,
    575,189,
    573,190,
    571,193,
    570,195,
    569,197,

}*/

weed[248]={
    84, 381,
    83, 385,
    87, 388,
    89, 388,
    89, 386,
    94, 385,
    96, 384,
    97, 382,
    99, 382,
    99, 371,
    95, 362,
    95, 358,
    93, 354,
    89, 349,
    84, 344,
    79, 341,
    76, 339,
    73, 339,
    73, 347,
    78, 347,
    81, 348,
    85, 350,
    87, 354,
    90, 355,
    92, 361,
    94, 368,
    94, 373,
    93, 377,
    91, 379,
    89, 380,
    88, 381,
    84, 381,
    86, 379,
    85,381,
    86, 373,
    84, 369,
    83, 366,
    81, 364,
    80, 360,
    83, 357,
    83, 349,
    83, 356,
    80, 360,
    76, 353,
    73, 347,
    73, 339,
    65, 339,
    59, 345,
    54, 353,
    52, 359,
    52, 376,
    55, 381,
    62, 389,
    67, 390,
    71, 389,
    73, 388,
    71, 389,
    67, 390,
    66, 395,
    60, 401,
    59, 403,
    60, 407,
    63, 410,
    67, 412,
    69, 415,
    67, 415,
    66, 419,
    66, 428,
    68, 428,
    72, 429,
    75, 426,
    77, 420,
    80, 416,
    82, 416,
    89, 414,
    92, 412,
    91, 404,
    90, 396,
    88, 392,
    88, 388,
    88, 392,
    90, 396,
    91, 404,
    92, 412,
    89, 414,
    82, 416,
    74, 415,
    69, 414,
    63, 410,
    60, 407,
    59, 403,
    48, 412,
    34, 422,
    34, 429,
    36, 433,
    42, 443,
    49, 449,
    58, 454,
    65, 456,
    72, 459,
    79, 460,
    95, 461,
    105, 453,
    105, 446,
    99, 432,
    96, 423,
    92, 413,
    96, 423,
    99, 423,
    105, 446,
    105, 453,
    95, 461,
    88, 461,
    88, 464,
    85, 466,
    78, 466,
    76, 463,
    76, 460,
    70, 458,
    70, 466,
    68, 468,
    60, 467,
    58, 461,
    58, 454
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
canasta[166]={
    173,423,
    173,415,
    174,415,
    174,412,
    175,412,
    177,408,
    188,408,
    188,409,
    190,409,
    190,411,
    191,411,
    191,413,
    192,413,
    192,422,
    199,422,
    199,423,
    203,423,
    203,424,
    207,426,
    214,433,
    215,434,
    215,439,
    211,440,
    208,441,
    207,442,
    194,442,
    192,439,
    189,438,
    189,437,
    183,435,
    183,434,
    196,434,
    199,433,
    207,426,
    207,424,
    203,424,
    203,423,
    199,423,
    199,422,
    180,422,
    180,423,
    175,423,
    175,422,
    171,422,
    171,423,
    168,421,
    168,420,
    158,420,
    154,423,
    153,429,
    155,431,
    158,431,
    158,432,
    161,432,
    161,433,
    166,433,
    166,434,
    183,434,
    183,435,
    189,437,
    189,438,
    192,439,
    194,442,
    203,442,
    203,444,
    202,445,
    202,447,
    198,450,
    196,450,
    196,451,
    193,451,
    190,452,
    176,452,
    172,451,
    168,451,
    168,450,
    164,450,
    161,447,
    161,445,
    160,445,
    160,443,
    156,440,
    156,431
};

int temp[243];

void fondo(void);
void casita(int x);
void cap(int c);


void main(){

	int modo, driver = DETECT;
	int x=10, i, c=0;

    initgraph(&driver, &modo, "");

    /*pasamos los valores de el arreglo a uno temporal para moverlo*/
    for( i = 0 ; i < 248 ; i++){
        temp[i] = weed[i];
    }

    fondo();
    while(kbhit()==0){/*ciclo hasta q se presione una tecla*/

        casita(x);

        /*pintar la casita*/
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(500,140,DARKGRAY);
        
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(570,46,DARKGRAY);

        setfillstyle(SOLID_FILL,BROWN);
        floodfill(500,50,DARKGRAY);
        floodfill(468,36,DARKGRAY);

        /*borrar rastro*/
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        bar(10+c,337,109+c,472);

        cap(20);

        /*pintar a caperucita*/
        setfillstyle(SOLID_FILL,RED);
        floodfill(78+c,401,LIGHTRED);
        floodfill(95+c,378,LIGHTRED);

        setfillstyle(SOLID_FILL,WHITE);
        floodfill(70+c,438,LIGHTRED);

        setfillstyle(SOLID_FILL,BLACK);
        floodfill(79+c,352,LIGHTRED);
        floodfill(65+c,461,LIGHTRED);
        floodfill(81+c,464,LIGHTRED);

        setfillstyle(SOLID_FILL,BROWN);
        floodfill(89+c,369,LIGHTRED);
        floodfill(71+c,420,LIGHTRED);

        setfillstyle(SOLID_FILL,BLACK);
        bar(86+c,358,88+c,363);

        if(x>640){
            x=0;
        }

        x+=10;
        c+=20;

        delay(1000);

    }

    

}

void fondo(){
    /*barra del cielo y el monte xd*/
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    bar(0,0,640,480);
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    bar(0,330,640,480);

    /*solecito*/
    setcolor(WHITE);
    circle(0,0,70);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(0,0,WHITE);

}

void casita(int x){
    
    /*dibujar casa*/
    setcolor(DARKGRAY);
    drawpoly(11,casa);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
        
    drawpoly(11,puerta);
    setcolor(WHITE);

    /*borrar rastro*/
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    bar(90+x,20,140+x,40);
    bar(0+x,120,50+x,140);
    bar(190+x,80,240+x,100);
    
    /*dibujar nubes*/
    setfillstyle(SOLID_FILL,WHITE);
    bar(100+x,20,150+x,40);
    bar(10+x,120,60+x,140);
    bar(200+x,80,250+x,100);
}

/*funcion para dibujar a caperucita*/
void cap(int c){
    int i;

    setcolor(LIGHTRED);
    
    drawpoly(124, temp);

    /*le suma a las posiciones de x lo q queremos que avance*/
    for(i = 0 ; i < 248 ; i += 2 ){
        temp[i] = temp[i] + c;
    }
    

}