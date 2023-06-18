#include <iostream>
using namespace std;

int ZeroCount(int arr[], int size)
{
    int zeroCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
    }
    return zeroCount;
}
int OneCounting(int arr[], int size)
{

    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    return oneCount;
}
int main()
{
    int count[] = {1,1,1,0,0,1,1,0,1,0,1,1,1,0,0,0,1};
    int size = 16;

    cout<<"Zero present is :"<<ZeroCount(count,size)<<endl;
    cout<<"One Present is :"<<OneCounting(count,size)<<endl;

    return 0;
}