#include <graphics.h>
#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,gd=DETECT,gm;

    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    float x,y,x1,y1,x2,y2,dx,dy,m,c1,c2,p,step;


    cout<<"Enter the value of x1 and y1 : ";
    cin>>x1>>y1;

    cout<<"Enter the value of x2 and y2: ";
    cin>>x2>>y2;

    dx=(x2-x1);

    dy=(y2-y1);

    m=dy/dx;

    if(m<1)
    {
        c1=2*dy;

        c2=2*(dy-dx);

        p=c1-dx;

    }
    else
    {
        c1=2*dx;

        c2=2*(dx-dy);

        p=c1-dy;

    }
    while(x1<x2||y1<=y2)
    {

        putpixel(x1,y1,GREEN);
        if(m<1)
        {

            if(p<0)
            {
                x1=x1+1;
                y1=y1;
                p=p+c1;
            }
            else
            {
                x1=x1+1;
                y1=y1+1;
                p=p+c2;
            }
        }
        else
        {
            if(p<0)
            {
                y1=y1+1;
                x1=x1;
                p=p+c1;
            }
            else
            {
                y1=y1+1;
                x1=x1+1;
                p=p+c2;
            }
        }
        delay(100);
    }
    return 0;
}

