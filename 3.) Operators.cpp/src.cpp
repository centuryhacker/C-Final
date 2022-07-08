#include <iostream>

using namespace std;



/**
Arithmetic Operator and comparison operators
*/
void arithmeticOperator()
{
    int a=10, b=5;
    // Arithmetic operators
    cout<<"Following are the Arithmetic operators in C++"<<endl;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl; // First print (a) and then increment it by 1
    cout<<"The value of a-- is "<<a--<<endl; // First print (a+1) and then decrease it by 1
    cout<<"The value of ++a is "<<++a<<endl; // Increment (a) by (a+1) and then print
    cout<<"The value of --a is "<<--a<<endl; // Decrement (a+1) by (a) and then print
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparison operators
    // Output of all these comparison operators will be (1) if it is true and (0) if it is false
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;
    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;
}

/*
Output:
Following are the Arithmetic operators in C++
The value of a + b is 15
The value of a - b is 5
The value of a * b is 50
The value of a / b is 2
The value of a % b is 0
The value of a++ is 10
The value of a-- is 11
The value of ++a is 11
The value of --a is 10

Following are the comparison operators in C++
The value of a == b is 0
The value of a != b is 1
The value of a >= b is 1
The value of a <= b is 0
The value of a > b is 1
The value of a < b is 0

Following are the logical operators in C++
The value of this logical and operator ((a==b) && (a<b)) is:0
The value of this logical or operator ((a==b) || (a<b)) is:0
The value of this logical not operator (!(a==b)) is:1
*/


/**
// C++ program to demonstrate the use of '!(NOT) operator'
*/

void notOperator()
{
    int a = 10;
    int b = 5;

    if (!(a > b))
        cout << "b is greater than a" << endl;
    else
        cout << "a is greater than b" << endl;

}

/*
Output:
a is greater than b

*/


/**
// C++ program to demonstrate the use of 'address-of(&)'
// operator
*/
void addressOfPointer()
{
    int a;
    int* ptr;

    ptr = &a;

    cout << ptr;
}
/*
Output:
0x7ffddcf0c8ec

*/



/**
sizeof() operator
*/

void usingSizeOf()
{
    float n = 0;
    cout << "size of n: " << sizeof(n);
   return;

}
/*
Output:
size of n: 4

*/


/**
Dynamic allocation and deallocation of memory using new and delete.
*/

void pointerLearningTool()
{
   // Pointer initialization to null
    int* p = NULL;

    // Request memory for the variable
    // using new operator
    p = new(nothrow) int;
    if (!p)
        cout << "allocation of memory failed\n";
    else
    {
        // Store value at allocated address
        *p = 29;
        cout << "Value of p: " << *p << endl;
    }

    // Request block of memory
    // using new operator
    float *r = new float(75.25);

    cout << "Value of r: " << *r << endl;

    // Request block of memory of size n
    int n = 5;
    int *q = new(nothrow) int[n];

    if (!q)
        cout << "allocation of memory failed\n";
    else
    {
        for (int i = 0; i < n; i++)
            q[i] = i+1;

        cout << "Value store in block of memory: ";
        for (int i = 0; i < n; i++)
            cout << q[i] << " ";
    }

    // freed the allocated memory
    delete p;
    delete r;

    // freed the block of allocated memory
    delete[] q;
}

/*
Output:
Value of p: 29
Value of r: 75.25
Value store in block of memory: 1 2 3 4 5
*/


int main()
{
    arithmeticOperator();//Arithmetic Operator and comparison operators
    notOperator();//C++ program to demonstrate the use of '!(NOT) operator'
    addressOfPointer();//// C++ program to demonstrate the use of 'address-of(&)'. operator
    usingSizeOf(); //sizeof
    pointerLearningTool();//Dynamic allocation and deallocation of memory using new and delete.








    return 0;
}

