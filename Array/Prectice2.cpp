#include <iostream>
#include <vector>
using namespace std;

int duplicate(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
}
void input(vector<int> &arr)
{
    cout << "Ente array element :" << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size :" << endl;
    cin >> n;

    vector<int> arr(n + 1);

    input(arr);
    cout << "The duplicate number will be :" << duplicate(arr) << endl;

    return 0;
}