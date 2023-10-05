#include<iostream>
using namespace std;
int main()
{
    int start,end;
    cout<<"Enter start and end value of range:-"<<endl;
    cin>>start>>end;
    int i,count=0,temp,n,j;
    for(i=start;i<=end;i++)
    {
        temp=i;
        for(j=1;j<temp;j++)
        {
            n=temp%j;
             if(n!=0)
        {
             cout<<i<<" ";
        }
        }
        
        
       


    }
    return 0;
}