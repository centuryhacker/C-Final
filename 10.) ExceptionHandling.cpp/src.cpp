#include <iostream>


using namespace std;

/**
// C++ Program to show the sequence of calling
// Constructors and destructors
#include <iostream>
using namespace std;

// Initialization of class
class Test {
public:
	// Constructor of class
	Test()
	{
		cout << "Constructing an object of class Test "
			<< endl;
	}

	// Destructor of class
	~Test()
	{
		cout << "Destructing the object of class Test "
			<< endl;
	}
};

int main()
{
	try {
		// Calling the constructor
		Test t1;
		throw 10;
	
	} // Destructor is being called here
	// Before the 'catch' statement
	catch (int i) {
		cout << "Caught " << i << endl;
	}
}

*/

/**
// C++ Program to show what really happens
// when an exception is thrown from
// a constructor
#include <iostream>
using namespace std;

class Test1 {
public:
	// Constructor of the class
	Test1()
	{
		cout << "Constructing an Object of class Test1"
			<< endl;
	}
	// Destructor of the class
	~Test1()
	{
		cout << "Destructing an Object the class Test1"
			<< endl;
	}
};

class Test2 {
public:
	// Following constructor throws
	// an integer exception
	Test2() // Constructor of the class
	{
		cout << "Constructing an Object of class Test2"
			<< endl;
		throw 20;
	}
	// Destructor of the class
	~Test2()
	{
		cout << "Destructing the Object of class Test2"
			<< endl;
	}
};

int main()
{
	try {
		// Constructed and destructed
		Test1 t1;

		// Partially constructed
		Test2 t2;

		// t3 is not constructed as
		// this statement never gets executed
		Test1 t3; // t3 is not called as t2 is
				// throwing/returning 'int' argument which
				// is not accepeted
				// is the class test1'
	}
	catch (int i) {
		cout << "Caught " << i << endl;
	}
}

*/

/**
#include <iostream>
using namespace std;

int main()
{
int x = -1;

// Some code
cout << "Before try \n";
try {
	cout << "Inside try \n";
	if (x < 0)
	{
		throw x;
		cout << "After throw (Never executed) \n";
	}
}
catch (int x ) {
	cout << "Exception Caught \n";
}

cout << "After catch (Will be executed) \n";
return 0;
}

*/


/**
#include <iostream>
using namespace std;

int main()
{
	try {
	throw 'a';
	}
	catch (int x) {
		cout << "Caught " << x;
	}
	catch (...) {
		cout << "Default Exception\n";
	}
	return 0;
}

*/

/**
#include <iostream>
using namespace std;

int main()
{
	try {
		try {
			throw 20;
		}
		catch (int n) {
			cout << "Handle Partially ";
			throw; // Re-throwing an exception
		}
	}
	catch (int n) {
		cout << "Handle remaining ";
	}
	return 0;
}

*/

/**

// CPP Program to demonstrate Stack Unwinding
#include <iostream>
using namespace std;

// A sample function f1() that throws an int exception
void f1() throw(int)
{
	cout << "\n f1() Start ";
	throw 100;
	cout << "\n f1() End ";
}

// Another sample function f2() that calls f1()
void f2() throw(int)
{
	cout << "\n f2() Start ";
	f1();
	cout << "\n f2() End ";
}

// Another sample function f3() that calls f2() and handles
// exception thrown by f1()
void f3()
{
	cout << "\n f3() Start ";
	try {
		f2();
	}
	catch (int i) {
		cout << "\n Caught Exception: " << i;
	}
	cout << "\n f3() End";
}

// Driver Code
int main()
{
	f3();

	getchar();
	return 0;
}

*/
int main()
{
   




    return 0;
}
