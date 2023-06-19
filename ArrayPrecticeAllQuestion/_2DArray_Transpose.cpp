#include <iostream>
using namespace std;
void transpose(int num[3][3])
{
    int transpose[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = num[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int num[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transpose(num);

    return 0;
}