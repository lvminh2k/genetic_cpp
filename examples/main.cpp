#include <iostream>
#include "Figures.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "hello LG and Genetic" << endl;
	Point2D P;
	P.Set(7.2, 4.3);
	P.Move(2.7, 4.1);
	Circle C;
	C.Set(1, 1, 2);
	double area = C.Area();
	cout << "Area " << area << endl;
	return 0;
}
