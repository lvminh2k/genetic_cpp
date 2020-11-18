#include <iostream>
#include "MyMatrix.h"

int MyMatrix::nmatrix = 0;
int main(int argc, char** argv) {
	MyMatrix M(3, 4);
	M.Set(1, 1, 9);
	cout << M;
	cout << "number of matrix: " << M.nmatrix << endl;
	MyMatrix N(3, 4);
	cout << "number of matrix: " << M.nmatrix << endl;
	cout << "number of matrix: " << N.nmatrix << endl;
	
	return 0;
}
