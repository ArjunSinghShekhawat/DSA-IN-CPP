#include <iostream>
using namespace std;

void rowPrint(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void coloumPrint(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int num[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rowPrint(num);
    coloumPrint(num);
    return 0;
}