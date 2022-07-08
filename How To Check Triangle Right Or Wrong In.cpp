/**
Write a program to find out the triangle is valid or not.
*/

#include <iostream>

using namespace std;

int main()
{
    float a, b, c, angle;

    cout<<" Input Length of Side of A: ";
    cin>>a;

    cout<<"Input Length of Side of B:";
    cin>>b;

    cout<<"Input Length of Side of C:";
    cin>>c;

    angle = a + b + c;

    if(angle == 180)
    {
        cout<<" This is a valid triangle "<<endl;
    }
    else
    {
        cout<<"This is an invalid triangle "<<endl;
    }





    return 0;
}
