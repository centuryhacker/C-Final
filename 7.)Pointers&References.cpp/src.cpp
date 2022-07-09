#include <iostream>


using namespace std;



/**
1. Function in C++
*/

/*
#include <iostream>
using namespace std;
  
int max(int x, int y) 
{ 
    if (x > y) 
    return x; 
    else
    return y; 
} 
  
int main() {
    int a = 10, b = 20; 
  
    // Calling above function to find max of 'a' and 'b' 
    int m = max(a, b); 
  
    cout << "m is " << m; 
    return 0; 
}

*/

/*
#include <iostream>
using namespace std;
  
void fun(int x) {
    x = 30;
}
  
int main() {
    int x = 20;
    fun(x);
    cout << "x = " << x;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
  
void fun(int *ptr)
{
    *ptr = 30;
}
  
int main() {
    int x = 20;
    fun(&x);
    cout << "x = " << x;
      
    return 0;
}

*/
/**
2. Default Argument in C++
*/

/*

// CPP Program to demonstrate Default Arguments
#include <iostream>
using namespace std;
 
// A function with default arguments,
// it can be called with
// 2 arguments or 3 arguments or 4 arguments.
int sum(int x, int y, int z = 0, int w = 0) //assigning default values to z,w as 0
{
    return (x + y + z + w);
}
 
// Driver Code
int main()
{
    // Statement 1
    cout << sum(10, 15) << endl;
   
    // Statement 2
    cout << sum(10, 15, 25) << endl;
   
    // Statement 3
    cout << sum(10, 15, 25, 30) << endl;
      return 0;
   
*/



/*


#include <iostream>
using namespace std;
class A {
public:
    int sum = 0;
    A(); // default constructor with no argument
    A(int x = 0); // default constructor with one
                        // arguments
     
};

*/


/**
3. In-line Function in C++
*/


/*
#include <iostream>
using namespace std;
inline int cube(int s)
{
    return s*s*s;
}
int main()
{
    cout << "The cube of 3 is: " << cube(3) << "\n";
    return 0;
} //Output: The cube of 3 is: 27

*/

/*
#include <iostream>
using namespace std;
class operation
{
	int a,b,add,sub,mul;
	float div;
public:
	void get();
	void sum();
	void difference();
	void product();
	void division();
};
inline void operation :: get()
{
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
}

inline void operation :: sum()
{
	add = a+b;
	cout << "Addition of two numbers: " << a+b << "\n";
}

inline void operation :: difference()
{
	sub = a-b;
	cout << "Difference of two numbers: " << a-b << "\n";
}

inline void operation :: product()
{
	mul = a*b;
	cout << "Product of two numbers: " << a*b << "\n";
}

inline void operation ::division()
{
	div=a/b;
	cout<<"Division of two numbers: "<<a/b<<"\n" ;
}

int main()
{
	cout << "Program using inline function\n";
	operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	return 0;
}

*/

/**
4. Return from void function in C++
*/

/*
// CPP Program to demonstrate void functions
#include <iostream>
using namespace std;

void fun()
{
	cout << "Hello";

	// We can write return in void
	return;
}

// Driver Code
int main()
{
	fun();
	return 0;
}


*/

/*
// C++ code to demonstrate void()
// returning void()
#include <iostream>
using namespace std;

// A sample void function
void work()
{
	cout << "The void function has returned "
			" a void() !!! \n";
}

// Driver void() returning void work()
void test()
{
	// Returning void function
	return work();
}

// Driver Code
int main()
{
	// Calling void function
	test();
	return 0;
}

*/

/*
// C++ code to demonstrate void()
// returning a void value
#include <iostream>
using namespace std;

// Driver void() returning a void value
void test()
{
	cout << "Hello";

	// Returning a void value
	return (void)"Doesn't Print";
}

// Driver Code
int main()
{
	test();
	return 0;
}

*/
/**
5. Functors in C++
*/


/*
// C++ program to demonstrate working of
// functors.
#include <bits/stdc++.h>
using namespace std;

// A Functor
class increment
{
private:
	int num;
public:
	increment(int n) : num(n) { }

	// This operator overloading enables calling
	// operator function () on objects of increment
	int operator () (int arr_num) const {
		return num + arr_num;
	}
};

// Driver code
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int to_add = 5;

	transform(arr, arr+n, arr, increment(to_add));

	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

*/








int main()
{

   



    return 0;
}
