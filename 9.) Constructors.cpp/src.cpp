#include <iostream>


using namespace std;



/**
// defining the constructor within the class

#include <iostream>
using namespace std;

class student {
	int rno;
	char name[10];
	double fee;

public:
	student()
	{
		cout << "Enter the RollNo:";
		cin >> rno;
		cout << "Enter the Name:";
		cin >> name;
		cout << "Enter the Fee:";
		cin >> fee;
	}

	void display()
	{
		cout << endl << rno << "\t" << name << "\t" << fee;
	}
};

int main()
{
	student s; // constructor gets called automatically when
			// we create the object of the class
	s.display();

	return 0;
}

*/


/**
// defining the constructor outside the class

#include <iostream>
using namespace std;
class student {
	int rno;
	char name[50];
	double fee;

public:
	student();
	void display();
};

student::student()
{
	cout << "Enter the RollNo:";
	cin >> rno;

	cout << "Enter the Name:";
	cin >> name;

	cout << "Enter the Fee:";
	cin >> fee;
}

void student::display()
{
	cout << endl << rno << "\t" << name << "\t" << fee;
}

int main()
{
	student s;
	s.display();

	return 0;
}

*/


/*
Default constructor:
*/

/**
// Cpp program to illustrate the
// concept of Constructors
#include <iostream>
using namespace std;

class construct {
public:
	int a, b;

	// Default Constructor
	construct()
	{
		a = 10;
		b = 20;
	}
};

int main()
{
	// Default constructor called automatically
	// when the object is created
	construct c;
	cout << "a: " << c.a << endl << "b: " << c.b;
	return 1;
}

*/

/**
// Example
#include<iostream>
using namespace std;
class student
{
	int rno;
	char name[50];
	double fee;
	public:
	student()					 // Explicit Default constructor
	{
		cout<<"Enter the RollNo:";
		cin>>rno;
		cout<<"Enter the Name:";
		cin>>name;
		cout<<"Enter the Fee:";
		cin>>fee;
	}
	
	void display()
	{
		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
	}
};

int main()
{
	student s;
	s.display();
	return 0;
}

*/

/**
// CPP program to illustrate
// parameterized constructors
#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	// Parameterized Constructor
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	int getX() { return x; }
	int getY() { return y; }
};

int main()
{
	// Constructor called
	Point p1(10, 15);

	// Access values assigned by constructor
	cout << "p1.x = " << p1.getX()
		<< ", p1.y = " << p1.getY();

	return 0;
}

*/

/**
// C++ program to demonstrate the working
// of a COPY CONSTRUCTOR
#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	// Copy constructor
	Point(const Point& p1)
	{
		x = p1.x;
		y = p1.y;
	}

	int getX() { return x; }
	int getY() { return y; }
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here
	Point p2 = p1; // Copy constructor is called here

	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX()
		<< ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX()
		<< ", p2.y = " << p2.getY();

	return 0;
}

*/

/**
// Example:

#include<iostream>
using namespace std;

class Test
{
public:
		Test()
	{
			cout<<"\n Constructor executed";
	}

	~Test()
		{
			cout<<"\n Destructor executed";
		}
};
main()
{
	Test t;
	
	return 0;
}

*/

/**
// CPP code to demonstrate constructor can have default
// arguments
#include <iostream>
using namespace std;
class A {
public:
	int sum = 0;
	A(); // default constructor with no argument
	A(int a, int x = 0) // default constructor with one
						// default argument
	{
		sum = a + x;
	}
	void print() { cout << "Sum =" << sum << endl; }
};
int main()
{
	// This construct has two arguments. Second argument is
	// initialized with a value of 0 Now we can call the
	// constructor in two possible ways.
	A obj1(10, 20);
	A obj2(5);
	obj1.print();
	obj2.print();
	return 0;
}

*/

/**

// CPP program to demonstrate Default constructors
#include <iostream>
using namespace std;

class Base {
public:
	// compiler "declares" constructor
};

class A {
public:
	// User defined constructor
	A() { cout << "A Constructor" << endl; }

	// uninitialized
	int size;
};

class B : public A {
	// compiler defines default constructor of B, and
	// inserts stub to call A constructor

	// compiler won't initialize any data of A
};

class C : public A {
public:
	C()
	{
		// User defined default constructor of C
		// Compiler inserts stub to call A's constructor
		cout << "C Constructor" << endl;

		// compiler won't initialize any data of A
	}
};

class D {
public:
	D()
	{
		// User defined default constructor of D
		// a - constructor to be called, compiler inserts
		// stub to call A constructor
		cout << "D Constructor" << endl;

		// compiler won't initialize any data of 'a'
	}

private:
	A a;
};

// Driver Code
int main()
{
	Base base;

	B b;
	C c;
	D d;

	return 0;
}

*/

/**
// CPP program to illustrate
// Private Destructor
#include <iostream>
using namespace std;

class Test {
private:
	~Test() {}
};

// Driver Code
int main()
{
	Test* t = new Test;
	delete t;
}

*/
int main()
{
   




    return 0;
}
