/*****************************************************************************
 C++ Programming - From Problem Analysis to Program Design 8th Edition
 Chapter 2 - Exercise 9


 Write a program that prompts the user to enter five test scores and then prints
 the average test score. (Assume that the test scores are decimal numbers.)
*****************************************************************************/

///header files
#include <iostream>

using namespace std;

///main function
int main()
{
    ///variable declaration
    float test1, test2, test3, test4, test5, avg;



    ///prompt and read 5 test scores
    cout<<"Enter 5 test < "<<flush;
    cin >> test1 >> test2 >> test3 >> test4 >> test5;


     avg = (test1 + test2 + test3 + test4 + test5) / 5;

     cout<<"Average of the test score: "<<avg;


    return 0;
}
