/**
Find Minimum
*/

#include <iostream>

using namespace std;

int main()
{
    const int array_size = 10;
    int num[array_size];
    int i, minimum;

    for(i = 0; i < array_size;i++)
    {
        cout<<" Input the number is: ";
        cin>>num[i];
    }
    cout<<endl;

    minimum = num[0];

    for(i = 0; i < array_size; i++)
    {
        if(minimum > num[i])
        {
            minimum  = num[i];
        }
        }


    cout<<" Minimum number is : "<<minimum<<endl<<endl;

    return 0;
}
