//#include<iostream>
//#include<graphics.h>
//#include<conio.h>
//
//using namespace std;
//
//int main(){
//    int gd=DETECT,gm;
//    initgraph(&gd,&gm,"");
//    
//    
//    int x1,y1,x2,y2;
//	int page=0;
//    int imagex=100,imagey=100;
//    
//    readimagefile("seen.jpg",imagex,imagey,imagex+100,imagey+100);
//    
//    while(1){
//        if(GetAsyncKeyState(VK_RBUTTON)){
//            cleardevice();
////            break;
//        }
//        
//        else if(GetAsyncKeyState(VK_LBUTTON))    {
//            y1=mousey();
//        while(GetAsyncKeyState(VK_LBUTTON)){
//        	setactivepage(page);
//        	setvisualpage(1-page);
//            cleardevice();
//            readimagefile("seen.jpg",imagex,imagey,imagex+100,imagey+100);
//            y2=mousey();
//            imagey=imagey+y2-y1;
//            y1=mousey();
//            page=1-page;
//        }
//    }
//}
//    getch();
//}
