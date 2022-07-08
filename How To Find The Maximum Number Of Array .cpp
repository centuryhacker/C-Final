/**
Find Maximum
*/

#include <iostream>

using namespace std;

int main()
{
    const int array_size = 10;
    int num[array_size];
    int i, maximum;

    for(i = 0; i < array_size;i++)
    {
        cout<<" Input the number is: ";
        cin>>num[i];
    }
    cout<<endl;

    maximum = num[0];

    for(i = 0; i < array_size; i++)
    {
        if(maximum < num[i])
        {
            maximum  = num[i];
        }
        }


    cout<<" Maximum number is : "<<maximum<<endl<<endl;

    return 0;
}
