#include <iostream>
using namespace std;

//main 
int main()
{
	// variable decleration
	int XX;
	float YY;
	double ZZ;

	//assign a value
	XX = 1;
	YY = 2.0;
	ZZ = 2.2;

	// if statement
	if(XX > YY)
	{
		cout << "XX is greater than YY" << endl;
	}
	else
	{
		cout << "XX is less than YY" << endl;
	}

	// for loop
	for(int ii=0; ii<5; ii++)
	{
		cout << "ii : " << ii << endl;
	}

	return 0;
}
