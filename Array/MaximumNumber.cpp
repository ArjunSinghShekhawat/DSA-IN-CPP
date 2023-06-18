#include <iostream>
#include<math.h>
#include<limits>
using namespace std;

int maximum(int arr[], int size)
{

    int maxi = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;

}
int main()
{
    int arr[] = {1,2,4,7,5,9,8,66,8,99,90,12};
    int size = 12;

    cout<<"Maximum number is :"<<maximum(arr,size)<<endl;

    return 0;
}