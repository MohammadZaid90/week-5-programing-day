#include<iostream>
using namespace std;

float pyramidVolume(int l,int w,int h,string unit);

int main()
{
    int l,w,h;
    string unit;

    cout<<"Enter the length: ";
    cin>>l;
    
    cout<<"Enter the width: ";
    cin>>w;

    cout<<"Enter the height: ";
    cin>>h;

    cout<<"Enter the unit which you want: ";
    cin>>unit;

    float a = pyramidVolume(l,w,h,unit);

    cout<<"The volume of pyramid is: "<<a;
}

float pyramidVolume(int l,int w,int h,string unit)
{
    int v = (l*w*h)/3;

    if(unit == "centimeter")
    {
        v = v * 1000000;
        return v;
    }

    if(unit == "kilometer")
    {
        v = v * 1000000000;
        return v;
    }

    if(unit == "milimeter")
    {
        v = v * 1000;
        return v;
    }
}