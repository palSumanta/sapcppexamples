#include <iostream>
using namespace std;

struct student {
	int age;
	float height;
	char stuname[10];
};

int main()
{
	student a,b;
	// a and b are variables of type student or 
	// we call them objects of type student.
	// assign values to these objects

	cout << "enter a name ";
	cin.getline(a.stuname,10);
	cout << "enter height ";
	cin >> a.height;
	cout << "enter age ";
	cin >> a.age;

	//print assigned values
	cout << "Age: " << a.age;
        cout << ", name: " << a.stuname;
        cout<< ", height: " << a.height << endl; 

	return 0;
}
