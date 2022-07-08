/*
How To Get The Size Of Physical RAM Of System In C++

*/

#include <iostream>
#define _WIN32_WINNT 0x0501
#include<winsock.h>

using namespace std;

int main()
{
    MEMORYSTATUSEX statex;
    statex.dwLength = sizeof (statex);
    GlobalMemoryStatusEx(&statex);

    cout<<"PHYSICAL RAM ::"<< (float)statex.ullTotalPhys / (1024 * 1024 * 1024) <<endl<<endl;



    return 0;
}
