#include<iostream>
using namespace std;
int main()
{
    int start,end;
    cout<<"Enter star and end value of range:-"<<endl;
    cin>>start>>end;
    int i,sum,n,temp;
    for(i=start;i<=end;i++)
    {
        sum=0;
        temp=i;
        while(temp>0)
        {
            n=temp%10;
            sum=sum+ n*n*n;
            temp=temp/10;
        }
        if(i==sum)
        {
            cout<<i<<" ";
        }
        return 0;
    }
}