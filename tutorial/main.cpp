#include <iostream>
#include "Figures.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Point2D P;
	P.Set(7.2, 4.3);
	P.Move(2.7, 4.1);
	
	Circle Cir;
	Cir.Set(1.0, 1.0, 3);
	double area = Cir.Area();
	double perimeter = Cir.Perimeter();
	
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;
	return 0;
}
