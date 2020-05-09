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
  virtual float area(){
  return -1;
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
class tri:public shape{
public:
  tri(float a, float b){//ctor
    cout<<"In triangle ctor"<<endl;
    length =   a;
    breadth=  b;
  }
  float area(){
    return  0.5*(length*breadth);
  }
};
int main() {
  square *s=new square(2);
  tri *t=new tri(2,3);
  shape *sh1 =s;  //Polymorphism
  shape *sh2 =t;  // ,,

  cout<<"square area: "<<sh1->area()<<endl;
  cout<<"tri area: "<<sh2->area()<<endl;

  cout << s->area() << ", " << t->area() << endl;

  return 0;
}
