#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
vector<char> upperCase(char name[])
{
    int size = strlen(name);
    cout << size << endl;
    vector<char> ans;
    char c;
    int i = 0;
    while (i < size)
    {
        c = name[i] - 'a' + 'A';
        if (c == '\0')
        {
            ans.push_back(' ');
        }
        else
        {
            ans.push_back(c);
        }
        i++;
    }
    return ans;
}
int main()
{
    char ch[100];

    cout << "Enter your name :" << endl;
    cin.getline(ch, 50);

    for (auto value : upperCase(ch))
    {
        cout << value;
    }
    cout << endl;

    return 0;
}