#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 3, 3, 4, 5};
    vector<int> brr{3, 3, 4, 5, 5, 1,1};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                ans.push_back(arr[i]);
                brr[j] = INT32_MIN;
                arr[i] = INT32_MIN;
            }
        }
    }
    cout << "Print Intersection :" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != INT32_MIN)
            cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}