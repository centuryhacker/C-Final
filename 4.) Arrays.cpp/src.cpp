#include <iostream>

using namespace std;


/**
Array declaration by specifying size
*/

void arrayDeclarationBySize()
{
    // array declaration by specifying size
    int arr1[10];

    // With recent C/C++ versions, we can also
    // declare an array of user specified size
    int n = 10;
    int arr2[n];

}

/*
Output:

*/

/**
Array declaration by specifying size and initializing elements
*/

void arrayDeclarationBySizeAndInitializingElements()
{
    // Array declaration by specifying size and initializing
    // elements
    int arr[6] = { 10, 20, 30, 40 };

    // Compiler creates an array of size 6, initializes first
    // 4 elements as specified by user and rest two elements as
    // 0. above is same as  "int arr[] = {10, 20, 30, 40, 0, 0}"


}

void array1andarray2()
{
    int arr[5];
    arr[0] = 5;
    arr[2] = -10;

    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
    arr[3] = arr[0];

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
         << arr[3];

}
/*
Output:
5 2 -10 5
*/

/**
Another way to traverse an array
*/
void anotherWayToTraverseAnArray()
{
    int arr[6]= {11,12,13,14,15,16};
    // Way 1
    for(int i=0; i<6; i++)
        cout<<arr[i]<<" ";

    cout<<endl;
    // Way 2
    cout<<"By Other Method:"<<endl;
    for(int i=0; i<6; i++)
        cout<<i[arr]<<" ";

    cout<<endl;

}

/*
Output:
11 12 13 14 15 16
By Other Method:
11 12 13 14 15 16
*/

/**
// C++ Program to print the elements of a
// Two-Dimensional array
*/
void arrayTwoDimensionalArray()
{
    // an array with 3 rows and 2 columns.
    int x[3][2] = {{0,1}, {2,3}, {4,5}};

    // output each array element's value
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }

    /**
    Output:
    Element at x[0][0]: 0
    Element at x[0][1]: 1
    Element at x[1][0]: 2
    Element at x[1][1]: 3
    Element at x[2][0]: 4
    Element at x[2][1]: 5
    */


    /**
    // C++ program to print elements of Three-Dimensional
// Array

    */
}
    void arrayThreeDimensionalArray()
    {
           // initializing the 3-dimensional array
    int x[2][3][2] = { { { 0, 1 }, { 2, 3 }, { 4, 5 } },
                       { { 6, 7 }, { 8, 9 }, { 10, 11 } } };

    // output each element's value
    for (int i = 0; i < 2; ++i)
        {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                cout << "Element at x[" << i << "][" << j
                     << "][" << k << "] = " << x[i][j][k]
                     << endl;
            }
        }
    }
}

/*
Output:
Element at x[0][0][0] = 0
Element at x[0][0][1] = 1
Element at x[0][1][0] = 2
Element at x[0][1][1] = 3
Element at x[0][2][0] = 4
Element at x[0][2][1] = 5
Element at x[1][0][0] = 6
Element at x[1][0][1] = 7
Element at x[1][1][0] = 8
Element at x[1][1][1] = 9
Element at x[1][2][0] = 10
Element at x[1][2][1] = 11
*/



int main()
{
    arrayDeclarationBySize(); //declare array by size
    arrayDeclarationBySizeAndInitializingElements();//Array declaration by specifying size and initializing elements
    array1andarray2();//array 1 and array 2
    anotherWayToTraverseAnArray();//Another way to traverse an array
    arrayTwoDimensionalArray();//2 dimensional array. 3 rows, 2 columns, and output array withe element's value








    return 0;
}
