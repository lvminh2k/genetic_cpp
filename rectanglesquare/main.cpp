#include <iostream>
#include "Rectangle.h"
#include "Square.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Rectangle Rec;
	Square Sq;
	cout << "Rectangle size: ";
	Rec.Input(cin);
	cout << "Rectangle area: " << Rec.Area() << endl;
	
	cout << "Square size:";
	Sq.Input(cin);
	cout << "Square area: " << Sq.Area() << endl;
	return 0;
}
