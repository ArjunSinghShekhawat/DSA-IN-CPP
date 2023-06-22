#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // int b = 5;

    // cout << "A address :" << &a << endl;
    // cout << "B address :" << &b << endl;

    // int *ptr = &a;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << &ptr << endl;

    // int val = 10;
    // char ch = 'a';
    // double d = 20.90;

    // int *itr = &val;
    // char *ctr = &ch;
    // double *dtr = &d;

    // cout << sizeof(itr) << endl;
    // cout << sizeof(ctr) << endl;
    // cout << sizeof(dtr) << endl;

    // int *ptr;
    // cout<<*ptr<<endl;

    // int *qtr = nullptr;
    // cout<<*qtr<<endl;

    // copy pointer
    int a = 10;

    int *p = &a;
    int *q = p;
    int *r = q;

    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    cout << q << endl;
    cout << *q << endl;
    cout << &q << endl;
    cout << r << endl;
    cout << *r << endl;
    cout << &r << endl;

    return 0;
}