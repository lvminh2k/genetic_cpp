#include <iostream>
#include <string>
#include <fstream>
using namespace std;
double tinh(double x, double y){
    if (y == 0){
        string s("divide by zero");
        throw s;
    }
        
    return x/y;
}

void test_manual_exception(){
    try{
        
        double x = 10;
        double y = 0;
        double t = tinh(x,y);
        cout << t << endl;
    }
    catch(string s){
        cout << "error " << s << endl;
    }
}

//https://www.codeproject.com/Questions/1191303/Cplusplus-create-copy-of-binary-file-read-write?fbclid=IwAR31WVyOTg2wBmUqL-gIoUaeBWNHHnm0-gWPh95npzQ8r4XFjsq0YpQJr1U
int copy_file(string from, string to){
    try{
        ifstream in(from);	
		in.seekg(0, ios::end);
		size_t len = in.tellg();
		unsigned char *oData = new unsigned char[len];
		in.read((char*)(&oData[0]), len);
		in.close(); 
		
		ofstream out(to);	
		out.write((char *)oData, len);
		out.close();

		delete[] oData;
        return 0;
    }
    catch(...){
        return 1;
    }
    
}
int main(){
    string from("main.exe");
    string to("c:\\temp\\main.exe");
    int kq = copy_file(from, to);
    cout << kq;
    return 1;
}