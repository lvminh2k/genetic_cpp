#include<iostream>
#include "MyClass.h"
using namespace std;

template <class T>
void myswap(T& a, T& b){
    T c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    MyClass<double> a;
    a.Set(5.1);
    a.Display();

    MyClass<int> b;
    b.Set(2);
    b.Display();
}
