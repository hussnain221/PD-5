#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
float pyramidVolume(string unit);

float length,width,height;
main()
{
    string unit;
    cout<<"Enter the length of pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of pyramid (in meters): ";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>unit;

    cout<<"The volume of pyramid is: ";
    cout<<fixed<<setprecision[6];
    cout<<pyramidVolume(unit);
    cout<<" cubic "<<unit;

    return 0;
}

float pyramidVolume(string unit)
{
    float volume;
    if(unit=="millimeters")
    {
        volume=((length*width*height)/3)*1000000000;
        return volume;
    }

    if(unit=="centimeters")
    {
        volume=(length*width*height)/3*1000000;
        return volume;
    }

    if(unit=="meters")
    {
        volume=(length*width*height)/3;
        return volume;
    }

    if(unit=="kilometers")
    {
        volume=((length*width*height)/3)/1000000000;
        return volume;
    }
}