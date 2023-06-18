#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    cout << "Print Array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void icm(int arr[], int size)
{
    arr[0] = 11;
    arr[1] = 12;
    arr[2] = 13;
    arr[3] = 14;
    arr[4] = 15;
}
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    print(arr, size);
    icm(arr, size);
    print(arr, size);

    return 0;
}