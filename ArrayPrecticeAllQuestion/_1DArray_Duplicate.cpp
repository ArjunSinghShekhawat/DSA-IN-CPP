#include <iostream>
using namespace std;

int main()
{
    int arr[] ={1,2,3,3,5};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        int index = abs(arr[i]);
        if (arr[index] < 0)
        {
            cout << index+1 << " ";
        }
        arr[index] *= (-1);
    }

    return 0;
}