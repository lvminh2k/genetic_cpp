#include <iostream>
#include <fstream>
using namespace std;

void write_number_to_file_then_read_it(){
    ofstream outFile("data.dat", ios::binary);
    int i = 19;
    int* position_of_i_in_memory = &i;
    double d = 11.2;
    double* position_of_d_in_memory = &d;
    outFile.write((char*)position_of_i_in_memory, sizeof(i));
    outFile.write((char*)position_of_d_in_memory, sizeof(d));
    outFile.close();

    ifstream inFile("data.dat", ios::binary);
    int x;
    double y;
    inFile.read( (char*)&x, sizeof(x) );
    inFile.read( (char*)&y, sizeof(y) );
    cout << x << " " << y << endl;
    inFile.close();
}
int main(){
    write_number_to_file_then_read_it();
    return 0;
}