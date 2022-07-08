/*****************************************************************************
The program then outputs the elapsed time in hours, minutes,
 and seconds. (For example, if the elapsed time is 9630 seconds,
 then the output is 2:40:30.)

 *****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int time, hour, minute, second, remainder;


    cout << "Please enter the number of seconds elapsed: ";
    cin >> time;
    cout<<endl;

    ///calculation
    hour = time/3600;
    remainder = time % 3600;
    minute = remainder / 60;
    second = remainder % 60;

    ///output
    cout << hour << ":" << minute << ":" << second << endl;
    return 0;
}
