#include<iostream>
int fun(int n);
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to find the facorial using recursion "<<endl;
    cin>>a;
    cout<<"Factorial = "<<fun(a);
    return 0;
}
int fun(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    return n*fun(n-1);
}