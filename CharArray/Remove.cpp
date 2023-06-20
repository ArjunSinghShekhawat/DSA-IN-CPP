#include <iostream>
#include <string.h>
using namespace std;

int getLength(char name[])
{
    int i = 0;
    int count = 0;
    while (name[i] != '\0')
    {
        i++;
        count++;
    }
    return count;
}
remove(char name[])
{
    int size = getLength(name);
    int i = 0;
    while (i < size)
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
        i++;
    }
}
int main()
{

    char name[100];

    cout << "Enter your name :" << endl;
    cin.getline(name, 50);

    remove(name);
    cout << name << endl;

    return 0;
}