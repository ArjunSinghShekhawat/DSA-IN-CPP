#include <iostream>
#include <limits>
using namespace std;

int maximum(int arr[3][3])
{

    int maxi = INT32_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int minimum(int arr[3][3])
{
    int mini = INT32_MAX;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mini > arr[i][j])
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "The Maximum Value is :" << maximum(arr) << endl;
    cout << "The Minimum Value is :" << minimum(arr) << endl;
    
    return 0;
}