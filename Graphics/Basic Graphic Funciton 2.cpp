//#include<iostream>
//#include<graphics.h>
//#include<conio.h>
//using namespace std;
//
//int main(){
//	int gd = DETECT, gm;
//    initgraph(&gd, &gm,"");		 //	"c://tc//bgi" for turbo c
//    int n;
//    int a,b,c,d,e,f;
//    	cout<<"\n\t1.Bar and Rectangle\n\t2.Bar3d\n\t3.Arc\n\t4.Pieslice\n\t5.Bagchaal board\nEnter your choice: ";
//    	cin>>n;
//    	switch(n){
//    		case 1:{
//    			cout<<"enter the coordinates for bar: ";
//    			cin>>a>>b>>c>>d;
//    			bar(a,b,c,d);			//Bar
//    			cout<<"enter the coordinates for rectangle: ";
//    			cin>>a>>b>>c>>d;
//    			rectangle(a,b,c,d);		//rectangle
//    			getch();
//				break;
//			}
//			case 2:{
//				cout<<"enter the coordinates for bar: ";
//				cin>>a>>b>>c>>d;
//				cout<<"enter the depth: ";
//				cin>>e;
//				cout<<"enter open lead 0? or closed 1";
//				cin>>f;
//				setcolor(5);
//				setfillstyle(2,BROWN);
//				bar3d(a,b,c,d,e,f);		//3d bar/ cube
//				getch();
//				break;
//			}
//			case 3:{
//				cout<<"enter the center: ";
//				cin>>a>>b;
//				cout<<"enter the angle: ";
//				cin>>c>>d;
//				cout<<"enter the radius";
//				cin>>e;
//				arc(a,b,c,d,e);		//arc
//				getch();
//				break;
//			}
//			case 4:{
//				cout<<"enter the center: ";
//				cin>>a>>b;
//				cout<<"enter the angle: ";
//				cin>>c>>d;
//				cout<<"enter the radius";
//				cin>>e;
//				cout<<"enter the Outline Color: ";
//				cin>>f;
//				setcolor(f);
//				cout<<"enter the filling line numbers: ";
//				int g;
//				char name[10];
//				
//				cin>>g;
//				cout<<"enter Some Text ";
//				cin>>name;
//				setfillstyle(g,BROWN);
//				outtextxy(200,200,name);
//				pieslice(a,b,c,d,e);		//pieslice
//				getch();
//				break;
//			}
//			case 5:{
//				cin>>a>>b;
//				setfillstyle(9,12);
//				setcolor(13);
//				settextstyle(GOTHIC_FONT,HORIZ_DIR,1);
//				outtextxy(0,b+50,"BAGCHAAL BOARD");
//				
//				rectangle(0,0,a,b);
//				
//				for(int i=1;i<4;i++){
//					//vertical
//					line((a/4)*i,0,(a/4)*i,b);
//					//horizontal
//					line(0,(b/4)*i,a,(b/4)*i);
//				}
//				for(int i=0;i<3;i++){				
////					//slanted
//					line((a/2)*i,0,a,b-(b/2)*i);
//					line((a/2)*i,0,0,(b/2)*i);
//				}
//				line(0,b/2,a/2,b);
//				line(a,b/2,a/2,b);
//
//				getch();
//			}
//			default:
//				cout<<"invalid choice";
//		}
//}

