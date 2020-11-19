#include <iostream>
using namespace std;

class Diem3D{
    int x, y, z;
public:
    Diem3D(int a, int b, int c){
        x = a; y = b; z = c;
    }
friend ostream& operator<< (ostream& os, Diem3D& d);
};
ostream& operator<< (ostream& os, Diem3D& d){
    os << "(" << d.x << "," << d.y << "," << d.z << ")";
    return os;
}
int main(){
    Diem3D d(1,2,3);
    cout << "D: " << d << endl;
    return 0;
}