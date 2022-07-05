#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <button.h>


#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77
#define punto 46
#define coma 44
#define comi 39
#define ESC 27
#define k 107
#define l 108

/*void menuhanoi(void);*/
void menuprincip(void);
void principalanimacion(void);
void principaljuego(void);

/*animacion de caperucita*/

puerta2[44]={
    578,188,
    575,189,
    573,190,
    571,193,
    570,195,
    569,197,
    568,199,
    567,201,
    566,204,
    565,207,
    564,209,
    563,213,
    563,405,
    607,452,
    608,231,
    605,220,
    602,214,
    593,202,
    589,196,
    583,190,
    579,188,
    578,188
};

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
    639,80,
    639,470,
    486,390,
    487,103,
    424,105
};
puerta[24]={
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
    608,455,
    524,410
};

/*frame final*/
    cortinaizq[36] = {
        351, 86
        ,359, 87
        ,365, 84
        ,365, 90
        ,360, 96
        ,360, 88
        ,361, 107
        ,366, 127
        ,371, 147
        ,377, 170
        ,385, 193
        ,394, 208
        ,399, 219
        ,385, 225
        ,368, 223
        ,353, 224
        ,352, 218
        ,351, 87

    };

    cortinaderech[36] = {
        221, 87
        ,199, 89
        ,198, 84
        ,194, 83
        ,192, 91
        ,196, 92
        ,200, 92
        ,200, 109
        ,195, 132
        ,193, 159
        ,191, 189
        ,184, 201
        ,175, 222
        ,183, 225
        ,194, 223
        ,207, 227
        ,218, 218
        ,218, 92

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

    caperucita[70]={
        126,396,
        137,404,
        140,407,
        139,413,
        129,412,
        126,396,
        129,412,
        113,411,
        97,407,
        86,399,
        83,395,
        95,395,
        101,392,
        103,390,
        103,387,
        96,386,
        91,384,
        86,377,
        85,374,
        85,344,
        88,340,
        101,339,
        112,338,
        119,340,
        124,345,
        128,351,
        131,355,
        134,362,
        134,377,
        132,379,
        130,382,
        126,384,
        124,387,
        124,393,
        126,396,
    };

    falda[42]={
        129,412,
        132,420,
        137,428,
        139,436,
        141,443,
        142,452,
        136,455,
        123,457,
        111,457,
        103,456,
        99,455,
        91,451,
        83,446,
        75,438,
        70,427,
        68,419,
        79,413,
        86,411,
        90,412,
        94,410,
        97,406
    };

    cara[36]={
        106,345,
        114,345,
        119,348,
        126,355,
        127,360,
        128,368,
        128,374,
        125,377,
        124,378,
        118,379,
        118,384,
        118,376,
        116,369,
        113,364,
        112,361,
        108,353,
        106,348,
        106,345
    };

    pies[38]={
       91,451,
       91,460,
       94,463,
       99,466,
       103,466,
       104,465,
       104,456,
       106,456,
       106,457,
       110,457,
       110,457,
       122,457,
       122,465,
       121,466,
       115,466,
       111,462,
       111,460,
       110,460,
       110,459 
    };

    manos[8]={
        87,398,
        82,400,
        82,409,
        87,411
    };

    boca[12]={
        121,370,
        125,370,
        125,373,
        121,373,
        120,372,
        121,370
    };

    pelo[8]={
        111,356,
        116,354,
        119,352,
        119,348
    };

    signo[16]={
        157,293,
        162,309,
        171,319,
        178,318,
        172,310,
        169,300,
        164,288,
        157,293
    };

    bola[56]={
        158,344,
        153,341,
        146,333,
        142,325,
        141,298,
        145,290,
        150,282,
        156,278,
        162,275,
        181,275,
        192,278,
        203,284,
        207,290,
        211,297,
        214,306,
        214,320,
        212,327,
        208,333,
        201,341,
        194,346,
        185,348,
        174,348,
        168,346,
        167,350,
        158,352,
        160,347,
        159,343,
        158,344
    };

    brazo1[26]= {
        425,343,425,338,427,336,429,335,432,333,437,328,441,326,449,326,451,329,451,336,447,339,445,343,425,343};
        
    brazo2[28]= {
        476,318,477,328,482,330,484,335,486,340,486,344,504,344,504,340,501,336,500,331,494,325,491,324,486,324,479,327};

    CABEZA[40]= {
        451,329,454,327,454,321,448,315,441,304,436,293,437,288,439,283,450,282,459,285,468,294,471,292,479,294,
        483,298,487,297,493,306,493,317,489,322,485,325,480,327};

    OREJA[18]= { 
        487,304,491,296,498,293,504,292,503,304,497,309,489,313,488,307,500,298 };

    BOCA[18]= {
        436,290,443,289,457,301,470,311,473,317,473,306,458,296,447,289,437,289};

    DIENTES[16]= { 
        452,293,453,298,458,297,459,303,464,301,466,308,471,305,452,293};

    GORRO[70]={
        468,292,
        469,288,
        474,284,
        481,282,
        488,279, 
        511,279,
        512,286,
        516,286,
        516,280,
        512,278,
        513,279,
        508,287,
        502,293,
        499,293,
        498,293,
        495,293,
        494,294,
        493,294,
        492,295,
        491,295,
        490,296,
        490,297,
        489,298,
        488,298,
        487,297,
        486,296,
        485,296,
        484,295,
        483,295,
        483,294,
        482,293,
        477,292,
        471,291,
        470,292,
        468,292};

    cuellito[6]={
        458,313,461,317,466,319};

    una1[16]= {
        426,343,444,343,442,348,439,343,434,347,432,343,428,348,426,343};

    una2[16]= {
        486,343,504,343,502,348,500,343,495,348,491,343,488,348,486,343};

    moco[16]= {
        442,281,430,281,424,279,424,271,427,269,434,269,441,275,442,281};

    toalla[132] = {
            639,351,
            639,407,
            341,407,
            341,402,
            345,394,
            346,394,
            347,391,
            350,387,
            354,383,
            354,381,
            359,377,
            362,374,
            363,374,
            367,371,
            373,366,
            374,366,
            374,365,
            384,360,
            389,358,
            396,355,
            402,353,
            406,352,
            413,350,
            447,350,
            449,345,
            453,341,
            456,338,
            459,335,
            464,332,
            471,332,
            471,333,
            475,334,
            479,339,
            481,343,
            482,343,
            482,350,
            639,350,
            639,346,
            632,342,
            632,341,
            627,340,
            483,340,
            483,336,
            482,336,
            482,330,
            481,330,
            481,328,
            480,328,
            479,327,
            478,326,
            467,326,
            467,327,
            462,327,
            462,328,
            457,328,
            451,333,
            450,335,
            446,340,
            435,340,
            434,341,
            427,341,
            424,342,
            418,343,
            416,344,
            414,346,
            414,350
        };

    bb[34] = {
        409, 292,393, 292,366, 294,358, 297,341, 310,330, 330,332, 348,337, 351,347, 351,354, 
        351,365, 351,380, 341,394, 328,406, 318,410, 303,409,292,419,289};

    z1[8] = {
        377, 312,387, 303,381, 323,391, 316
        };

    z2[8] = {
        358, 323,367, 316,364, 334,373, 326
        };

    z3[8] = {
        340, 337,348, 327,349, 344,355, 338
        };

    puerta3[48]={
        0,186,
        6,182,
        10,181,
        31,181,
        34,182,
        38,184,
        46,190,
        49,193,
        49,194,
        53,199,
        57,205,
        59,208,
        60,211,
        61,211,
        61,215,
        62,217,
        62,220,
        63,221,
        63,232,
        64,234,
        64,453,
        0,480,
        0,188};
    
    cama[14]={
        338,408,
        338,479,
        639,479,
        640,408,
        338,408,
        338,425,
        639,425};

    cuello[20]={
        451,331,
        452,330,
        453,330,
        454,329,
        456,327,
        460,327,
        461,326,
        465,326,
        466,325,
        476,325
    };

int temp[243];

void fondo(void);
void casita(int x);
void cap(int c);
void framefinal(void);

/*juego frames hanoi*/
char tecla;
char sel;

void outline(void);
void start (void);
void p1(void);
void p2(void);
void p3(void);
void p4(void);
void p5(void);
void p6(void);
void p7(void);
void l1(void);
void l2(void);
void l3(void);
void l4(void);
void l5(void);
void l6(void);
void l7(void);

void main(){

    int modo, driver = DETECT;
    int salir = 0;
    int x, y;

    initgraph(&driver, &modo, "");

    cleardevice();

    /*menuhanoi();*/

    menuprincip();


    do{

        while(mclick()!=1){
            x = mxpos(1);
            y = mypos(1);
        }

        if(limit(x,y,50,200,250,270)){
            mocultar();
            principalanimacion();

        }

        if(limit(x,y,370,200,570,270)){
            mocultar();
            principaljuego();
            
        }

        if(limit(x,y,40,60,120,100)){
            salir=1;
        }

    }while(salir!=1);

}

/*void menuhanoi(){
    button jugar, inst, salir;

    setfillstyle(SOLID_FILL,LIGHTGREEN);
    bar(0,0,640,480);

    setfillstyle(SOLID_FILL,BLACK);
    bar(20,20,620,460);

    settextstyle(0,0,4);
    outtextxy(170,70,"Torres de ");
    outtextxy(240,130,"Hanoi");

    newButton(&jugar, 250,320, "jugar",RED,BLACK,140,30);
    newButton(&inst, 220,350, "instrucciones",CYAN,BLACK,210,30);
    newButton(&salir, 190,380, "salir",GREEN,BLACK,260,30);

    setfillstyle(SOLID_FILL,BROWN);
    bar(160,410,480,430);
    bar(310,269,330,319);

}*/

void menuprincip(){

    button animacion, juego,salir;

    setfillstyle(SOLID_FILL,MAGENTA);
    bar(0,0,319,480);
    setfillstyle(SOLID_FILL,BLACK);
    bar(20,20,299,460);

    setfillstyle(SOLID_FILL,GREEN);
    bar(320,0,640,480);
    setfillstyle(SOLID_FILL,BLACK);
    bar(340,20,620,460);

    newButton(&animacion, 50,200, "Caperucita Roja",LIGHTMAGENTA,WHITE,200,70);
    newButton(&juego, 370,200, "Torres de Hanoi",LIGHTGREEN,WHITE,200,70);
    newButton(&salir, 40,60,"S A L I R",RED,WHITE,80,40);


    mver();
}

/* funciones animacion*/

    void principalanimacion(){
        int i, c=0, x=10;
        /*pasamos los valores de el arreglo a uno temporal para moverlo*/
        for( i = 0 ; i < 248 ; i++){
            temp[i] = weed[i];
        }

        fondo();
        while(c<=370){/*ciclo hasta q se presione una tecla*/
            casita(x);

            /*borrar rastro*/
            setfillstyle(SOLID_FILL,LIGHTGREEN);
            bar(10+c,337,109+c,472);

            cap(20);

            /*pintar a caperucita*/
            setfillstyle(SOLID_FILL,RED);
            floodfill(78+c,401,DARKGRAY);
            floodfill(95+c,378,DARKGRAY);

            setfillstyle(SOLID_FILL,WHITE);
            floodfill(70+c,438,DARKGRAY);

            setfillstyle(SOLID_FILL,BLACK);
            floodfill(79+c,352,DARKGRAY);
            floodfill(65+c,461,DARKGRAY);
            floodfill(81+c,464,DARKGRAY);

            setfillstyle(SOLID_FILL,BROWN);
            floodfill(89+c,369,DARKGRAY);
            floodfill(71+c,420,DARKGRAY);

            setfillstyle(SOLID_FILL,BLACK);
            bar(86+c,358,88+c,363);

            if(x>640){
                x=0;
            }

            x+=10;
            c+=20;

            delay(1000);

        }

        /*dibujar puerta abierta*/
        setcolor(DARKGRAY);
        drawpoly(21,puerta2);

        /*pintar lo negro de la puerta2*/
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(548,337,DARKGRAY);

        setfillstyle(SOLID_FILL,BROWN);
        floodfill(583,330,DARKGRAY);

        /*cubrir a caperucita*/
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        bar(10+c,337,109+c,472);

        delay(1000);

        /*dibujar la puerta cerrandose*/
        setcolor(LIGHTGRAY);
        drawpoly(12,puerta);
        setfillstyle(SOLID_FILL,BROWN);
        floodfill(554,320,LIGHTGRAY);

        delay(1000);

        setfillstyle(SOLID_FILL,BLACK);
        bar(0,0,640,480);

        framefinal();
        

        getch();

        menuprincip();

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
            
        drawpoly(12,puerta);

        /*pintar la casita*/
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(500,140,DARKGRAY);
                
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(570,46,DARKGRAY);

        setfillstyle(SOLID_FILL,BROWN);
        floodfill(500,50,DARKGRAY);
        floodfill(468,36,DARKGRAY);
        floodfill(550,267,DARKGRAY);


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

        setcolor(DARKGRAY);
        
        drawpoly(124, temp);

        /*le suma a las posiciones de x lo q queremos que avance*/
        for(i = 0 ; i < 248 ; i += 2 ){
            temp[i] = temp[i] + c;
        }
        

    }

    void framefinal(){
        /*fondo*/
        setfillstyle(SOLID_FILL,CYAN);
        floodfill(427,108,DARKGRAY);
        floodfill(44,115,DARKGRAY);
        setcolor(DARKGRAY);
        /*pared*/ 
        line(118,1,118,339);
        line(4,478,81,446);
        line(337,430,212,430);
        line(155,430,138,430);
        /*BARRA DE VENTANA*/
        line(220,89,350,89);

        /*caperucita*/
        drawpoly(83,canasta);
        drawpoly(35,caperucita);
        drawpoly(21,falda);
        drawpoly(18,cara);
        drawpoly(19,pies);
        drawpoly(4,manos);
        drawpoly(6,boca);
        drawpoly(4,pelo);
        /*fin caperucita*/

        drawpoly(8,signo);
        drawpoly(28,bola);
        circle(182,330,5);
        
        /*cama*/
        /*respaldo cama*/
            setcolor(DARKGRAY);
            rectangle(430,252,639,344);
            setfillstyle(SOLID_FILL,BROWN);
            floodfill(450,270,DARKGRAY);

            drawpoly(7,cama);
            setcolor(MAGENTA);
            drawpoly(66,toalla);
            drawpoly(35,GORRO);
            /*toalla 2*/
            line(396,386,443,354);
            line(483,354,485,392);

            setfillstyle(SOLID_FILL,LIGHTMAGENTA);
            floodfill(447,367,MAGENTA);
            floodfill(521,348,MAGENTA);
            floodfill(489,292,MAGENTA);

        setcolor(DARKGRAY);
        drawpoly(17,bb);
        setfillstyle(SOLID_FILL,WHITE);
        fillpoly(17,bb);
        drawpoly(4,z1);
        drawpoly(4,z2);
        drawpoly(4,z3);

        /*lobo*/
            setcolor(DARKGRAY);
            drawpoly(8,DIENTES);
            setfillstyle(SOLID_FILL,WHITE);
            fillpoly(8,DIENTES);

            drawpoly(3,cuellito);
        
            drawpoly(13,brazo1);
            drawpoly(14,brazo2);
            drawpoly(20,CABEZA);
            drawpoly(9,OREJA);
            drawpoly(9,BOCA);
            drawpoly(10,cuello);

        drawpoly(8,una1);
        drawpoly(8,una2);
        drawpoly(8,moco);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        fillpoly(8,moco);

        /*ventana*/
        rectangle(218,93,350,218);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(260,140,DARKGRAY);
        line(283,93,283,218);
        line(219,155,349,155);

        drawpoly(24,puerta3);
        
        setfillstyle(SOLID_FILL,MAGENTA);
        fillpoly(18,cortinaderech);
        fillpoly(18,cortinaizq);

        setfillstyle(SOLID_FILL,RED);
        floodfill(128, 398, DARKGRAY);
        floodfill(113, 380, DARKGRAY);

        floodfill(163, 304, DARKGRAY);
        floodfill(182, 332, DARKGRAY);

        setfillstyle(SOLID_FILL,YELLOW);
        /*piso*/
        floodfill(285,460,DARKGRAY);

        setfillstyle(SOLID_FILL,WHITE);
        floodfill(106,432,DARKGRAY);
        floodfill(196, 302, DARKGRAY);
        /*unas*/
        floodfill(428,345,DARKGRAY);
        floodfill(434,344,DARKGRAY);
        floodfill(441,345,DARKGRAY);

        floodfill(489,345,DARKGRAY);
        floodfill(494,346,DARKGRAY);
        floodfill(502,345,DARKGRAY);

        setfillstyle(SOLID_FILL, BROWN);
        floodfill(121,366,DARKGRAY);
        floodfill(84, 403, DARKGRAY);
        floodfill(130,406,DARKGRAY);
        fillpoly(24,puerta3);

        floodfill(566,422,DARKGRAY);
        floodfill(538,453,DARKGRAY);

        setfillstyle(SOLID_FILL,LIGHTGRAY);
        floodfill(240,90,DARKGRAY);
        /*lobo*/
        floodfill(460,324,DARKGRAY);
        floodfill(436,336,DARKGRAY);
        floodfill(492,332,DARKGRAY);
        floodfill(491,309,DARKGRAY);
        /*oreja*/
        floodfill(497,305,DARKGRAY);

        setfillstyle(SOLID_FILL,BLACK);
        floodfill(107, 346, DARKGRAY);
        fillpoly(6,boca);
        fillpoly(19,pies);
        floodfill(471,309,DARKGRAY);
        floodfill(447,291,DARKGRAY);
        /*ojos*/
        bar(118,358,120,365);

        setcolor(BLACK);
        line(473,297,481,303);
        setcolor(WHITE);
        circle(445,283,3);
        floodfill(445,283,WHITE);

        setfillstyle(XHATCH_FILL,RED);
        floodfill(203,437,DARKGRAY);

        setfillstyle(SOLID_FILL,LIGHTRED);
        /*canasta*/
        floodfill(180,430,DARKGRAY);
        floodfill(172,442,DARKGRAY);

    }

/*funciones frames hanoi <3*/
    void principaljuego(){

        start();

        do{
            sel = getch();
        }while(sel!=k && sel!=l);

        switch(sel){
            case k: 
                do{
                
                    tecla = getch();
                    switch(tecla){
                        
                        case arriba:
                            p1();
                        break;

                        case abajo:
                            p2();
                        break;
                        
                        case izquierda:
                            p3();
                        break;
                        
                        case derecha:
                            p4();
                        break;
                            
                        case punto:
                            p5();
                        break;

                        case coma:
                            p6();
                        break;
                        
                        case comi:
                            p7();
                        break;
                        
                    }
                            
                }while(tecla!=ESC);

            break;

            case l:
                do{

                    tecla = getch();
                    switch(tecla){
                        
                        case arriba:
                            l1();
                        break;

                        case abajo:
                            l2();
                        break;
                        
                        case izquierda:
                            l3();
                        break;
                        
                        case derecha:
                            l4();
                        break;
                            
                        case punto:
                            l5();
                        break;

                        case coma:
                            l6();
                        break;
                        
                        case comi:
                            l7();
                        break;
                        
                    }
                            
                }while(tecla!=ESC);
            break;
        }

        menuprincip();
    
    }

    void l7(){
        
        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(264,345, 375, 373);
        floodfill(282, 365, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(111, 346, 187, 373);
        floodfill(142, 359, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(133, 319, 164, 342);
        floodfill(140, 331, 15);
        outtextxy(165, 116, "NO TE QUEDAN MOVIMIENTOS, PERDISTE");
        outline();
        delay(1000);

    }

    void l6(){

        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(264,345, 375, 373);
        floodfill(282, 365, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(111, 346, 187, 373);
        floodfill(142, 359, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(305, 321, 338, 340);
        floodfill(313, 330, 15);
        outline();
        delay(1000);

    }

    void l5 (){
        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(264,345, 375, 373);
        floodfill(282, 365, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(458, 347, 533, 373);
        floodfill(474, 363, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(305, 321, 338, 340);
        floodfill(313, 330, 15);
        outline();
        delay(1000);

    }

    void l4(){
        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(264,345, 375, 373);
        floodfill(282, 365, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(458, 347, 533, 373);
        floodfill(474, 363, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(478, 320, 511, 342);
        floodfill(489, 334, 15);
        outline();
        delay(1000);

    }


    void l3(){
        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(94, 346, 204, 373);
        floodfill(98, 349, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(458, 347, 533, 373);
        floodfill(474, 363, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(478, 320, 511, 342);
        floodfill(489, 334, 15);
        outline();
        delay(1000);


    }

    void l2(){
        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(94, 346, 204, 373);
        floodfill(98, 349, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(458, 347, 533, 373);
        floodfill(474, 363, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(304, 353, 336, 373);
        floodfill(317, 365, 15);
        outline();
        delay(1000);

    }

    void l1(){
        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(94, 346, 204, 373);
        floodfill(98, 349, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(111, 314, 186, 342);
        floodfill(113, 320, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(304, 353, 336, 373);
        floodfill(317, 365, 15);
        outline();
        delay(1000);

    }

    void p7(){
        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(440, 346, 550, 373);
        floodfill(448, 349, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(460, 315, 535, 344);
        /*ancho 30 largo 75*/
        floodfill(497, 318, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(480, 288, 510, 310);
        floodfill(487, 290, 15);
    
        outtextxy(270, 116, "GANASTE");
        outline();
        delay(1000);
        
    
    }
    
    void p6(){
        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(440, 346, 550, 373);
        floodfill(448, 349, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(460, 315, 535, 344);
        /*ancho 30 largo 75*/
        floodfill(497, 318, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(135, 356, 165, 376);
        floodfill(146, 357, 15);
    
        
        outline();
        delay(1000);
    
    }

    void p5(){
        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(440, 346, 550, 373);
        floodfill(448, 349, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(290, 345, 350, 375);
        /*ancho 30 largo 75*/
        floodfill(297, 360, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(135, 356, 165, 376);
        floodfill(146, 357, 15);
    
        
        outline();
        delay(1000);   
            
    }
    
    void p4(){
        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(440, 346, 550, 373);
        floodfill(448, 349, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(290, 345, 350, 375);
        /*ancho 30 largo 75*/
        floodfill(297, 360, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(305, 326, 335, 345);
        floodfill(316, 337, 15);
    
        
        outline(); 
        delay(1000);
    }

    void p3(){
        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(94, 346, 204, 373);
        floodfill(98, 349, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(290, 345, 350, 375);
        /*ancho 30 largo 75*/
        floodfill(297, 360, 15);
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(305, 326, 335, 345);
        floodfill(316, 337, 15);
    
        
    
        outline();
        delay(1000);

    }
    
    void p2(){

        cleardevice();
        setfillstyle(SOLID_FILL, RED);
        rectangle(94, 346, 204, 373);
        floodfill(98, 349, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(290, 345, 350, 375);
        /*ancho 30 largo 75*/
        floodfill(297, 360, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(480, 356, 510, 376);
        floodfill(486, 357, 15);
    
        
        outline();
        delay(1000);

    }
    
    void p1(){
        cleardevice();
        
        
        setfillstyle(SOLID_FILL, RED);
        rectangle(94, 346, 204, 373);
        floodfill(98, 349, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(111, 314, 186, 342);
        floodfill(113, 320, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(480, 356, 510, 376);
        floodfill(486, 357, 15);
    
        
        outline();
        delay(1000);
    }
    
    void start(){
        
        cleardevice();
        settextstyle(3, 0, 1);
        outtextxy(270, 116, "Punto de partida");
    
        
        setfillstyle(SOLID_FILL, RED);
        rectangle(94, 346, 204, 373);
        floodfill(98, 349, 15);
    
    
        setfillstyle(SOLID_FILL, BLUE);
        rectangle(111, 314, 186, 342);
        floodfill(113, 320, 15);
    
    
        setfillstyle(SOLID_FILL, GREEN);
        rectangle(135, 288, 167, 310);
        floodfill(137, 290, 15);
    
        
        outline();
    }
    
    void outline(){
        
        line(28, 376, 602, 376);
        line(149, 191, 149, 376);
        line(321, 186, 321, 376);
        line(496, 185, 496, 376);
    
        
        settextstyle(3, 0, 1);
        outtextxy(138, 390, "(1)");
        outtextxy(313, 390, "(2)");
        outtextxy(488, 390, "(3)");

    }

