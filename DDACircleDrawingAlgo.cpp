#include<graphics.h>
#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x,y,k;
    int gd=DETECT,gm,i,val,r;
    cout<<"Enter the radius of circle ";
    cin>>r;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    x1=r*cos(0);
    y1=r*sin(0);
    x=x1;
    y=y1;
    i=0;
    do
    {
        val=pow(2,i);
        i++;
    }while(val<r);
    k=1/pow(2,i-1);
    do
    {
        x2=x1+y1*k;
        y2=y1-k*x2;
        putpixel(200+x2,200+y2,15);
        x1=x2;
        y1=y2;
    }while((y1-y)<k||(x-x1)>k);
    delay(7000);
    return 0;
}
