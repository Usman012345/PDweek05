#include<iostream>
#include<cmath>
using namespace std;
int project(int,int);
int time_needed,time,time_provided,workers;
main()
{
    cout<<"Enter the time needed: ";
    cin>>time_needed;
    cout<<"Enter the time provided: ";
    cin>>time_provided;
    cout<<"Enter the no of workers: ";
    cin>>workers;
    project(time_needed,time_provided);

}
int project(int,int)
{
    int z,time_wasted;
    time_provided=time_provided*10;
    time_wasted=time_provided*(10/100);
    time=time_provided*workers;
    if(time_needed<=time)
    {
        z=time-time_needed;
        cout<<"Yes!we have " <<z <<" hours more. The time provided is enough ";
    }
    if(time_needed>time)
    {
        z=time_needed-time;
        cout<<"No!we need "<<z <<" hours more.The time is not enough.";
    }
}