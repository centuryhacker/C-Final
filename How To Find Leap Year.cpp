/**
Leap year math
*/

#include <iostream>

using namespace std;

int main()
{
    int year;

    cout<<"Input the Year: ";
    cin>>year;
    cout<<endl;

    if( year % 4 == 0)
    {
        cout<<"This is a leap year"<<endl<<endl;

    }

    else
    {
        cout<<"This is not leap year"<<endl<<endl;

    }




    return 0;
}
