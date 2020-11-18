#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
Animal::Animal(){
}
Animal::Animal(string s){
	name = s;
}
void Animal::Sound(){
	cout << "I am " << name << endl;
}
Dog::Dog(string s){
	name = s;
}
void Dog::Sound(){
	cout << "Gau gau. My name is " << name <<endl; 
}
Cat::Cat(string s){
	name = s;
}
void Cat::Sound(){
	cout << "Meo meo. My name is " << name <<endl; 
}
