#include <iostream>
#include <string.h>
using namespace std;

int stringLength(string name)
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
// void reverse(string& name)
// {

//     for (int i = 0; i < stringLength(name) / 2; i++)
//     {
//         char temp = name[i];
//         name[i] = name[stringLength(name) - 1 - i];
//         name[stringLength(name) - 1 - i] = temp;
//     }
// }
void reverse1(string &name){
    int start = 0;
    int end = stringLength(name)-1;
    cout<<"start end method"<<endl;
    while(start<end){
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;

        start++;
        end--;
    }
}
int main()
{

    string name;

    cout << "Enter name :" << endl;
    cin >> name;

    reverse1(name);
    for (auto value : name)
    {
        cout << value;
    }
    cout << endl;

    return 0;
}