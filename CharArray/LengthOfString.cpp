#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[100];

    cout << "Enter Your Name :" << endl;
    cin.getline(name, 50);

    int i = 0;
    int count = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    cout << "Length of string :" << count << endl;
    return 0;
}