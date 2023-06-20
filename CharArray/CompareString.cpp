#include <iostream>
#include <string.h>
using namespace std;

bool compare(string &name, string &name1)
{
    if (name.length() != name1.length())
        return false;

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] != name1[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{

    string name = "arjun";
    string name1 = "arjuna";

    cout << compare(name, name1) << endl;
    return 0;
}