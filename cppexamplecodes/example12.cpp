#include <iostream>
using namespace std;

// base class 
class shape
{
	protected:
		float length, breadth;
	public:
		shape()//constructor
		{
			cout << "In shape constructor 0" << endl;
			length = 0.; breadth = 0.;
		}

		shape(float l, float b)//constructor
		{
			cout << "In shape constructor 1" << endl;
			length = l; breadth = b;
		}
		~shape();//destructor
};
shape::~shape()
{
	cout << "shape destructor" << endl;
}
//derived class 
class square:public shape
{
	public:
		square(float a) // constructor
		{
			cout << "square constructor" << endl;
			length = a; breadth =a;
		}
		~square();//destructor
		float area() //a method
		{
			return length*breadth;
		}
};
square::~square()
{
	cout << "square destructor" << endl;
}
class rect:public shape
{
	public:
		rect(float a, float b):shape(a,b) //constructor
		{
			cout << "rect constructor" << endl;
		}
		~rect();//destructor
		float area()//a method
		{
			return length*breadth;
		}
};
rect::~rect()
{
	cout << "rect destructor" << endl;
}

int main()
{
	square sq(2);
	rect r(3,4);
	cout << "square area = " << sq.area() << endl;
	cout << "rect area = " << r.area() << endl;

	return 0;
}
