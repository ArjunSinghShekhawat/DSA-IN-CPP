#include <bits/stdc++.h>
using namespace std;
int maximum(int *arr, int size)
{
    int maxi = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int minimum(int *arr, int size)
{
    int mini = INT32_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);

    cout << "Maximum number :" << maximum(arr, size) << endl;
    cout << "Minimum number :" << minimum(arr, size) << endl;

    return 0;
}