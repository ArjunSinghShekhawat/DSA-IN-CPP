#include <iostream>
using namespace std;

void update(int *arr)
{

    arr[0] = 11;
    arr[1] = 20;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int *ptr = arr;

    update(ptr);    
    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}