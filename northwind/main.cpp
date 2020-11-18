#include <iostream>
#include "businessobjects/Products.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Products p(1, "Chais", 1, 1, "bottle", 20.0);
	cout << p.ProductName;
	return 0;
}
