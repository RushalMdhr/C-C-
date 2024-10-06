//#include<iostream>
//#include <graphics.h>
//#include<conio.h>
//using namespace std;
//
//int main() {
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm,"");
//    int n;
//    int a,b,c,d,e,f;
//
////    while(n!=0){
//    cout<<"Enter Your Choice:\n\t1.Point\n\t2.Line\n\t3.Square\n\t4.Rectangle\n\t5. Triangle\n\t6. Ellipse\n\t7. Circle\n\t8.Clear Screen\n";
//    cin>>n;
//    switch(n){
//    	case 1:{
//    		cin>>a>>b;
//    		putpixel(a,b,YELLOW);	//ponit
//    		getch();
//			break;
//		}
//		case 2:{
//			cin>>a>>b>>c>>d;
//			line(a,b,c,d);	//line
//			getch();
//			break;
//		}
//		case 3:{
//			cin>>a>>b;
//			rectangle(a,a,b,b);	//square
//			getch();
//			break;
//		}
//		case 4:{
//			cin>>a>>b>>c>>d;
//			rectangle(a,b,c,d);	//rectangle
//			getch();
//			break;
//		}
//		case 5:{
//			cin>>a>>b>>c>>d>>e>>f;
//			line(a,b,c,d);
//			line(c,d,e,f);	//triangle
//			line(e,f,a,b);
//			getch();
//			break;
//		}
//		case 6:{
//			cout<<"enter the center co ordinates of the ellipse (x,y): ";
//			cin>>a>>b;
//			cout<<"enter the horizontal radius of the ellipse: ";
//			cin>>c;
//			cout<<"enter the horizontal radius of the ellipse: ";
//			cin>>d;
//			ellipse(a,b,0,360,c,d);
//			getch();
//			break;
//		}
//		case 7:{
//			cout<<"enter the center of the circle: ";
//			cin>>a>>b;
//			cout<<"entere the radius of the circle: ";
//			cin>>c;
//			circle(a,b,c);
//			getch();
//			break;
//		}
//		case 8:{
//			system("CLS");
//			break;
//		}
//	}
//
//}
