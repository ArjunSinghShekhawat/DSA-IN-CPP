#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{

    for (int i = 0; i < size / 2; i++)
    {
        // int temp = arr[i];
        // arr[i] = arr[size - i - 1];
        // arr[size - i - 1] = temp;
        swap(arr[i], arr[size - i - 1]);
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    reverse(arr, size);
    print(arr, size);
    return 0;
}