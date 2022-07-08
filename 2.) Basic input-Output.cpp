#include <fstream>
#include <iostream>
#include <string>

using namespace std;


/*
// Cpp program to redirect cout to a file
*/
void reDirectCoutToAFile()
{
    //#fstream
    //#iosteam
    //#string
    fstream file;
    file.open("cout.txt", ios::out);
    string line;

    // Backup streambuffers of  cout
    streambuf* stream_buffer_cout = cout.rdbuf();
    streambuf* stream_buffer_cin = cin.rdbuf();

    // Get the streambuffer of the file
    streambuf* stream_buffer_file = file.rdbuf();

    // Redirect cout to file
    cout.rdbuf(stream_buffer_file);

    cout << "This line written to file" << endl;

    // Redirect cout back to screen
    cout.rdbuf(stream_buffer_cout);
    cout << "This line is written to screen" << endl;

    file.close();

    /*
    Output;
    This line is written to screen
    Contents of file cout.txt:
    This line written to file
    */

}

/*
    sampleCharArrayPrintGeeksForGeeks(); //void sample Char Array Print Geeks For Geeks.
    (sample) variable  and "A computer science portal."

*/
void sampleCharArrayPrintGeeksForGeeks()
{
    char sample[] = "GeeksforGeeks";

    cout << sample << " - A computer science portal for geeks";

    /*
    Output:
    GeeksforGeeks - A computer science portal for geeks

    */
}
void age()
{
    int age;

    cout << "Enter your age:";
    cin >> age;
    cout << "\nYour age is: " << age;


  /*
Input:
18

Output:

Enter your age:
Your age is: 18
*/
}

/*
Clog and cerr (to print out)
*/
void clogAndCerr()
{
        cerr << "An error occurred";
        clog << "An error occurred";



}

int main()
{
    reDirectCoutToAFile();
    sampleCharArrayPrintGeeksForGeeks(); //void sample Char Array Print Geeks For Geeks. (sample) variable  and "A computer science portal."
    age(); //Enter age, Your is:
    clogAndCerr();





    return 0;
}

