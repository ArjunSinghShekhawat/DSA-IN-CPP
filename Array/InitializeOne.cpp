#include <iostream>
using namespace std;

int main()
{

    int num[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        num[i] = 1;
    }
    cout << "Display the array element :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}