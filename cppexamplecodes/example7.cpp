#include <iostream>
using namespace std;

//function prototype or forward decleration
float Add(float x, float y, float& z); 
void AddSub(float x, float y, float&sum, float& diff);

int main()
{
	float a,b;
	a = 10.;
	b = 5.5;
	float r,c;
	r = Add(a,b,c);
	cout << "Add func. " << r << ", " << c << endl;

	float vSum, vDiff;
	AddSub(a,b, vSum, vDiff);
	cout << "AddSub func. " << vSum << ", " << vDiff << endl;

	return 0;
}

//function actual definition
float Add(float x, float y, float& z)
{
	z = x-y;
	return (x+y);

}

void AddSub(float x, float y, float&sum, float& diff)
{
	sum = x+y;
	diff = x-y;
}
