#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 3, 4, 5, 6, 7};
    vector<int> brr{3, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                ans.push_back(arr[i]);
                break;
                // arr[j] = INT32_MIN;
            }
        }
    }
    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
