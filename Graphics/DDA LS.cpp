#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
//	int enter=0,tspace=10;
	
	int x1,y1,x2,y2;
	cout<<"enter the point 1 : ";
	cin>>x1>>y1;
	cout<<"enter the point 1 : ";
	cin>>x2>>y2;
	
	float x=x1+20;
	float y=y1+20;
	
	int dx = x2-x1;
	int dy = y2-y1;
	dx=abs(dx);
	dy=abs(dy);
	
	int steps;
	if(dx>dy){
		steps = dx;
		cout<<"steps are "<<steps;

	}
	else{
		steps = dy;
		cout<<"steps are "<<steps;

	}
	
	float xincre=float(dx)/steps;
	float yincre=float(dy)/steps;

	cout<<"\ndy = "<<dy<<"\ndx = "<<dx;
	float m=float(dy)/dx;
	cout<<"\n\tslope(m) = "<<m<<endl;

	cout<<"k\t| actual x\t| actual y\t| roundup x\t| roundup y\t|\n";
	for(int k=0;k<steps;k++){
		putpixel(x,y,YELLOW);
		cout<<k<<"\t| "<<x<<"\t\t| "<<y<<"\t\t| "<<int(x+0.5)<<"\t\t| "<<int(y+0.5)<<"\t\t|"<<endl;
		x+=xincre;
		y+=yincre;
		
	}

	outtextxy(x1,y1,"output");
	rectangle(x1,y1,x+20,y+20);
	getch();
}

