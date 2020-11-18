#include <iostream>
#include "PhanSo.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	PhanSo a(1,3), b(2,5), c;
	c = a + b;
	cout << c << endl;
	cout << ++c << endl;
	a += b;
	cout << a << endl;
	cout << b++ << endl;
	cout << b << endl;
	return 0;
}
