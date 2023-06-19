#include <iostream>
using namespace std;
void extremePrint(int *arr, int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " " << arr[end]<<" ";
        }
        start++;
        end--;
    }
    cout << endl;
}
int main()
{
    // extreme print
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);

    extremePrint(arr, size);

    return 0;
}