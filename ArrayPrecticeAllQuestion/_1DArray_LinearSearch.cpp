#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{

    int arr[] = {1, 2, 7, 5, 8, 9, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int key;

    cout << "Enter the key element :" << endl;
    cin >> key;

    if (linearSearch(arr, size, key))
    {
        cout << "Present :" << endl;
    }
    else
    {
        cout << "Not Present :" << endl;
    }

    return 0;
}