#include<iostream>
using namespace std;
int main()
{
    int nums=5;
    int *p=&nums;
    cout<<"Address = "<<p<<endl;
    cout<<"Value = "<<*p<<endl;
    cout<<"Value = "<<nums<<endl;
    cout<<"adress = "<<&nums<<endl;
    cout<<"Size of nums = "<<sizeof(nums)<<endl;
    cout<<"Size of pointer p = "<<sizeof(p)<<endl;
    cout<<"Size of pointer *p = "<<sizeof(*p)<<endl;

    // For charecters

    char a='j';
    char *q=&a;
    cout<<"Address = "<<q<<endl;
    cout<<"Value = "<<*q<<endl;
    cout<<"Value = "<<a<<endl;
    cout<<"adress = "<<&a<<endl;
    cout<<"Size of a = "<<sizeof(a)<<endl;
    cout<<"Size of pointer q = "<<sizeof(q)<<endl;
    cout<<"Size of pointer *q = "<<sizeof(*q)<<endl;
    
}