#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
//int gd=DETECT,gm;
//initgraph(&gd,&gm,"");
initwindow(640,480,"rushal");
int mx,my;
mx=460;
my=460;
line(mx/2,0,mx/2,my); //vertical
line(0,my/2,mx,my/2); //horizontal
line(0,0,mx,my); //principal diagonal
line(mx,0,0,my); //diagonal
//triangle
line(mx/2+75,my/2-25,mx/2+125,my/2-25);
line(mx/2+125,my/2-25,mx/2+125,my/2-75);
line(mx/2+75,my/2-25,mx/2+125,my/2-75);
outtextxy(mx/2+130,my/2-50,"Original");
//x-axis
line(mx/2+75,my/2+25,mx/2+125,my/2+25);
line(mx/2+125,my/2+25,mx/2+125,my/2+75);
line(mx/2+75,my/2+25,mx/2+125,my/2+75);
outtextxy(mx/2+130,my/2+50,"X-Axix");
//y-axis
line(mx/2-75,my/2-25,mx/2-125,my/2-25);
line(mx/2-125,my/2-25,mx/2-125,my/2-75);
line(mx/2-75,my/2-25,mx/2-125,my/2-75);
outtextxy(mx/2-200,my/2-50,"Y-Axis");
//diagnoal
line(mx/2-75,my/2+25,mx/2-125,my/2+25);
line(mx/2-125,my/2+25,mx/2-125,my/2+75);
line(mx/2-75,my/2+25,mx/2-125,my/2+75);
outtextxy(mx/2-200,my/2+25,"Diagonal");
//y=x
line(mx/2+25,my/2-75,mx/2+25,my/2-125);
line(mx/2+25,my/2-125,mx/2+75,my/2-125);
line(mx/2+25,my/2-75,mx/2+75,my/2-125);
outtextxy(mx/2+30,my/2-140-5,"Y=X");
//-y=-x
line(mx/2-25,my/2+75,mx/2-25,my/2+125);
line(mx/2-25,my/2+125,mx/2-75,my/2+125);
line(mx/2-25,my/2+75,mx/2-75,my/2+125);
outtextxy(mx/2-50,my/2+140,"-Y=-X");
// -y=x
line(mx/2+25,my/2+75,mx/2+25,my/2+125);
line(mx/2+25,my/2+125,mx/2+75,my/2+125);
line(mx/2+25,my/2+75,mx/2+75,my/2+125);
outtextxy(mx/2+30,my/2+140,"-Y=X");
// y=-x
line(mx/2-25,my/2-75,mx/2-25,my/2-125);
line(mx/2-25,my/2-125,mx/2-75,my/2-125);
line(mx/2-25,my/2-75,mx/2-75,my/2-125);
outtextxy(mx/2-40,my/2-140-5,"Y=-X");
getch();
}
