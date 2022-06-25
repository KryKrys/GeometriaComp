#include<conio.h>
#include<graphics.h>


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

int cortinaderech[36] = {
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


void main(){

	int modo, driver = DETECT;
	initgraph(&driver,&modo,"C:\\TC20\\BIN");

	/*ventana*/
	rectangle(218,93,350,219);
	line(283,93,283,218);
	line(219,155,349,155);
	
	
	setfillstyle(1,GREEN);
	 fillpoly(18,cortinaderech);
	  fillpoly(18,cortinaizq);
	
	/*pared*/
	line(118,1,118,431);
	
	line(4,478,118,431);
	
	line(635,430,118,430);
	
	getch();

}
