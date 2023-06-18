#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    cout << "Linear Search :" << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
            break;
           
        }
    }
    return false;
}
int main()
{
    int num[] = {1,2,3,4,5};
    int size = 5;
    int key = 44;

    if(linearSearch(num,size,key)){
        cout<<"Present :"<<endl;
    }
    else{
        cout<<"Not Present :"<<endl;
    }

    return 0;
}