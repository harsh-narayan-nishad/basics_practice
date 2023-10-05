/*
Program to find the GCD:
*/

#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter any two number for GCD:-"<<endl;
    cin>>x>>y;
    int i,gcd;
    for(i=1;i<=x && i<=y; i++)
    {
        if(x%i==0 && y%i==0)
        {
            gcd=i;
        }
    }

    cout<<"GCD = "<<gcd<<endl;
    return 0;
}