#include <iostream>
#include <fstream>
using namespace std;

void write_string_to_txt_file(){
    ofstream outFile("hello.txt", ios::app); //app = append
    if (!outFile){
        cout << "can not open" << endl;
        return;
    }
    outFile << "I am fine, thank you, and you?" << endl;
    outFile.close();
}
void read_all_string_from_txt_file(){
    ifstream inFile("hello.txt");
    const int maxSize = 255;
    char buff[maxSize]; 
    while (inFile.getline(buff,maxSize)){
        cout << buff << endl;
    }
    inFile.close();
}
int main(){
    write_string_to_txt_file();
    read_all_string_from_txt_file();
    cout << "done";
    return 0;
}