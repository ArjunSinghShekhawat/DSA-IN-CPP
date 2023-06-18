#include <iostream>
#include <cstring>
using namespace std;

void print(bool arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << boolalpha <<arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    bool arr[5];
    int size = 5;

    memset(arr, false, sizeof(arr));

    print(arr, size);

    return 0;
}