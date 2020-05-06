#include <iostream>
#include "Add.h"
#include "Sub.h"
using namespace std;

int main()
{
  int a=10;
  int b=4;
  int c = Add(a,b);
  cout << "output of Add fn. " << c << endl;
  int d = Sub(a,b);
  cout << "output of Sub fn. " << d << endl;

  return 0;
}

