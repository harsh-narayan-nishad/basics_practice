/*
program to print all the even number from 2 to n.
*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    
    for(i=2;i<=n;i+=2)
    {
        cout<<i<<" "<<endl;
    }
    return 0;
}