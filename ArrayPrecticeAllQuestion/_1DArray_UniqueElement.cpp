#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 2, 3, 4,4, 1, 3, 5};
    int size = sizeof(arr) / sizeof(int);
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    cout << "Unique number will be :" << ans << endl;
    return 0;
}