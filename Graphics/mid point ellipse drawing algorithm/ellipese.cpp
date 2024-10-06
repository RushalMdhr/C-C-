#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<cmath>
using namespace std;

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");

	int xc,yc, rx, ry, x,y;

	cout<<"enter the x radius rx : ";
	cin>>rx;
	cout<<"enter the y radius ry: ";
	cin>>ry;
	cout<<"enter the center of the ellipse : ";
	cin>>xc>>yc;

	x=0;
	y=ry;

	float p=pow(ry, 2)-pow(rx, 2) *ry+(pow(rx,2))/4;
	cout<<p<<endl;

	while(2*pow(ry, 2)*x<2*pow(rx, 2)*y) {
		putpixel(x+xc,y+yc, RED); 
		putpixel(xc-x,yc-y, WHITE);
		putpixel(xc-x,yc+y, BROWN);
		putpixel(xc+x, yc-y, YELLOW);

	if(p<0){
		x++;
		p=p+2*pow(ry, 2)*x+pow(ry,2);
		cout<<p<<endl;
	}
	else{
		x++;
		y--;
		p=p+2*pow(ry,2)*x+pow(ry, 2)-2*pow(rx, 2)*y;
		cout<<p<<endl;
	}
}
	
	p=pow((x+(1/2)), 2)*pow(ry, 2)-pow(rx, 2)*pow(ry,2)+pow (y-1,2)*pow(rx, 2);

	while(y>=0){
		putpixel(x+xc,y+yc,RED);
		putpixel(xc-x,yc-y, WHITE);
		putpixel(xc-x,yc+y, BROWN);
		putpixel(xc+x,yc-y, YELLOW);
		if(p>0){
		y--;
		p=p-2*pow(rx,2)*y+pow(rx, 2);
		}	
	else{
		x++;
		y--;
		p=p-2*pow(rx, 2)*y+pow(rx, 2)+2*pow(ry,2)*x;
	}

}

	line (xc, yc - ry - 10, xc, yc + ry + 10) ; 
	line(xc-rx-10, yc, xc+x+10,yc);
	line(xc-rx,yc-ry-10,xc+rx,yc+ry+10);
	line(xc+rx,yc-ry-10,xc-rx,yc+ry+10);
	outtextxy(xc-(rx/2), yc+ry+50,"fig: mid point ellipse algorithm");
	outtextxy ( xc + ((rx + 10) / 2), yc - ry - 20 ,"(x,y)");
	outtextxy ( xc - ((rx + 10) / 2), yc - ry - 20 ,"(-x,y)");
	outtextxy ( xc - ((rx + 10) / 2), yc + ry + 10 ,"( -x,-y)");
	outtextxy(xc+((x+1)/2), yc+ry+10, "(x,-y)");
	

getch();

}
