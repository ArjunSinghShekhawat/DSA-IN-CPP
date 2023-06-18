#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> drr;
    cout<<"Empty or not :"<<drr.empty()<<endl;


    vector<int> crr{1, 2, 3, 4, 5};

    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }

    cout << endl;
    int n;
    cout << "Enter the size :" << endl;
    cin >> n;

    vector<int> brr(n, 101);

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
    vector<int> arr;

    cout << "Capacity ->" << arr.capacity() << endl;
    cout << "Size     ->" << arr.size() << endl;

    arr.push_back(11);
    arr.push_back(12);
    arr.push_back(13);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arr.pop_back();
    arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}