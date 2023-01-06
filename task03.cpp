#include<iostream>
#include<cmath>
using namespace std;
double taxcollector();
double final_price,price,tax,result;
char x;
main()
{
    double y;
    cout<<"Enter the item price: ";
    cin>>price;
    cout<<"Enter the item code in capital letters: ";
    cin>>x;
    y=taxcollector();
    cout<<"The final price of the vehicle of code "<<x <<" after adding the tax is "<<y;
    
}
double taxcollector()
{
    if(x == 'M')
    { 
        tax=(price*6)/100;

    }
    if(x=='E')
    {
    tax=(price*8)/100;
    }
    if(x=='S')
    {
    tax=(price*10)/100;
    }
    if(x=='V')
    {
    tax=(price*12)/100;
    }
    if(x=='T')
    {
    tax=(price*15)/100;
    }
    final_price=tax+price;
    return final_price;
}