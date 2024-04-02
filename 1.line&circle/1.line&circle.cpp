#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    //line
    line(5,5,100,100);
    //circle
    circle(500 ,60,50);
    getch();
}
