#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
    initwindow(1080,720,"Rushal");
//    outtextxy(750,100,"Anime");
    readimagefile("E:\\Rushal\\OOP C++\\Devc++\\Graphics\\ainme.jpg",50,50,500,270);

    
    getch();
    closegraph();
    return 0;
}
