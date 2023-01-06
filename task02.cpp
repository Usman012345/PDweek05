#include<iostream>
#include<cmath>
using namespace std;
double calculate();
double length,width,height,volume,result;
string unit;
main()
{
    cout<<"Enter the lenght of pyramid: ";
    cin>>length;
    cout<<"Enter the height of the pyramid: ";
    cin>>height;
    cout<<"Enter the width of the pyramid: ";
    cin>>width;
    cout<<"Enter the unit: ";
    cin>>unit;
    result=calculate();
    cout<<"The volume of the pyramid is: "<<result <<" "<<unit;
}
double calculate()
{
    volume=(length*width*height)/3;
    if(unit=="kilometers")
    {
        volume=volume/1000000000;
    }
    if(unit=="centimeters")
    {
        volume=volume*1000000;
    }
    if(unit=="millimeters") 
    {
        volume=volume*1000000000;
    }
    return volume;
}
