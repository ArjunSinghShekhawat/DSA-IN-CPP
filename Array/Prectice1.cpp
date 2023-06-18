#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void input(vector<int> &arr)
{
    cout << "Enter element :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}
int main()
{

    int size;
    cout << "Enter the size of an array :" << endl;
    cin >> size;

    vector<int> arr(size);

    input(arr);
    int key;

    cout << "Enter the key :" << endl;
    cin >> key;

    cout<<"The index of enter key will be :"<<binarySearch(arr, key);
  

    return 0;
}