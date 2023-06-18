#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 5};
    vector<int> brr{6, 7, 8, 9};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        ans.push_back(brr[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = i + 1; j < ans.size(); j++)
        {
            if (ans[i] == ans[j])
            {
                ans[i] = INT32_MIN;
            }
        }
    }
    cout << "Print Union :" << endl;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     if (ans[i] != INT32_MIN)
    //     {
    //         cout << ans[i] << " ";
    //     }
    // }
    for (auto value : ans)
    {
        if (value != INT32_MIN)
        {
            cout << value << " ";
        }
    }
    cout << endl;

    return 0;
}
