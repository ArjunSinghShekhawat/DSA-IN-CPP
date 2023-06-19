#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(10, vector<int>(5, -1));

    for (auto data : arr)
    {
        for (auto value : data)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}