#include <iostream>


using namespace std;




/*
// C++ program to demonstrate use of * for pointers in C++
#include <iostream>
using namespace std;

int main()
{
    // A normal integer variable
    int Var = 10;

    // A pointer variable that holds address of var.
    int *ptr = &Var;

    // This line prints value at address stored in ptr.
    // Value stored is value of variable "var"
    cout << "Value of Var = "<< *ptr << endl;

    // The output of this line may be different in different
    // runs even on same machine.
    cout << "Address of Var = " <<  ptr << endl;

    // We can also use ptr as lvalue (Left hand
    // side of assignment)
    *ptr = 20; // Value at address is now 20

    // This prints 20
    cout << "After doing *ptr = 20, *ptr is "<< *ptr << endl;

    return 0;
}

*/


/*
// C++ program to illustrate Pointer Arithmetic
// in C/C++
#include <bits/stdc++.h>

// Driver program
int main()
{
    // Declare an array
    int v[3] = {10, 100, 200};

    // Declare pointer variable
    int *ptr;

    // Assign the address of v[0] to ptr
    ptr = v;

    for (int i = 0; i < 3; i++)
    {
        printf("Value of *ptr = %d\n", *ptr);
        printf("Value of ptr = %p\n\n", ptr);

        // Increment pointer ptr by 1
        ptr++;
    }
}


*/

/*
// C++ program to illustrate Array Name as Pointers in C++
#include <bits/stdc++.h>
using namespace std;

void geeks()
{
    // Declare an array
    int val[3] = { 5, 10, 15};

    // Declare pointer variable
    int *ptr;

    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
    ptr = val ;
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];

    return;
}

// Driver program
int main()
{
    geeks();
    return 0;
}

*/

/**
References in C++
*/


void references()
{
    int x = 10;

    // ref is a reference to x.
    int& ref = x;

    // Value of x is now changed to 20
    ref = 20;
    cout << "x = " << x << '\n';

    // Value of x is now changed to 30
    x = 30;
    cout << "ref = " << ref << '\n';

}

/*
x = 20
ref = 30
*/


/**
References: Modify the passed parameters in a function



#include <iostream>
using namespace std;

void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

int main()
{
    int a = 2, b = 3;
    swap(a, b);
    cout << a << " " << b;
    return 0;
}



*/


/**
Avoiding a copy of large structures:


struct Student {
    string name;
    string address;
    int rollNo;
}

// If we remove & in below function, a new
// copy of the student object is created.
// We use const to avoid accidental updates
// in the function as the purpose of the function
// is to print s only.
void print(const Student &s)
{
    cout << s.name << "  " << s.address << "  " << s.rollNo
         << '\n';
}


*/


/**
In For Each Loop to modify all objects:

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vect{ 10, 20, 30, 40 };

	// We can modify elements if we
	// use reference
	for (int& x : vect) {
		x = x + 5;
	}

	// Printing elements
	for (int x : vect) {
		cout << x << " ";
	}
	cout << '\n';

	return 0;
}



*/


/**
4. For Each Loop to avoid the copy of objects:


#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<string> vect{ "geeksforgeeks practice",
						"geeksforgeeks write",
						"geeksforgeeks ide" };

	// We avoid copy of the whole string
	// object by using reference.
	for (const auto& x : vect) {
		cout << x << '\n';
	}

	return 0;
}

*/

/**
When local variable’s name is same as member’s name

#include<iostream>
using namespace std;

/* local variable is same as a member's name *
class Test
{
private:
int x;
public:
void setX (int x)
{
	// The 'this' pointer is used to retrieve the object's x
	// hidden by the local variable 'x'
	this->x = x;
}
void print() { cout << "x = " << x << endl; }
};

int main()
{
Test obj;
int x = 20;
obj.setX(x);
obj.print();
return 0;
}


*/

/**

#include <iostream>
using namespace std;
#include <memory>

class Rectangle {
	int length;
	int breadth;

public:
	Rectangle(int l, int b){
		length = l;
		breadth = b;
	}

	int area(){
		return length * breadth;
	}
};

int main(){

	unique_ptr<Rectangle> P1(new Rectangle(10, 5));
	cout << P1->area() << endl; // This'll print 50

	// unique_ptr<Rectangle> P2(P1);
	unique_ptr<Rectangle> P2;
	P2 = move(P1);

	// This'll print 50
	cout << P2->area() << endl;

	// cout<<P1->area()<<endl;
	return 0;
}


*/

/**
class person
{
	char name[20];
	int id;
public:
	void getdetails(){}
};

int main()
{
person p1; // p1 is a object
}


*/


/**
// C++ program to demonstrate function
// declaration outside class

#include <bits/stdc++.h>
using namespace std;
class Geeks
{
	public:
	string geekname;
	int id;

	// printname is not defined inside class definition
	void printname();

	// printid is defined inside class definition
	void printid()
	{
		cout << "Geek id is: " << id;
	}
};

// Definition of printname using scope resolution operator ::
void Geeks::printname()
{
	cout << "Geekname is: " << geekname;
}
int main() {

	Geeks obj1;
	obj1.geekname = "xyz";
	obj1.id=15;

	// call printname()
	obj1.printname();
	cout << endl;

	// call printid()
	obj1.printid();
	return 0;
}


*/

/**
// C++ program to demonstrate constructors

#include <bits/stdc++.h>
using namespace std;
class Geeks
{
	public:
	int id;

	//Default Constructor
	Geeks()
	{
		cout << "Default Constructor called" << endl;
		id=-1;
	}

	//Parameterized Constructor
	Geeks(int x)
	{
		cout << "Parameterized Constructor called" << endl;
		id=x;
	}
};
int main() {

	// obj1 will call Default Constructor
	Geeks obj1;
	cout << "Geek id is: " <<obj1.id << endl;

	// obj1 will call Parameterized Constructor
	Geeks obj2(21);
	cout << "Geek id is: " <<obj2.id << endl;
	return 0;
}

*/

/**
// C++ program to explain destructors

#include <bits/stdc++.h>
using namespace std;
class Geeks
{
	public:
	int id;

	//Definition for Destructor
	~Geeks()
	{
		cout << "Destructor called for id: " << id <<endl;
	}
};

int main()
{
	Geeks obj1;
	obj1.id=7;
	int i = 0;
	while ( i < 5 )
	{
		Geeks obj2;
		obj2.id=i;
		i++;
	} // Scope for obj2 ends here

	return 0;
} // Scope for obj1 ends here

*/


/**
// Example: define member function without argument outside the class

#include<iostream>
using namespace std;

class Person
{
	int id;
	char name[100];

	public:
		void set_p();
		void display_p();
};

void Person::set_p()
{
	cout<<"Enter the Id:";
	cin>>id;
	fflush(stdin);
	cout<<"Enter the Name:";
	cin.get(name,100);
}

void Person::display_p()
{
	cout<<endl<<id<<"\t"<<name;
}

class Student: private Person
{
	char course[50];
	int fee;

	public:
		void set_s();
		void display_s();
};

void Student::set_s()
{
	set_p();
	cout<<"Enter the Course Name:";
	fflush(stdin);
	cin.getline(course,50);
	cout<<"Enter the Course Fee:";
	cin>>fee;
}

void Student::display_s()
{
	display_p();
	cout<<"t"<<course<<"\t"<<fee;
}

main()
{
	Student s;
	s.set_s();
	s.display_s();
	return 0;
}

*/

/**
// C++ program for function overloading
#include <bits/stdc++.h>

using namespace std;
class Geeks
{
	public:

	// function with 1 int parameter
	void func(int x)
	{
		cout << "value of x is " << x << endl;
	}

	// function with same name but 1 double parameter
	void func(double x)
	{
		cout << "value of x is " << x << endl;
	}

	// function with same name and 2 int parameters
	void func(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y << endl;
	}
};

int main() {

	Geeks obj1;

	// Which function is called will depend on the parameters passed
	// The first 'func' is called
	obj1.func(7);

	// The second 'func' is called
	obj1.func(9.132);

	// The third 'func' is called
	obj1.func(85,64);
	return 0;
}



*/

/**
// c++ program to explain
// Encapsulation

#include<iostream>
using namespace std;

class Encapsulation
{
	private:
		// data hidden from outside world
		int x;

	public:
		// function to set value of
		// variable x
		void set(int a)
		{
			x =a;
		}

		// function to return value of
		// variable x
		int get()
		{
			return x;
		}
};

// main function
int main()
{
	Encapsulation obj;

	obj.set(5);

	cout<<obj.get();
	return 0;
}

*/


/**
// c++ program to explain
// Encapsulation

#include<iostream>
using namespace std;

class Encapsulation
{
	private:
		// data hidden from outside world
		int x;

	public:
		// function to set value of
		// variable x
		void set(int a)
		{
			x =a;
		}

		// function to return value of
		// variable x
		int get()
		{
			return x;
		}
};

// main function
int main()
{
	Encapsulation obj;

	obj.set(5);

	cout<<obj.get();
	return 0;
}




*/


/**
#include <iostream>
using namespace std;

class implementAbstraction
{
	private:
		int a, b;

	public:

		// method to set values of
		// private members
		void set(int x, int y)
		{
			a = x;
			b = y;
		}

		void display()
		{
			cout<<"a = " <<a << endl;
			cout<<"b = " << b << endl;
		}
};

int main()
{
	implementAbstraction obj;
	obj.set(10, 20);
	obj.display();
	return 0;
}



*/


/**
#include<iostream>
using namespace std;

void add(int a, double b)
{
	cout<<"sum = "<<(a+b);
}

void add(double a, int b)
{
	cout<<endl<<"sum = "<<(a+b);
}

// Driver code
int main()
{
	add(10,2.5);
	add(5.5,6);

	return 0;
}

*/


/**

#include<iostream>
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex(int r = 0, int i = 0) {real = r; imag = i;}

	// This is automatically called when '+' is used with
	// between two Complex objects
	Complex operator + (Complex const &obj) {
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2;
	c3.print();
}



*/
/**

#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int i = 0, int j = 0) {
		x = i; y = j;
	}
	void print() {
		cout << "x = " << x << ", y = " << y << '\n';
	}
};

int main() {
	Point t(20, 20);
	t.print();
	t = 30; // Member x of t becomes 30
	t.print();
	return 0;
}


*/
int main()
{
    references();// reference in C++





    return 0;
}
