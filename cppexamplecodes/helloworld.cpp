#include <iostream>
using namespace std;

//global variable
int XX = 10;

// main program
int main()
{
	int XX = 12;
	cout << "XX : " << XX << endl;
	cout << ::XX << ", " << XX << endl;
	
	return 0;
}

