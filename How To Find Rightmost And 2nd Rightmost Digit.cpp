/*
How To Find Rightmost And 2nd Rightmost Digit In C++

*/

#include <iostream>

using namespace std;

int main()
{
    int integer;
    int rightmost;
    int second_rightmost;

    cout<<"Please input integer : ";
    cin>>integer;
    cout<<endl;

    rightmost = integer % 10;
    second_rightmost = integer / 10 % 10;

    cout<<" 1 rightmost : "<<rightmost<<endl;
    cout<<" 2nd rightmost : "<<second_rightmost<<endl<<endl;

    return 0;
}
