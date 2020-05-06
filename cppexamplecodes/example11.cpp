#include <iostream>
#include <cmath>
using namespace std;

class Vector
{
	int x,y,z; //default it is private member of the class
	public:
	   Vector(int a, int b, int c); //Constructor1 earlier we used Initialise here
	   Vector();//Constructor2
	   ~Vector();//Destructor 
	   //methods
	   float Length();
};
Vector::Vector(int a, int b, int c)
{
	x=a; y=b; z=c;
}
Vector::Vector()
{
	x=0; y=0; z=0;
}
Vector::~Vector()
{
	cout << "Destructor for Vector " << endl;
}
float Vector::Length()
{
	return ( sqrt(x*x + y*y +z*z) );
}

int main()
{
	Vector v1(1,2,3); //v1 is an object to class Vector using constructor1
	Vector v2; //v2 is another object to class Vector using constructor2.

	cout << "Length of v1: " << v1.Length() << endl;
	cout << "Length of v2: " << v2.Length() << endl;

	// now do the same using pointer instead of object to a class
	Vector *v3 = new Vector(1,2,3); 
	// 'new' keyword returns a pointer to the class.
	// this is the way we have to define a pointer to a class
	Vector *v4 = new Vector();
	// see now we need '()' at the end in compare to object definition
	 
	cout << "Length of v3: " << v3->Length() << endl; // Look '->' sign
	cout << "Length of v4: " << v4->Length() << endl; // instead of '.' sign

	delete v3; //without this destructor will not be called explicitly
	delete v4; //this may result 'memory leaks' in large program

	return 0;
}
