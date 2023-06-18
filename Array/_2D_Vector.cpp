#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr;
    vector<vector<int>> brr(5, vector<int>(4, -1));

    for (auto data : brr)
    {
        for (auto value : data)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    vector<int> a{1, 2, 3, 4, 5, 7, 6, 5};
    vector<int> b{5, 7, 5, 3, 2, 6, 4, 8, 9};
    vector<int> c{3, 6, 5, 3, 2, 7, 6};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // for (auto value : arr)
    // {
    //     for (auto data : value)
    //     {
    //         cout << data << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}