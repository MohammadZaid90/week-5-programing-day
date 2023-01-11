#include<iostream>
using namespace std;

float TaxCalculator(float price,char v_c);

int main()
{
    float price;
    char v_c;

    cout<<"Enter the price of the vehicle: ";
    cin>>price;

    cout<<"Enter the vehicle code: ";
    cin>>v_c;

    float calculator = TaxCalculator(price,v_c);

    float f_p = price + calculator;
    cout<<"The price of vehicle type "<<v_c<<" is "<<f_p;
 
}

float TaxCalculator(float price,char v_c)
{
    if(v_c == 'M')
    {
        float taxAmount = (price * 6)/100;
        return taxAmount;
    }

        if(v_c == 'E')
    {
        float taxAmount = (price * 8)/100;
        return taxAmount;
    }

        if(v_c == 'S')
    {
        float taxAmount = (price * 10)/100;
        return taxAmount;
    }

        if(v_c == 'V')
    {
        float taxAmount = (price * 12)/100;
        return taxAmount;
    }

        if(v_c == 'T')
    {
        float taxAmount = (price * 15)/100;
        return taxAmount;
    }
}