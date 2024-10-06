#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main(){
	int gd = DETECT, gm;
    initgraph(&gd, &gm,"");
    int size[20],height[20];
    int start_x=100,start_y=400;
    int mid_x=start_x+50,mid_y=start_y;
    int end_x=mid_x+50,end_y=start_y;
    int n;
    cout<<"enter the level of disk : ";
    cin>>n;
    char ch;
    //base line
    line (0,400,getmaxx(),400);

    int a=0;
    //three poles
    for(int i=n;i>0;i--){
    	size[i]=10*i;
    	height[i]=10*a;
//    	bar(x-10*i,y-10*a,x+20+10*i,y-9-10*a);
    	a++;
	}
	for(int i=n;i>0;i--){
	bar(start_x-size[i],start_y-height[i],start_x+20+size[i],start_y-9-height[i]);
	}
	
	int choice,sb=0,mb=n+1,eb=n+1;
    while(ch!='n'){
cout<<"from : ";
	cin>>choice;
	switch(choice){
		case 1:{
			sb++;
			cout<<"to : ";
			cin>>choice;
			switch(choice){
				case 2:{
					mb--;
					break;
				}
			}
			cleardevice();
			break;
		}
			
		case 2:{
		
			break;
		}
		
		case 3:{
			
			break;
		}
	}
	for(int i=n;i>sb;i--){
		bar(start_x-size[i],start_y-height[i],start_x+20+size[i],start_y-9-height[i]);
	}
	for(int i=4;i<mb;i++){
		bar(start_x-size[i],start_y-height[i],start_x+20+size[i],start_y-9-height[i]);
	}
	cout<<"wanna continue?\n";
	cin>>ch;
}
    getch();
}
