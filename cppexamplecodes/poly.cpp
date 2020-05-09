//friend fucntion
//g++ friend_class.cpp
#include <iostream>
#include <fstream>
using namespace std;
class shape{
protected:
  float length, breadth;
public:
  shape(){
    cout<<"In Shape ctor 0"<<endl;
    length=0;
    breadth =0;
  }
  shape(float l, float b){
    cout<<"In Shape ctor 1"<<endl;
    length=l;
    breadth =b;
  }
  void PrintValues(){
    cout<<"Length: "<<length<<" Breadth: "<<breadth<<endl;
  }
};
class square:public shape{
public:
  square(float a){//ctor
    cout<<"In square ctor"<<endl;
    length = a;
    breadth=a;
  }
  float area(){
    return  length*breadth;
  }
};
int main() {
  square *s=new square(2);
  shape *sh1= new shape();
  shape *sh2 = s; // type compatible
 // square *s2=sh2;// error
  sh1->PrintValues();
  sh2->PrintValues();
 // sh1->area();// not allowed
}
