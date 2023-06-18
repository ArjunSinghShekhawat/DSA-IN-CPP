#include<iostream>
#include<limits>
using namespace std;

int min(int arr[],int size){
    int min = INT32_MAX;
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;

}
int main(){

    int arr[] = {1,3,-7,88,44,90,14};
    int size = 7;

    cout<<"The minimum value :"<<min(arr,size)<<endl;
    return 0;
}