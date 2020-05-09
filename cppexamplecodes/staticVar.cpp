//a static variable
//g++ staticVar.cpp
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;


class twoBytwoMatrix{
public:
    static int N;
    float a11,a12,a21,a22;
    twoBytwoMatrix(float a, float b, float c, float d);
};

twoBytwoMatrix::twoBytwoMatrix(float a, float b,
                               float c, float d){
    a11=a;
    a12=b;
    a21=c;
    a22=d;
    N++; // incrementing N

}
int twoBytwoMatrix::N=0; // init outside the class
int main () {

    twoBytwoMatrix m1(1,2,3,4);
    cout<<"Creating Matrix Number "<<m1.N<<endl;
    twoBytwoMatrix m2(2,3,4,5);
    cout<<"Creating Matrix Number "<<m2.N<<endl;
    cout<<"The matrix number accessed directly: "<<
            twoBytwoMatrix::N<<endl;
    return 0;
}
