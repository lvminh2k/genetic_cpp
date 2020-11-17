#include <iostream>

class PhanSo{
private:
	int tu, mau;
public:
	PhanSo();
	PhanSo(int);
	PhanSo(int, int);	
};

PhanSo::PhanSo(){
	tu = 0; mau = 1;
}
PhanSo::PhanSo(int t){
	tu = t; mau = 1;
}
PhanSo::PhanSo(int t, int m){
	if (m <0){
		tu = -t; mau = -m;
	}
	if (m == 0) m = 1;
	tu = t;
	mau = m;
}

int main(int argc, char** argv) {
	PhanSo a(2, 3);
	PhanSo b(5);
	PhanSo c;
	c = 7;
	return 0;
}
