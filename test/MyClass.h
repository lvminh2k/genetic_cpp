#include<iostream>
using namespace std;

template <class T>
class MyClass{
    T i;
public:
    void Set(T j){
        i = j;
    }
    void Display(){
        cout << i << endl;
    }
};