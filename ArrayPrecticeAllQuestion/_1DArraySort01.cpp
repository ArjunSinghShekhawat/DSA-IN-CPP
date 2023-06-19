#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr{1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1};

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        if (arr[start] == 0)
        {
            start++;
        }
        else if (arr[end] == 1)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
        }
    }
    print(arr);
    return 0;
}