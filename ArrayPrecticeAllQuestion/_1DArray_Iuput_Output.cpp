#include <iostream>
using namespace std;

int main()
{
    // array Declare
    int arr[5];
    cout << "Enter the array element :" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Print Declare Array :" << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    // initialize array
    int brr[] = {1, 2, 3, 4, 5};

    cout << "Print initialize Array :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    // All Array Value Garbade
    int crr[5];
    cout << "Garbage Value :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    // All Array Element Zero
    int drr[5] = {0};
    cout << "All Array declare Zero :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << drr[i] << " ";
    }
    cout << endl;

    // All Array Value 1
    int err[5];
    for (int i = 0; i < 5; i++)
    {
        err[i] = 1;
    }
    cout << "Print All Element 1 :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << err[i] << " ";
    }
    cout << endl;

    return 0;
}