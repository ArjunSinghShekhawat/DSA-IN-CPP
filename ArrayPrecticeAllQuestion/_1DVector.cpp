#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr;

    cout << arr.capacity() << endl;
    cout << arr.size() << endl;
    cout << arr.empty() << endl;

    arr.push_back(11);
    arr.push_back(12);

    cout << arr.empty() << endl;

    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;

    arr.pop_back();

    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;

    vector<int> brr(10, -1);
    for (auto value : brr)
    {
        cout << value << " ";
    }
    cout << endl;

    vector<int> crr{1, 2, 3, 4, 5};
    for (auto value : crr)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}