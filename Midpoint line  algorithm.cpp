#include <graphics.h>
#include <iostream>
using namespace std;

void drawMidPointLine(int X0, int Y0, int Xn, int Yn) {
    int DX = Xn - X0;
    int DY = Yn - Y0;
    int D = 2 * DY - DX;
    int Dnew;
    int x = X0, y = Y0;
    
    putpixel(x, y, BLACK);
    
    while (x < Xn) {
        if (D < 0) {
            Dnew = D + 2 * DY;
            x++;
        } else {
            Dnew = D + 2 * (DY - DX);
            x++;
            y++;
        }
        D = Dnew;
        putpixel(x, y, BLACK);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    
     setbkcolor(WHITE); // Set background color
    cleardevice(); 
    int X0 = 200, Y0 = 200, Xn = 300, Yn = 400; 
    drawMidPointLine( X0, Y0,  Xn,  Yn);
    
    getch();
    closegraph();
    return 0;
}

