

#include<conio.h>
#include<graphics.h>
#include<stdlib.h>


int suelo[10]={0, 380, 640, 380, 640, 480, 0, 480, 0, 380};
int cuerpe[24]={187, 450, 175, 450, 175, 400, 150, 400, 200, 300, 254, 400, 232, 400, 232, 450, 248, 450, 232, 450, 232, 400, 151, 400};
int cabeza[8]={215, 300, 175, 300, 201, 250, 215, 300}; 
int weed[244]={
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
36, 433,
42, 433,
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


void main(){

    int modo, driver= DETECT;

    initgraph(&driver, &modo, "C:\\TC20\\BIN");

    drawpoly(12, cuerpe);
	 /*( arc( 210, 277, 260, 110, 20 );*/
    circle(210, 277, 20);
    drawpoly(4, cabeza);


    drawpoly(122, weed);


    getch();
}
