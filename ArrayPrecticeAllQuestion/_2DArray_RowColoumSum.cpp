#include<iostream>
using namespace std;

void rowSum(int arr[3][3]){
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<"Row Sum "<<sum<<endl;
    }
    cout<<endl;
}
void coloumSum(int arr[3][3]){
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum+=arr[j][i];
        }
        cout<<"Coloum Sum "<<sum<<endl;
    }
    cout<<endl;
}
int main(){
    int num[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    rowSum(num);
    coloumSum(num);
    return 0;
}