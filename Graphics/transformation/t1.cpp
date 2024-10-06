#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<cmath>
using namespace std;

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	int choice,tx,ty;
	int x1,y1,x2,y2;
	int x0=250,y0=200;
	
	line(0,y0,getmaxx(),y0);
	line(x0,0,x0,getmaxy());
	
	cout<<"enter the points for initial line : ";
	cin>>x1>>y1>>x2>>y2;
	line(x1+x0,y1+y0,x2+x0,y2+y0);
	while(1){
		cout<<"1.translation\n2.rotation\n3.scaling\nenter your choice : ";
		cin>>choice;
		switch(choice){
			case 1:{
				cout<<"enter the translation point ";
				cin>>tx>>ty;
				
				x1+=tx;
				x2+=tx;
				y1+=ty;
				y2+=ty;
				setcolor(YELLOW);
				line(x1+x0,y1+y0,x2+x0,y2+y0);
				break;
			}
			case 2:{
				float thita;
				int xa,ya;
				cout<<"enter the angle you want to rotate it (clockwise) \n";
				cin>>thita;
				cout<<"enter the axis point to rotate : ";
				cin>>xa>>ya;
				thita=(thita*0.0175);

				float xx1 = (x1-xa)*cos(thita)-(y1-ya)*sin(thita);
				float xx2 = (x2-xa)*cos(thita)-(y2-ya)*sin(thita);
				float yy1 = (x1-xa)*sin(thita)+(y1-ya)*cos(thita);
				float yy2 = (x2-xa)*sin(thita)+(y2-ya)*cos(thita);
				x1=xx1;
				y1=yy1;
				x2=xx2;
				y2=yy2;
				
				setcolor(YELLOW);
				line(x1+x0,y1+y0,x2+x0,y2+y0);
				break;
			}
			case 3:{
				int sx,sy,xf,yf;
				cout<<"enter the point to scale : ";
				cin>>sx>>sy;
				cout<<"enter a fix point to scale : ";
				cin>>xf>>yf;
				
				x1=xf*(1-sx)+x1*sx;
				x2=xf*(1-sx)+x2*sx;
				y2=yf*(1-sy)+y2*sy;
				y1=yf*(1-sy)+y1*sy;
				setcolor(YELLOW);
				line(x1+x0,y1+y0,x2+x0,y2+y0);
				break;
			}
		}
	}
	
}
