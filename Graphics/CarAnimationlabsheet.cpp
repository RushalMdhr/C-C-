#include<iostream>

#include<conio.h>

#include<graphics.h>

#include<dos.h>
using namespace std;

int main()

{
int X,Y;
int gd=DETECT, gm;

initgraph(&gd, &gm, " ");
X=getmaxx();
Y=getmaxy();
//int n;

//road


for(int i=0;i<X;i++)

{

cleardevice();
line (0,320,X,320);     //road
line(50,320,50,Y/4);       //street light
line(50,Y/4,100,Y/5);       
bar(100,Y/5,110,Y/5+4);
setfillstyle(3,15);
pieslice(105,Y/5+3,260,305,120);

circle (150+i,300,20);

arc(150+i,300,0,180,25); 
circle(250+i,300,20);

arc(250+i,300,0,180,25);

line (175+i,300,225+i,300);

circle (250+i,300,20);
 arc(250+i,300,0,180,25);

line (175+i,300,225+i,300);  
line(90+i,300,125+i,300); 
line (275+i,300,310+i,300); 

arc(150+i,300,103,180,60);

arc(250+i,300,0,75,60);


arc (200+i,250,7,64,65);
arc (200+i,250,115,172,65);
line (170+i,192,229+i,192);

//window
arc(200+i,250,8,62,61);
arc (200+i,250,117,170,61);

//light

arc(150+i,300,103,180,60); 
arc(250+i,300,0,75,60); 
arc(200+i,250,7,64,65);

line(170+i,192,229+i,192);

//window 
arc(200+i,250,8,62,61); 
arc(200+i,250,117,170,61);
line(172+i,195,227+i,195);
line(200+i,241,200+i,195);
line(139+i,241,259+i,241);

//light


setfillstyle(1,15);
bar(273+i,252,285+i,256);
pieslice(282+i,255,-30,15,100); 
delay(20);

}

getch();

}
