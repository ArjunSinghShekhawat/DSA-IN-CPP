#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{0,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0};

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        if (arr[end] == 1)
        {
            end--;
        }
        if (arr[start] != 0 && arr[end] == 0)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        if (arr[end] != 1 && arr[start] == 1)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    cout << "Sort array :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}