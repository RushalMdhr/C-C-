//#include <iostream>
//#include <graphics.h>
//#include <stdlib.h>
//#include<time.h>
//using namespace std;
//
//int main() {
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
//    int x=100,y=getmaxy()-50;
//    int z1=200,z2=0;
//
//while(1){
//    int    y1=0,y2=y1-30;
//    z2=0;
//
//    srand(time(NULL));
//    int max=getmaxx();
//    int rand_x1[10],rand_x2[10];
//    for(int i=0;i<10;i++){
//        rand_x1[i] = rand() % (max + 1);
//          rand_x2[i] = rand_x1[i]+50;
//    }
//        while(y2<=getmaxy()){
//        cleardevice();
//        for(int i=0;i<10;i++){
//        bar(rand_x1[i],y1,rand_x2[i],y2);
//        
//    }
//	setfillstyle(1,WHITE);
//    bar(z1,z2,z1+10,z2+30);
//	z2+=15;
//        y1=y1+15;
//        y2=y2+15;
//    setfillstyle(1,4);
//    bar(x-1,y-10,x+21,y+30);
//    setfillstyle(1,12);
//    bar(x,y,x+20,y+30);
//    setfillstyle(1,11);
//    bar(x+1,y+1,x+18,y+10);
//    bar(x+1,y+20,x+18,y+29);
//    setfillstyle(1,8);
//    bar(x-3,y+3,x,y+9);
//	bar(x+20,y+3,x+23,y+9);
//    bar(x-3,y+23,x,y+29);
//	bar(x+20,y+23,x+23,y+29);
//    if(kbhit()){
//        char ch=getch();
//
//        if(ch=='a'){
//            x=x-15;
//        }
//        else if(ch=='d'){
//            x=x+15;
//        }
//        
//    }
////    for(int i=0;i<10;i++){
////    	if(x>=rand_x1[i] && x<=rand_x2[i] && y>=y1 && y<=y2){
////    		outtextxy(150,150,"___GAME OVER___");
////    		delay(1000);
////    		closegraph();
////		}
////    }
//	
//    delay(50);
//    }
//
//}
//    closegraph();
//    return 0;
//}
