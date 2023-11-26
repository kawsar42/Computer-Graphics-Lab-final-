
#include <graphics.h>
#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

int main(void)
{
    int i,gd=DETECT,gm,errorcode;

    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    float x,y,x1,y1,x2,y2,dx,dy,m,b;


    cout<<"Enter the value of x1 and y1 : ";
    cin>>x1>>y1;

    cout<<"Enter the value of x2 and y2: ";
    cin>>x2>>y2;

    dx=(x2-x1);
    dy=(y2-y1);

    m=dy/dx;

    b=y1-m*x1;


        for(int i=x1;i<x2;i++){

            x1=x1+1;
            y1=m*x1+b;

            putpixel(x1,y1,10);
            delay(100);

        }

        getch();
        closegraph();

    return 0;
}



