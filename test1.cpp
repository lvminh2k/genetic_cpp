#include <iostream>
    #include <string>
    using namespace std;
    int main ()
    {
        string str ("Steve jobs");
        unsigned long int found = str.find_first_of("aeiou");
        while (found != string :: npos)
        {
            str[found] = '*';
            found = str.find_first_of("aeiou", found + 1);
        }
        cout << str << '\n';
        return 0;
    }
