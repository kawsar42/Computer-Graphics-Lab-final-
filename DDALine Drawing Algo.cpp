#include<iostream>
#include <graphics.h>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
    int i,gd=DETECT,gm;

    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    float x,y,x1,y1,x2,y2,dx,dy,m,step;


    cout<<"Enter the value of x1 and y1 : ";
    cin>>x1>>y1;

    cout<<"Enter the value of x2 and y2: ";
    cin>>x2>>y2;

    dx=(x2-x1);
    dy=(y2-y1);

    m=dy/dx;


    if(m<=1){
        for(int i=x1;i<x2;i++){

        x1=x1+1;
        y1=y1+m;
        putpixel(x1,y1,10);

        delay(100);
        }

    }
    else{
        for(int i=y1;i<y2;i++){

        x1=x1+(1/m);
        y1=y1+1;
        putpixel(x1,y1,10);

        delay(100);
        }

    }
        getch();
        closegraph();
    return 0;
}
