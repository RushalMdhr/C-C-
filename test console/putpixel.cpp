ConsoleApp_cpp_graph.txt

#include <graphics.h>
#include <conio.h> 
main(){   
int gd = DETECT, gm;    
initgraph(&gd, &gm, "C:\\TC\\BGI");        
putpixel(100, 100, RED);       
getch();   closegraph();   
return 0;
}
