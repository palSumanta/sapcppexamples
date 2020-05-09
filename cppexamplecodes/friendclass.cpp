#include <iostream>
using namespace std; 

class square
{
	float Length; // this is private by default
	public:
		square(float a) //constructor
		{
			Length = a;
		}
		~square(); //destructor
		
		// a method, just a print statement
		void printvalues(){
			cout<<"l " << Length << endl;
		}
		
		// give access to rect class
		friend class rect;

		// is it allowed? Answer is NO
		//float getarea(rect);
};

square::~square(){}

class rect
{
	float length, breadth; //private
	public:
		rect(float a, float b) // constructor
		{
			length = a;
			breadth = b;
		}

		~rect();

		//Methods
		float GetArea();
		float GetArea(square);
};

rect::~rect(){}

//define methods
float rect::GetArea()
{
	return length*breadth;
}

float rect::GetArea(square s)
{
	length = s.Length;
	breadth = s.Length;
	return GetArea();
}

int main()
{
	square s(2);
	rect r(3,4);

	cout << "Area rect : " << r.GetArea() << endl;

	cout << "Area square : " << r.GetArea(s) << endl;
	
	//cout << "Area square : " << s.GetArea() << endl;
	// square can not access GetArea() defined inside rect class
	// compiler will show this error:
	// friendclass.cpp:66:32: error: ‘class square’ has no member named ‘GetArea’
        // cout << "Area square : " << s.GetArea() << endl;
	//
        s.printvalues();

	return 0;
}
