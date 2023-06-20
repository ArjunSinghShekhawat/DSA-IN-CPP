#include <iostream>
#include <string.h>
using namespace std;

int getLength(char ch[])
{
    int i = 0;
    int count = 0;

    while (ch[i] != '\0')
    {
        i++;
        count++;
    }
    return count;
}
bool palindrome(char ch[])
{
    cout<<getLength(ch)<<endl;

    int size = getLength(ch);
    int i = 0;
    while (i < size)
    {

        if (ch[i] != ch[size - i - 1])
        {

            return false;
        }
        i++;
    }
    return true;
}
int main()
{
    char ch[100];

    cout << "Enter charactor " << endl;
    cin >> ch;

    if (palindrome(ch))
    {
        cout << "Palindrome :" << endl;
    }
    else
    {
        cout << "Not Palindrome :" << endl;
    }

    return 0;
}