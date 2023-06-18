#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;

    cout << "Enter the size :" << endl;
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the value :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << "Print the element :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans ^= arr[i];
    }
    cout << "Unique Element will be :" << ans << endl;

    return 0;
}