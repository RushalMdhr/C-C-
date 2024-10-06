//#include<iostream>
//#include<graphics.h>
//#include<conio.h>
//
//using namespace std;
//
//int main(){
//	int gd=DETECT,gm;
//	initgraph(&gd,&gm,"");
//	
//	int x[2],y[2];
//	int i=0;
//	while(1){
//		
//		if(GetAsyncKeyState(VK_RBUTTON)){
//		cout<<mousex()<<"\t"<<mousey()<<endl;
//		x[i]=mousex();
//		y[i]=mousey();
//		line(x[0],y[0],x[1],y[1]);
//			if(i>=2){
//				i=0;
//			}	
//			i++;
//		}
//		else if(GetAsyncKeyState(VK_LBUTTON))	{
//			break;
//		}
//		delay(10);
//	}
//	
//	cleardevice();
//	
//	getch();
//}
