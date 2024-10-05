#include<iostream>
using namespace std;
float taxCalculator(char type, float price);

main()
{
    char type;
    float price;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is: $";
    cout<<taxCalculator(type,price);
}

float taxCalculator(char type, float price)
{
    float tax,total;
    if(type=='M')
    {
        tax=price*(0.06);
        total=price+tax;
        return total;
    }

    if(type=='E')
    {
        tax=price*(0.08);
        total=price+tax;
        return total;
    }

    if(type=='S')
    {
        tax=price*(0.1);
        total=price+tax;
        return total;
    }

    if(type=='V')
    {
        tax=price*(0.12);
        total=price+tax;
        return total;
    }

    if(type=='T')
    {
        tax=price*(0.15);
        total=price+tax;
        return total;
    }
}