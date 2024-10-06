#include<iostream>
using namespace std;
#include<graphics.h>
#include<math.h>
#include<cmath>
int main(){
	int gd = DETECT, gm;
    initgraph(&gd, &gm,(char *)"");
    int n;
    int a,space=30,color=2,width,x1=30,y1=350,x2,y2;
    char name[10][20];
    int money[10],total=0;
    int i=0;
    float angle1=0,angle2;
    int x=250,y=200;
    char date[5];
    char ch;
cout<<"\n\t1.Bar diagram\n\t2.3dbar diagram\n\t3.Piechart\n\t6.Exit\nEnter your choice: ";
    	cin>>n;
    	switch(n){
//    		case 1:
//    		outtextxy(50,50,"bar diagram of students");
//    		settextstyle(0,1,1);
//    		outtextxy(15,250,"no of students");
//    		line(30,10,30,350);
//    		line(30,350,400,350);
//    		while(ch!='n')
//    		{
//    			cout<<"enter the level of the bar:";
//    			cin>>a;
//    			cout<<"enter the date:";
//    			cin>>date;
//    			setfillstyle(color,BROWN);
//    			color++;
//    			
//    			width=space+50;
//    			bar(30+space,350-a,width,350);
//    			x2=40+space;
//    			y2=350-a;
//    			setcolor(14);
//    			line(x1,y1,x2,y2);
//    			settextstyle(0,0,1);
//    			outtextxy(space+30,360,date);
//    			x1=x2;
//    			y1=y2;
//    			space+=40;
//    			cout<<"do you wanna add new bar y/n:";
//    			cin>>ch;
//    			cout<<endl;
//			}
//    			getch();
//				break;
//			
//			case 2:
//				outtextxy(50,50,"3dbar diagram of students");
//				settextstyle(0,1,1);
//				outtextxy(15,250,"no of students:");
//				
//				line(30,10,30,350);
//				line(30,350,400,350);
//				while(ch!='n')
//    		{
//    			cout<<"enter the level of the bar:";
//    			cin>>a;
//    			cout<<"enter the date:";
//    			cin>>date;
//    			setfillstyle(color,BROWN);
//    			color++;
//    			
//    			width=space+50;
//    			bar3d(30+space,350-a,width,350,10,1);
//    			x2=40+space;
//    			y2=350-a;
//    			setcolor(14);
//    			line(x1,y1,x2,y2);
//    			settextstyle(0,0,1);
//    			outtextxy(space+30,360,date);
//    			x1=x2;
//    			y1=y2;
//    			space+=40;
//    			cout<<"do you wanna add new bar y/n:";
//    			cin>>ch;
//    			cout<<endl;
//			}
//				getch();
//				break;
			
	case 3:{
		
	pieslice(250,200,0,360,100);

     while (ch != 'n' && i < 10) {
        cout << "Expenditure on: ";
        cin>>name[i];
        cout << "Expenditure: ";
        cin >> money[i];
        total += money[i];
        cout << money[i] << "\t" << total << endl;
        i++;
        cout << "Want to continue? (y/n): ";
        cin >> ch;
    }
    
    for (int j = 0; j < i; j++) {
		cout<<"\n\t"<<name[j]<<endl;
        cout << money[j] << "\t";
        angle2 +=(static_cast<float>(money[j]) / total) * 360;

        setfillstyle(color,BROWN);
        color++;
       	pieslice(250,200,angle1,angle2,100);
		cout<<angle1<<"\t"<<angle2<<endl;
		float thita;
		thita=(((angle2-angle1)/2))+angle1;
		cout<<"thita : "<<thita<<endl;
		if(thita<90){
				// Convert degrees to radians
			double radians = thita * (M_PI / 180.0);

        	outtextxy(x+cos(radians)*100,y-sin(radians)*100,name[j]);
		}
		else if(thita>90 && thita<=180){
			double radians = (180-thita) * (M_PI / 180.0);
			outtextxy(x-cos(radians)*100,y+sin(radians)*100,name[j]);
		}
		else if(thita>180){
			double radians = (360-thita) * (M_PI / 180.0);
			outtextxy(x+cos(radians)*100,y+sin(radians)*100,name[j]);
		}
        
        angle1=angle2;
    }

    	getch();
	break;
}

			case 4:
				exit(1);
				break;
			default:
				cout<<"invalid choice";
		
	}
}
