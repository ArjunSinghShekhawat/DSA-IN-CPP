#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ch[7] = {'a', '\0', 'j', '\0', 'u', '\0', 'n'};
    string name;
    name[0] = 'a';
    name[1] = '\0';
    name[2] = 'r';
    name[3] = '\0';
    name[4] = 'j';
    name[5] = '\0';

    // cout << "ch -> " << ch << endl;
    // cout << name << endl;
    cout << "name ->" << name << endl;

    return 0;
}