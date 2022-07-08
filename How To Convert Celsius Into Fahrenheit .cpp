/*
How To Convert Celsius Into Fahrenheit In C++

*/

#include <iostream>

using namespace std;

int main()
{
    double Centigrade = 0.0;
    double Fahrenheit = 0.0;

    cout<<"Input temperature in centigrade: ";
    cin>>Centigrade;
    cout<<endl;

    Fahrenheit = 32 + (Centigrade * 180.0 / 100) ;
    cout<<" Temperature in Fahrenheit ::"<<Fahrenheit<<endl<<endl;


    return 0;
}
