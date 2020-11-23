#include <iostream>
#include "MyContact.hpp"
#include <map>
#include <vector>

using namespace std;
MyContact c1,c2,c3,c4,c5;

void create_contacts(){
    c1.name = "Silva";
    c1.phone = "12345";
    c2.name = "Yasua";
    c2.phone = "23456";
    c3.name = "Lucifer";
    c3.phone = "34567";
    c4.name = "Johndo";
    c4.phone = "45678";
    c5.name = "Berlin";
    c5.phone = "56789";
}
void using_array(){
    MyContact* contacts = new MyContact[5];
    contacts[0] = c1;
    contacts[1] = c2;
    contacts[2] = c3;
    contacts[3] = c4;
    contacts[4] = c5;

    for (int i=0; i<5; i++){
        MyContact c = contacts[i];
        if (c.name.compare("Berlin") == 0){
            cout << c.name << " " << c.phone << endl;
        }
    }
}
void using_vector(){
    vector<MyContact> contacts;
    contacts.push_back(c1);
    contacts.push_back(c2);
    contacts.push_back(c3);
    contacts.push_back(c4);
    contacts.push_back(c5);
    for (MyContact c:contacts){
        if (c.name.compare("Berlin") == 0){
            cout << c.name << " " << c.phone << endl;
        }
    }
}
void using_map(){
    map<string, MyContact> contacts;
    contacts[c1.name] = c1;
    contacts[c2.name] = c2;
    contacts[c3.name] = c3;
    contacts[c4.name] = c4;
    contacts[c5.name] = c5;
    MyContact c = contacts["Berlin"];
    cout << c.name << " " << c.phone << endl;
}
int main(){
    create_contacts();
    using_map();
    return 0;
}