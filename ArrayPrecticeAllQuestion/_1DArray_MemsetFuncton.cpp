#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool arr[5];

    cout << "Before memset fuction invoke print all array element :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    memset(arr, false, sizeof(arr));

    cout << "After memset fuction invoke print all array element :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    char name[] = "arjunsingh";
    memset(name, 'a', sizeof(name));

    for (auto data : name)
    {
        cout << data << " ";
    }

    return 0;
}