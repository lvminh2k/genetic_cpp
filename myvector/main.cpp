#include <iostream>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//input and display a vector
//
void testacse1(){
	int n; vector<float> a; float temp;
	cout << "Enter array size: "; cin >> n;
	if (n <1){
		cout << "Invalid size!" << endl;
	}
	for (int i =0; i<n; i++){
		cout << "a[" << i << "] = "; cin >> temp;
		a.push_back(temp);
	}
	cout << "Data: ";
	for (int i =0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

istream& operator >> (istream& inDev, vector<float>& a){
	float temp;
	a.resize(0);
	while (inDev >> temp){
		a.push_back(temp);
	}
	return inDev;
}

ostream& operator << (ostream& outDev, vector<float>& a){
	for (int i=0; i<a.size(); i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(int argc, char** argv) {
	vector<float> a;
	cout << "Input: ";
	cin >> a;
	cout << "Result: ";
	cout << a;
	return 0;
}
