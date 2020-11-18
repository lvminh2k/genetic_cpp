#ifndef _Phan_So_h
#define _Phan_So_h

#include <iostream>
using namespace std;

class PhanSo{
private:
	int tu, mau;
public:
	PhanSo();
	PhanSo(int, int);
	PhanSo& operator+=(const PhanSo&);  // B += A;
	const PhanSo operator+(const PhanSo&) const; // C = A + B
	bool operator==(const PhanSo&) const; // if (A == B)
	PhanSo& operator++(); // ++ tien to ++A
	PhanSo operator++(int); // ++ hau to A++
friend ostream& operator<<(ostream& out, const PhanSo& src);
};

#endif
