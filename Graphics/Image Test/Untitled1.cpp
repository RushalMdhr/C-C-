#include <iostream>
#include <graphics.h>
#include<conio.h>
using namespace std;

int main() {
   	initwindow(1360,763,"r1");
    char ch[100];
    	int i=0;
    	setfillstyle(1,BROWN);
    	rectangle(0,0,200,200);
    while(1){
    	cout<<"checking kbhit\n";
    	if(kbhit()){
    		ch[i]=getch();
    		i++;
    		outtextxy(100,100,ch);
		}
		cout<<"checking mouse\n";
		if(mousex() > 0 && mousex() < 400 && mousey() > 0 && mousey() < 400){
			while(mousex() > 0 && mousex() < 400 && mousey() > 0 && mousey() < 400){
				cout<<"click me \n";
				if(GetAsyncKeyState(VK_LBUTTON)){
					return 0;
				}
			}
		}
	}
}

