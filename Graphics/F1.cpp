//#include<iostream>
//#include<conio.h>
//#include<graphics.h>
//#include<dos.h>
//using namespace std;
//int main()
//
//{
//int X;
//int gd=DETECT, gm;
//
//initgraph(&gd, &gm, " ");
//X=getmaxx();
////road
//for(int i=0;i<X;i++)
//
//{
//cleardevice();
//line (0,420,X,420);
//line (0,100,X,100); 
//bar(100,240,170,250);
//bar(400,240,350,250);
//bar(580,240,510,250);
//circle (150+i,390,20);
//
//arc(150+i,390,0,180,25); 
//
//circle (250+i,390,20);
// arc(250+i,390,0,180,25);
//line (175+i,390,225+i,390);  
//line(90+i,390,125+i,390); 
//line (275+i,390,310+i,390); 
//
//arc(150+i,390,103,180,60);
//setfillstyle(1, BLUE); 
//arc(250+i,390,0,75,60);
//
//arc (200+i,350,7,64,65);
//arc (200+i,350,115,172,65);
//line (170+i,292,229+i,292);
//
////window 
//setfillstyle(1,11); 
//arc(200+i,350,8,62,61); 
//arc(200+i,350,117,170,61);
//line(172+i,295,227+i,295);
//pieslice(200+i,350,8,62,61);
////light
//setfillstyle(1, 14); 
//pieslice(282+i,355,0,360,5); 
//pieslice(282+i,355,-30,15,100); 
//setfillstyle(1,15); 
//delay(20);
//}
//getch();
//}
