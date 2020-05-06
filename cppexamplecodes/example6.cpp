#include <iostream>
using namespace std;

int main()
{
	int a; 
	cout << "Provide an integer input: ";
	cin >> a;

	switch(a)
	{
		case 1:
			cout << "a is 1 \n";
			break;
		case 2:
			cout << "a is 2 \n";
			break;
		default:
			cout << "value of a unknown \n";
	}

	return 0;
}
