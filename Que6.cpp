/*
Program to print of a number.
*/


#include<iostream>
using namespace std;
int main()
{
    int n,r=1,i;
    cout<<"Enter a number to get the factorial"<<endl;
    cin>>n;
    if(n<0)
    {
        cout<<"Factorial not possible"<<endl;
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        r=r*i;
    }
    cout<<n<<"! = "<<r;
    return 0;
}