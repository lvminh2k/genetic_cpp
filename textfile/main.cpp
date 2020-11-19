#include <iostream>
#include <fstream>
#include <vector>
#include <string>
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
void write_int_to_file_then_read_it(){
    ofstream outFile("data.txt", ios::out);
    int i = 19;
    outFile << i;
    outFile.close();

    ifstream inFile("data.txt");
    int x;
    inFile >> x;
    cout << x;
    inFile.close();
}


istream& operator >> (istream& inDev, vector<float>& a){
	float temp;
	a.resize(0);
	while (inDev >> temp){
		a.push_back(temp);
	}
	return inDev;
}

void input_vector_write_to_file_then_read_it(){
    vector<float> a;
	cout << "Input: ";
	cin >> a;
    cout << "display vector: ";
    for (int i:a){
        cout << i << " ";
    }
    cout << endl;

    ofstream outFile("data.txt", ios::out);
    for (int i:a){
        outFile << i << " ";
    }
    outFile.close();
    cout << "finish writing to file" << endl;

    cout << "read from file and display: ";
    ifstream inFile("data.txt");
    int x;
    while (inFile >> x){
        cout << x << " ";
    }
    inFile.close();
}
void read_string_from_text_file(){
    ifstream inFile("hello.txt");
    string s;
    while (inFile >> s){
        cout << s << endl;
    }
    inFile.close();
}
int main(){
    //write_string_to_txt_file();
    //read_all_string_from_txt_file();
    //write_int_to_file_then_read_it();
    //input_vector_write_to_file_then_read_it();
    read_string_from_text_file();
    cout << "done";
    return 0;
}