#include<iostream>
#include <limits.h>



using namespace std;


/**
Following is the example, which will produce correct size of various data types on your computer.

*/
void correctSizeOfVariousData()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;

    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;

    cout << "Size of double : " << sizeof(double) << endl;

    /*
    Output
    Size of char : 1
    Size of int : 4
    Size of long : 8
    Size of float : 4
    Size of double : 8

    */
}


/**
 C++ program to sizes of data types
*/

void SizeDataTypes()
{
    //#include <limits.h>
    cout << "Size of char : " << sizeof(char) << " byte"
         << endl;

    cout << "char minimum value: " << CHAR_MIN << endl;


    cout << "char maximum value: " << CHAR_MAX << endl;


    cout << "Size of int : " << sizeof(int) << " bytes"
         << endl;

    cout << "Size of short int : " << sizeof(short int)
         << " bytes" << endl;

    cout << "Size of long int : " << sizeof(long int)
         << " bytes" << endl;

    cout << "Size of signed long int : "
         << sizeof(signed long int) << " bytes" << endl;

    cout << "Size of unsigned long int : "
         << sizeof(unsigned long int) << " bytes" << endl;

    cout << "Size of float : " << sizeof(float) << " bytes"
         << endl;

    cout << "Size of double : " << sizeof(double)
         << " bytes" << endl;

    cout << "Size of wchar_t : " << sizeof(wchar_t)
         << " bytes" << endl;

    /*
    Output:

    Size of char : 1 byte
    Size of int : 4 bytes
    Size of short int : 2 bytes
    Size of long int : 8 bytes
    Size of signed long int : 8 bytes
    Size of unsigned long int : 8 bytes
    Size of float : 4 bytes
    Size of double : 8 bytes
    Size of wchar_t : 4 bytes

    */

}

/**
Variables in C++
*/

void variable()
{
    // this is declaration of variable a
    int a;
    // this is initialisation of a
    a = 10;
    // this is definition = declaration + initialisation
    int b = 20;

    // declaration and definition
    // of variable 'a123'
    char a123 = 'a';

    // This is also both declaration and definition
    // as 'c' is allocated memory and
    // assigned some garbage value.
    float c;

    // multiple declarations and definitions
    int _c, _d45, e;

    // Let us print a variable
    cout << a123 << endl;

    /*
    Output:
    a
    */
    /**
    // C++ program to illustrate need of loops
    */
}
void printOutLoops()
{
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
    cout << "Hello World\n";
}
/* Output
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World

*/


/**
    C++ program to illustrate for loop
*/
void illustrateLoop()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Hello World\n";
    }
    /*
    Output:
    Hello World
    Hello World
    Hello World
    Hello World
    Hello World
    Hello World
    Hello World
    Hello World
    Hello World
    Hello World
    */
}

/**
// C++ program to illustrate do-while loop

*/

void illustrateDoLoop()
{
    int i = 2; // Initialization expression

    do
    {
        // loop body
        cout << "Hello World\n";

        // update expression
        i++;

    }
    while (i < 1);      // test expression
    /*
    Output:
    Hello World


    */
}

/**
// C++ program to demonstrate infinite loops
// using for and while
// Uncomment the  sections to see the output

*/
void forLoopwhileLoop()
{
    int i;

    // This is an infinite for loop as the condition
    // expression is blank
    for ( ; ; )
    {
        cout << "This loop will run forever.\n";
    }

    // This is an infinite for loop as the condition
    // given in while loop will keep repeating infinitely
    /*
    while (i != 0)
    {
        i-- ;
        cout << "This loop will run forever.\n";
    }
    */

    // This is an infinite for loop as the condition
    // given in while loop is "true"
    /*
    while (true)
    {
        cout << "This loop will run forever.\n";
    }
    */



    /*
    while (1)
    cout << "This loop will run forever.\n";
    */

    /**
    Output:
    This loop will run forever.
    This loop will run forever.
    */
}

/**
// C++ program to illustrate if-else statement

*/

void ifElsestatement()
{
    int i = 20;

    if (i < 15)
        cout<<"i is smaller than 15";
    else
        cout<<"i is greater than 15";

    /**
    Output:
    i is greater than 15


    */


    /*
    // C++ program to illustrate nested-if statement

    */
}
void  nestedIfstatement()
{
    int i;

    if ( i == 10)
    {
        // First if statement
        if (i < 15)
            cout<<"i is smaller than 15\n";

        // Nested - if statement
        // Will only be executed if statement above
        // is true
        if (i < 12)
            cout<<"i is smaller than 12 too\n";
        else
            cout<<"i is greater than 15";
    }

    /**
    Output:
    i is smaller than 15
    i is smaller than 12 too
    */
}
/*
// C++ program to illustrate if-else-if ladder

*/
void nestedIfRestatement()
{
    int i = 20;

    if (i == 10)
        cout<<"i is 10";
    else if (i == 15)
        cout<<"i is 15";
    else if (i == 20)
        cout<<"i is 20";
    else
        cout<<"i is not present";

    /**
    Output:
    i is 20
    */

}

/*
// CPP program to illustrate
// Linear Search
*/
void findElement(int arr[], int size, int key)
{
    // loop to traverse array and search for key
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position: " << (i + 1);
            break;
        }
    }
}



/*
Output:
Element found at position: 3

*/
void loopTo10()
{
    // loop from 1 to 10
    for (int i = 1; i <= 10; i++)
    {

        // If i is equals to 6,
        // continue to next iteration
        // without printing
        if (i == 6)
            continue;

        else
            // otherwise print the value of i
            cout << i << " ";
    }

    /*
    Output:
    1 2 3 4 5 7 8 9 10

    */

}

int main()
{
    correctSizeOfVariousData(); //Following is the example, which will produce correct size of various data types on your computer.
    SizeDataTypes();// C++ program to sizes of data types

    variable();//Variables in C++
    illustrateLoop(); //illustrateLoop with 'Hello World' times.
    illustrateDoLoop();//C++ program to illustrate do-while loop. "Hello World'
    forLoopwhileLoop(); //infinite for loop, infinite while loop
    ifElsestatement();  //If statement 10:  ("10 is less than 15"), else: "I am not in if"
    nestedIfstatement();// C++ program to illustrate nested-if statement. Smaller than 15 and greater than 15
    nestedIfRestatement(); //C++ program to illustrate if-else-if ladder. 15, 20, else it's not present

    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = 6; // no of elements
    int key = 3; // key to be searched

    // Calling function to find the key
    findElement(arr, n, key);//// CPP program to illustrate. Linear Search.

    loopTo10();// For Loop from 1 to 10. // If i is equals to 6 (continue).// otherwise print the value of i




    return 0;
}
