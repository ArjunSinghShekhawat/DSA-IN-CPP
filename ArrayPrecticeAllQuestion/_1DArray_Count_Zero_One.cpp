#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 0,1, 0, 1, 1, 1, 0, 0, 1, 0};
    int size = sizeof(arr) / sizeof(int);
    int zero = 0;
    int one = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    cout << "Zero ->" << zero << endl;
    cout << "One  ->" << one << endl;
    return 0;
}