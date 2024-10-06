#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main(){
	int gd = DETECT, gm;
    initgraph(&gd, &gm,"");		 //	"c://tc//bgi" for turbo c
    int n;
    int a,space=30,color=1,width,x1=30,y1=350,x2,y2;
    char ch,date[4];
    	cout<<"\n\t1.Bar Graph\n\t2.3D Bar Graph\n\t3.Pie Chart\n\t4.Exit\nEnter your choice: ";
    	cin>>n;
    	switch(n){
    		case 1:{
    			line(30,10,30,350);
    			line(30,350,400,350);
    			while(ch!='n'){
    				cout<<"enter the level of bar: ";
    				cin>>a;
//    				cout<<"enter the date: ";
//    				cin>>date;
    				setfillstyle(color,YELLOW);
    				color++;
    				width=space+30;
    				bar(space+30,350-a,width,350);
    				space+=30;
    				cout<<"do you want to continue ? y/n: ";
    				cin>>ch;
    				cout<<endl;
				}
    			getch();
				break;
			}
			default:
				cout<<"invalid choice";
		}
}

