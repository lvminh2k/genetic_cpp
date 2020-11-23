#include <iostream>
#include <map>
#include <queue>
#include <stack>
using namespace std;

int main(){
    map<string, string> mymap;
    string s("first");
    mymap[s] = "mot";
    string mot = mymap[s];
    cout << mot << endl;
    string s2("second");
    string hai = mymap[s2];
    cout << hai << endl;
    if (hai.length() == 0) cout << "ok" << endl;
    return 0;
}