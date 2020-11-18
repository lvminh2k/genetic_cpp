#ifndef _Animal_h
#define _Animal_h
#include <string>
using namespace std;
class Animal{
protected:
	string name;
public:
	Animal();
	Animal(string);
	virtual void Sound();
};

class Dog: public Animal{
public:
	Dog(string);
	void Sound();
};

class Cat: public Animal{
public:
	Cat(string);
	void Sound();
};
#endif
