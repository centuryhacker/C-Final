/**
How To Find Sum Of Elements Of Array In C++
*/

#include <iostream>

using namespace std;

int main()
{
    ///Declare variables
    const int array_size = 10;
    int num[array_size];
    int sum = 0;

    ///Inputs values in each element in an array based on use input
    for(int i = 0; i < array_size;i++)
    {
        cout<<"Input the number: ";
        cin>>num[i];

        sum = sum + num[i];
    }
    cout<<endl;

    ///loop that sums up from array

    for(int i = 0;i < array_size;i++)
    {
        cout<<num[i]<<endl;
    }
    cout<<endl<<endl;

    cout<<"Sum of input numbers:: "<<sum<<endl<<endl;




    return 0;
}
