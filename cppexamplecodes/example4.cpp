#include <iostream>
using namespace std;

int main()
{
	int A = 10;
	cout << "A (" << A << ") shifted 1 bit right: " << (A>>1) << endl;

	A = 10;
	cout << "A (" << A << ") shifted 1 bit left: " << (A<<1) << endl;

	return 0;
}
