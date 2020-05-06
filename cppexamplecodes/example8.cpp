#include <iostream>
using namespace std;

// function overloading
int add(int x, int y)
{
	return (x+y);
}

float add(float x, float y)
{
	return (x+y);
}

int main()
{
	int a,b;
	a = 101; b = 100;
	float c,d;
	c = 101.3; d = 102.5;

	cout << add(a,b) << endl;
	cout << add(c,d) << endl;

	return 0;
}
