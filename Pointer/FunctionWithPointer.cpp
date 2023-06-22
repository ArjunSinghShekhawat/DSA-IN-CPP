#include <iostream>
using namespace std;

void update(int num)
{

    cout << "The address of num in update fun ->" << &num << endl;
    num = 34;
    cout << "The value of num in update fun ->" << num << endl;
}
void update1(int *num)
{
 *num = *num+1;
}
void icrement(int *a,int* b){

    int temp = *a;
    *a = *b;
    *b = temp;

}
int main()
{
    int num = 5;

    // cout << "The address of num in main fun ->" << &num << endl;
    // cout << "The value of num in main fun ->" << num << endl;
    // update(num);

    // int *ptr = &num;

    // update1(ptr);

    // cout<<num<<endl;

    int a = 10;
    int b = 20;

    int* ptr = &a;
    int* qtr = &b;

    icrement(ptr,qtr);

    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;

    return 0;
}