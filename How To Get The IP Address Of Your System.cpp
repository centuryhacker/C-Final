/**

IP Address of your system
*/
#include <iostream>
#include<string>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{
    string line;
    ifstream IPFile;
    int offset;
    char* search0 = "IPV4 Address. . . . . . . . . . . .";
    system("ipconfig > ip.txt");
    IPFile.open("ip.txt");

    if(IPFile.is_open())
    {
        while(!IPFile.eof())
        {
            getline(IPFile,line);
            if((offset = line.find(search0)) != string::npos)
            {
                line.erase(0,39);
                cout<<" IP Address :: " << line<<endl<<endl;
                IPFile.close();
            }

        }

    }
    system("pause");

    return 0;
}
