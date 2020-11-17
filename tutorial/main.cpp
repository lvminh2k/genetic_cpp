#include <iostream>
#include "Figures.h"
#include "FigIO.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void inputCircleData(istream& inDevice, Circle &cir)
{
	double Xo, Yo, r;
	inDevice >> Xo >> Yo >> r;
	cir.Set(Xo, Yo, r);
}

void outputCircleData(ostream& outDevice, Circle &cir)
{
	outDevice << " + Area of circle = " << cir.Area() << endl;
	outDevice << " + Perimeter of circle = " << cir.Perimeter() << endl;
}

//create Point2D and Circle objects
//
void testCase1()
{
	Point2D P;
	P.Set(7.2, 4.3);
	P.Move(2.7, 4.1);
	
	Circle Cir;
	Cir.Set(1.0, 1.0, 3);
	double area = Cir.Area();
	double perimeter = Cir.Perimeter();
	
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;
}

//input to object, output data to screen
//
void testcase2(){
	Circle myCircle;
	cout << "Input center and radius" << endl;
	inputCircleData(cin, myCircle);
	outputCircleData(cout, myCircle);
}

int main(int argc, char** argv) {
	Circle myCircle;
	cout << "Input center and radius: " << endl;
	cin >> myCircle;
	cout << myCircle;
	cin.get();
	return 0;
}
