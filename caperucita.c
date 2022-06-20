
#include <graphics.h>
#include <conio.h>
#include <dos.h>

int cuerpe[24]={187, 450, 175, 450, 175, 400, 150, 400, 200, 300, 254, 400, 232, 400, 232, 450, 248, 450, 232, 450, 232, 400, 151, 400};
int cabeza[8]={215, 300, 175, 300, 201, 250, 215, 300}; 
int weed[246]={
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


void fondo(void);
void casita(void);
void cap(int x);


void main(){

	int modo, driver = DETECT;
    int x=10;

    initgraph(&driver, &modo, "");

    fondo();
    while(kbhit()==0){
        
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        bar(0,0,640,349);
    
        setfillstyle(SOLID_FILL,WHITE);
        bar(100+x,20,150+x,40);
        bar(10+x,120,60+x,140);
        bar(200+x,80,250+x,100);

        setcolor(WHITE);
        circle(0,0,70);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(0,0,WHITE);
        casita();

        setcolor(RED);
        cap(-10);
        
        setcolor(LIGHTGREEN);
        cap(10);
        

        if(x>640){
            x=0;
        }

        x+=10;

        delay(1000);


    }

}

void fondo(){
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    bar(0,0,640,480);
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(0,350,640,480);
    floodfill(10,360,DARKGRAY);
}

void casita(){
    
    setcolor(DARKGRAY);
    drawpoly(11,casa);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
        
    drawpoly(11,puerta);
    setcolor(WHITE);
}

void cap(int c){
    int i;
   drawpoly(12, cuerpe);
   drawpoly(4, cabeza);
    drawpoly(123, weed);

    
    for(i = 0 ; i < 48 ; i+=2 ){
        cuerpe[i] = cuerpe[i] + c;
        cabeza[i] = cabeza[i] + c;
        weed[i] = weed[i]+c;
    }

}