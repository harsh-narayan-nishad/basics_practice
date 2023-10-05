#include<iostream>
using namespace std;
int fun(int n);
int main()
{
    int a;
    cout<<"Enter a number to get its factorial:-"<<endl;
    cin>>a;
    cout<<"Factorial= "<<fun(a);
}
int fun(int n)
{
    if(n==1)
    {
    return 1;

    }

    return n*fun(n-1);
}