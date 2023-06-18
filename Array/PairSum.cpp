#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{2, 1, 4, 6, 8, 9,-2};
    vector<int> brr{2, 3, 5, 7, 8, 9, 1, 2,12};

    int sum = 10;

    // pair sum
    //  for(int i=0;i<arr.size();i++){
    //      for(int j=i+1;j<arr.size();j++){
    //          if(arr[i]+arr[j]==sum){
    //              cout<<"( "<<arr[i]<<" , "<<arr[j]<<" )"<<endl;
    //              exit(0);
    //          }
    //      }
    //  }

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] + brr[j] == sum)
            {
                cout << "( " << arr[i] << "," << brr[j] << " )" << endl;
                exit(0);
            }
        }
    }

    return 0;
}