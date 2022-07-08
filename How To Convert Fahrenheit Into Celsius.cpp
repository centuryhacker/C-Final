/*
How To Convert Fahrenheit Into Celsius In C++
*/

#include <iostream>

using namespace std;

int main()
{
    double Fahrenheit = 0.0;
    double Centigrade = 0.0;

    cout<<" Input temperature in fahrenheit "<<endl;
    cin>>Fahrenheit;
    cout<<endl;

    Centigrade = (Fahrenheit - 32) * 100.0 / 180.0;

    cout<<" Temperature in centigrade ::"<<Centigrade<<endl<<endl;


    return 0;
}
