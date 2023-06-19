#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, -5, -8, 45, -89, 9, -6, 87};

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        if (arr[start] < 0)
        {
            start++;
        }
        else if (arr[end] > 0)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
        }
    }
    cout << "Print Array Element :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}