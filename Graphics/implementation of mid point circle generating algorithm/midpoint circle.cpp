#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    float r=100;
    int xc=210,yc=310,x,y,p;
    x=0;
    y=r;
    p=1-r;
    while(x<y)
    {
        putpixel(xc+x,yc+y,1);
        putpixel(xc-x,yc+y,2);
        putpixel(xc+x,yc-y,3);
        putpixel(xc-x,yc-y,4);
        putpixel(xc+y,yc+x,5);
        putpixel(xc-y,yc+x,6);
        putpixel(xc+y,yc-x,7);
        putpixel(xc-y,yc-x,8);
        x++;
        if(p<0)
        {
            p=p+2*x+1;
        }
        else
        {
            y--;
            p=p+2*(x-y)+1;
        }
        putpixel(xc+x,yc+y,1);
        putpixel(xc-x,yc+y,2);
        putpixel(xc+x,yc-y,3);
        putpixel(xc-x,yc-y,4);
        putpixel(xc+y,yc+x,5);
        putpixel(xc-y,yc+x,6);
        putpixel(xc+y,yc-x,7);
        putpixel(xc-y,yc-x,8);

}
line(xc-x,yc-y,x+xc,y+yc);
line(xc-x,yc+y,x+xc,-y+yc);
line(xc,r+yc,xc,yc-r);
line(xc-r,yc,xc+r,yc);
outtextxy(130,450,"fig:mid point circle drawing algorithm");
outtextxy(xc+x+26,yc+y-40,"(x,-y)");
outtextxy(xc-x+108,yc+y+26,"(y,-x)");
outtextxy(xc-x-10,yc+y+20,"(-x,-y)");
outtextxy(xc-x-60,yc+y-40,"(-y,-x)");
outtextxy(xc-x-60,yc+y-120,"(-y,x)");
outtextxy(xc-x-8,yc+y-178,"(-x,y)");
outtextxy(xc-x+104,yc+y-182,"(x,y)");
outtextxy(xc-x+170,yc+y-123,"(y,x)");
outtextxy(xc-x+140,yc+y-160,"(y=x)");
outtextxy(xc-x-40,yc+y-150,"(y=-x)");
outtextxy(xc-x+180,yc-6,"(r,0)");
outtextxy(xc-6,yc-y-52,"(0,r)");

		putpixel(xc+x,yc+y,1);
        putpixel(xc-x,yc+y,2);
        putpixel(xc+x,yc-y,3);
        putpixel(xc-x,yc-y,4);
        putpixel(xc+y,yc+x,5);
        putpixel(xc-y,yc+x,6);
        putpixel(xc+y,yc-x,7);
        putpixel(xc-y,yc-x,8);
        getch();
    }
