#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(600,500,"rushal");

    // Load and display the image
    readimagefile("anime.jpg", 100, 100, 400, 300);

    // Wait for a key press before closing the window
    getch();
    closegraph();
    
    return 0;
}

