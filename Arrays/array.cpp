#include<iostream>
using namespace std;


/**Array declaration by specifying size
**/
void arrayDeclarationBySpecifyingSize()
{

    //array declaration by specifying size
    int arr1[10];

    //With recent C/C++ versions, we can also
    //declare an array of user specified size
    int n = 10;
    int arr2[n];

//Output:
    /*

    */
}/// This code is contributed by sarajadhav12052009


/**Array declaration by initializing elements
*/
void arrayDeclarationByInitializingElements()
{
    int arr[] = { 10, 20, 30, 40};

// Compiler creates an array of size 4.
// above is same as  "int arr[4] = {10, 20, 30, 40}"

//Output:
    /*

    */
}


/**
Array declaration by specifying size and initializing elements.
*/
void arrayDeclarationBySpecifyingSizeAndInitializingElements()
{
    // Array declaration by specifying size and initializing
    // elements
    int arr[6] = { 10, 20, 30, 40 };

    // Compiler creates an array of size 6, initializes first
    // 4 elements as specified by user and rest two elements as
    // 0. above is same as  "int arr[] = {10, 20, 30, 40, 0, 0}"

//Output:
    /*

    */


}// This code is contributed by sarajadhav12052009


/**
No index out of bounding
*/
void noIndexOutOfBounding()
{
    int arr[2];

    cout << arr[3] << " ";
    cout << arr[-2] << " ";
//Output
/*
211343841 4195777 

*/
}




/**
The elements are stores at contiguous memory locations.
Arrays are back to back contiguous memory locations.
*/

void storedContiguousMemoryLocations()
{
    // an array of 10 integers.
    // If arr[0] is stored at
    // address x, then arr[1] is
    // stored at x + sizeof(int)
    // arr[2] is stored at x +
    // sizeof(int) + sizeof(int)
    // and so on.
    int arr[5], i;

    cout << "Size of integer in this compiler is "
         << sizeof(int) << "\n";

    for (i = 0; i < 5; i++)
        // The use of '&' before a variable name, yields
        // address of variable.
        cout << "Address arr[" << i << "] is " << &arr[i]
             << "\n";
//Output:
    /*
    211343841 4195777


    */


}

/**
Another way to traverse the array
*/
void traverseAnArray()
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

}// Contributed by Akshay Pawar ( Username - akshaypawar4)




int main()
{
    arrayDeclarationBySpecifyingSize();
    arrayDeclarationByInitializingElements();
    arrayDeclarationBySpecifyingSizeAndInitializingElements();
    storedContiguousMemoryLocations();
    traverseAnArray();
    noIndexOutOfBounding();



    return 0;
}
