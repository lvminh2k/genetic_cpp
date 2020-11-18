#include "MyMatrix.h"

MyMatrix::MyMatrix(int n, int m){
	nrow = n;
	ncol = m;
	A = new int[m*n];
	nmatrix++;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) 
			A[i*m +j] =0;
}
MyMatrix::~MyMatrix(){
	delete[] A;
}
int MyMatrix::Get(int i, int j){
	return A[i*ncol + j];
}
void MyMatrix::Set(int i, int j, int v){
	A[i*ncol + j] = v;
}
ostream& operator<<(ostream& out, MyMatrix& M){
	for (int i=0; i<M.nrow; i++){
		for (int j=0; j<M.ncol; j++) 
			out << M.Get(i,j) << " ";
		out << endl;
	}
	return out;
}
