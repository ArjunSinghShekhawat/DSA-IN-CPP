#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{2, 5, 4, 3, 7, 8, 9};
    vector<int> brr{2, 5, 3, 8, 6, 9, 1};
    vector<int> crr{2, 2, 5, 4, 8, 9, 9};
    vector<int> drr{7, 9, 8, 2, 4, 7, 9};
    int sum = 25;

    for (int i = 0; i < arr.size(); i++)
    {
        int element1 = arr[i];
        for (int j = i + 1; j < brr.size(); j++)
        {
            int element2 = brr[j];
            for (int k = j + 1; k < crr.size(); k++)
            {
                int element3 = crr[k];
                for (int l = k + 1; l < drr.size(); l++)
                {
                    int element4 = drr[l];

                    if (element1 + element2 + element3 + element4 == sum)
                    {
                        cout << "(" << element1 << "," << element2 << "," << element3 << "," << element4 << ")" << endl;
                    }
                }
            }
        }
    }
    return 0;
}