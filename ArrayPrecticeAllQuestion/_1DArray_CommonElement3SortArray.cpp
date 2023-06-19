#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{3, 2, 4, 6, 8, 10};
    vector<int> brr{3, 5, 7, 9, 10};
    vector<int> crr{1, 2, 3, 6, 8, 10};
    vector<int> ans;
    int i, j, k;
    i = k = j = 0;

    while (i < arr.size() && j < brr.size() && k < crr.size())
    {

        if (arr[i] == brr[j] && brr[j] == crr[k])
        {
            ans.push_back(arr[i]);
            i++;
            j++;
            k++;
        }
        else if (arr[i] < brr[j])
        {
            i++;
        }
        else if (brr[j] < crr[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}