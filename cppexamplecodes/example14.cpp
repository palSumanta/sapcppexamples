#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> myvector;
  //vector<int> myvector[]; //we can also have vector array
  
  for (int i=1; i<=5; i++) myvector.push_back(i);

  cout << "size of myvector : " << myvector.size() << endl;

  cout << "myvector contains:" << endl;
  for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    { 
      cout << ' ' << *it << '\n';
    }

  cout << "same as above but different way " << endl;
  for (int it = 0; it< (myvector.size()); ++it)
    { 
      cout << ' ' << myvector.at(it) << '\n';
    }

  return 0;
}
