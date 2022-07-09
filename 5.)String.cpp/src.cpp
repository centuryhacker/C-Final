#include <iostream>
#include<string>
#include<array>

using namespace std;


/**
// C++ Program to demonstrate the working of
// getline(), push_back() and pop_back()
*/

void getlinepushbackpopback()
{
    //#include<string>
    // Declaring string
    string str;

    // Taking string input using getline()
    getline(cin, str);

    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;

    // Inserting a character
    str.push_back('s');

    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // Deleting a character
    str.pop_back();

    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;





}
/*
Output:
The initial string is : geeksforgeek
The string after push_back operation is : geeksforgeeks
The string after pop_back operation is : geeksforgeek
*/


/**

// C++ Program to demonstrate the working of
// capacity(), resize() and shrink_to_fit()

*/
void capacityresizeshrinktofit()
{
    // Initializing string
    string str = "geeksforgeeks is for geeks";

    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;

    // Resizing string using resize()
    str.resize(13);

    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str << endl;

    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;

    // Displaying length of the string
    cout << "The length of the string is :" << str.length()
         << endl;

    // Decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();

    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str.capacity() << endl;


}



/*
Output:
The initial string is : geeksforgeeks is for geeks
The string after resize operation is : geeksforgeeks
The capacity of string is : 26
The length of the string is :13
The new capacity after shrinking is : 15
*/


/**
// C++ Program to demonstrate the working of
// begin(), end(), rbegin(), rend()
*/

void beginendrbeginrend()
{
    // Initializing string`
    string str = "geeksforgeeks";

    // Declaring iterator
    std::string::iterator it;

    // Declaring reverse iterator
    std::string::reverse_iterator it1;

    // Displaying string
    cout << "The string using forward iterators is : ";
    for (it = str.begin(); it != str.end(); it++)
        cout << *it;
    cout << endl;

    // Displaying reverse string
    cout << "The reverse string using reverse iterators is "
         ": ";
    for (it1 = str.rbegin(); it1 != str.rend(); it1++)
        cout << *it1;
    cout << endl;

}

/*
Output:
The string using forward iterators is : geeksforgeeks
The reverse string using reverse iterators is : skeegrofskeeg
*/


/**
// C++ Program to demonstrate the working of
// copy() and swap()
*/
void copyandswap()
{
    // Initializing 1st string
    string str1 = "geeksforgeeks is for geeks";

    // Declaring 2nd string
    string str2 = "geeksforgeeks rocks";

    // Declaring character array
    char ch[80];

    // using copy() to copy elements into char array
    // copies "geeksforgeeks"
    str1.copy(ch, 13, 0);

    // Displaying char array
    cout << "The new copied character array is : ";
    cout << ch << endl;

    // Displaying strings before swapping
    cout << "The 1st string before swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string before swapping is : ";
    cout << str2 << endl;

    // using swap() to swap string content
    str1.swap(str2);

    // Displaying strings after swapping
    cout << "The 1st string after swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string after swapping is : ";
    cout << str2 << endl;


}
/*
Output:
The new copied character array is : geeksforgeeks
The 1st string before swapping is : geeksforgeeks is for geeks
The 2nd string before swapping is : geeksforgeeks rocks
The 1st string after swapping is : geeksforgeeks rocks
The 2nd string after swapping is : geeksforgeeks is for geeks
*/



/**
.1 Arrays of String in C++: Using Pointer
*/

void arrayUsingPointer()
{
    // Initialize array of pointer
    const char* colour[4]
        = { "Blue", "Red", "Orange", "Yellow" };

    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";


}
/*
Output:
Blue
Red
Orange
Yellow

*/


/**
2. Arrays of String in C++: Using 2-D Array
*/

void secondDimensionalArray()
{
    // Initialize 2D array
    char colour[4][10]
        = { "Blue", "Red", "Orange", "Yellow" };

    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";


}

/*
Output:
Blue
Red
Orange
Yellow
*/

/**
3. Arrays of String in C++: Using the String Class
*/

void arrayOfString()
{
    //#include<string>

    // Initialize String Array
    std::string colour[4]
        = { "Blue", "Red", "Orange", "Yellow" };

    // Print Strings
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";
}
/*
Output:
Blue
Red
Orange
Yellow
*/



/**
4. Arrays of String in C++: Using the Vector Class
*/

void vectorString()
{
    //#include<vector>
    //#include<string>

     // Declaring Vector of String type
    // Values can be added here using initializer-list
    // syntax

  /*

  */
   /**
    std::vector<std::string> colour{ "Blue", "Red",
                                     "Orange" };

    // Strings can be added at any time with push_back
    colour.push_back("Yellow");

    // Print Strings stored in Vector
    for (int i = 0; i < colour.size(); i++)
        std::cout << colour[i] << "\n";
*/
}

/*
Output:
Blue
Red
Orange
Yellow

*/
/**
5.Arrays of String in C++: Using the Array Class
*/

void arrayString()
{
    //#include<array>
    //#include<string>
    // Initialize array
    std::array<std::string, 4> colour{ "Blue", "Red",
                                       "Orange", "Yellow" };

    // Printing Strings stored in array
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";
}




int main()
{

    getlinepushbackpopback();//pushback, popback,getline
    capacityresizeshrinktofit();//capacity, resize, shrinktofit
    beginendrbeginrend();//begin(), end(), rbegin(), rend()
    copyandswap();//copy() and swap()
    arrayUsingPointer();// pointers character array
    secondDimensionalArray();//Arrays of String in C++: Using 2-D Array
    vectorString(); //Arrays of String in C++: Using the Vector Class
    arrayString();//Arrays of String in C++: Using the Array Class





    return 0;
}
