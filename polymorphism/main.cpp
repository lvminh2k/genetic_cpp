#include <iostream>
#include "Animal.h"
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Animal a("A");
	a.Sound();
	Dog d("Bingo");
	d.Sound();
	Cat c("Kitty");
	c.Sound();
	vector<Animal> v;
	v.push_back(c);
	v.push_back(a);
	v.push_back(d);
	for (int i=0; i<v.size(); i++){
		Animal temp = v[i];
		temp.Sound();
	}
	
	v[0].Sound();
	v[1].Sound();
	v[2].Sound();
	
	Animal* t = new Cat("Tom");
	t->Sound();
	
	cout<<endl;
	
	vector<Animal*> Vl;
	Vl.push_back(&c);
	Vl.push_back(&a);
	Vl.push_back(&d);
	Vl.push_back(t);
	for (int i=0; i<Vl.size(); i++){
		Animal* temp = Vl[i];
		temp->Sound();
	}
	return 0;
}
