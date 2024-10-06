#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    
    //entering the point
    int x1,y1,x2,y2,x0,y0;
    cout<<"enter the point 1 : ";
    cin>>x1>>y1;
    cout<<"enter the point 2 : ";
    cin>>x2>>y2;
    
    //for checking left value
    if(x1>x2){
        x0=x2;
        y0=y2;
    }
    else{
        x0=x1;
        y0=y1;
    }
    
    //dx and dy
    int dx=abs(x2-x1);
    int dy=abs(y2-y1);
    float m = float(dy)/dx;
    
    cout<<"\n\tdx = "<<dx;
    cout<<"\n\tdy = "<<dy;
    cout<<"\n\t(slope)m = "<<m;
    cout<<"\n\n\tk\t|\tXk\t|\tYk\t|\tPk\t|\tXk+1\t|\tYk+1\t|\tPk+1\t|";
    int P0;
if(m<1){
   	P0 = 2*dy-dx;
   	
    for(int k=0;k<=dx;k++){
    	cout<<"\n\t"<<k<<"\t|\t"<<x0<<"\t|\t"<<y0<<"\t|\t"<<P0;
        putpixel(x0,y0,YELLOW);
        if(P0<0){
            x0=x0+1;
            P0=P0+2*dy;
            cout<<"\t|\t"<<x0<<"\t|\t"<<y0<<"\t|\t"<<P0;
        }
        else{
            x0=x0+1;
            y0=y0+1;
            P0=P0+2*dy-2*dx;
            cout<<"\t|\t"<<x0<<"\t|\t"<<y0<<"\t|\t"<<P0;
        }
        rectangle(x1-15,y1-15,x2+10,y2+10);
        outtextxy(x1-12,y1-13,"OUTPUT");
    }    
}

else if(m>=1){
	x0=x1;
	y0=y1;
	P0 = 2*dx-dy;
	for(int k=0;k<=dx;k++){
	cout<<"\n\t"<<k<<"\t|\t"<<x0<<"\t|\t"<<y0<<"\t|\t"<<P0;
	putpixel(x1,y1,YELLOW);	
	
	if(x1<x2){
		x1++;
	}   
	else{
		x1--;
	}
	
	if(P0>0){
		y1=y1+1;
		P0=P0+2*dx;
		cout<<"\t|\t"<<x0<<"\t|\t"<<y0<<"\t|\t"<<P0;
	}
	else{
		x1++;
		y1++;
		P0=P0+2*dx-dy;
		cout<<"\t|\t"<<x0<<"\t|\t"<<y0<<"\t|\t"<<P0;
	}
	}
    rectangle(x0-15,y0-15,x1+10,y1+10);
    outtextxy(x0-12,y0-13,"OUTPUT");
	}
//	line(200,200,300,200);
    getch();
}
