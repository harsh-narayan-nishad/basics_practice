#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>100)
    {
        return (n-10);
    }
    else
    {
        return fun(fun(n+1));
    }
}

int main()
{
    int a;
    cout<<"Entrer value of a"<<endl;
    cin>>a;
    int r=fun(a);
    cout<<r;
    return 0;
}