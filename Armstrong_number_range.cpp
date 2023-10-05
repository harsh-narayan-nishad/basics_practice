/*
Armstrong number in a range:-

*/


#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter start and end value of range:-"<<endl;
    cin>>a>>b;
    int i,j,n,count=0;
    for(i=a;i<=b;i++)
    {
        int sum=0,temp;
        temp=i;
        while(temp>0)
        {
            n=temp%10;
            sum=sum+ n*n*n;
            temp=temp/10;


        }
        if(sum==i)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}