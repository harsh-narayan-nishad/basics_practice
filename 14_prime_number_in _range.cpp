#include<iostream>
using namespace std;
int main()
{
    int start,end,a,temp,j,i,count=0;
    cout<<"Enter start and end value of range:-"<<endl;
    cin>>start>>end;
    if(start>end)
    {
        temp=end;
        end=start;
        start=temp;
    }
    for(i=start ; i<=end; i++)
    {
        for(j=1; j<=i;j++)
        {
            a=i%j;
            if(a==0)
            {
                count++;
            }
        }
        if(count==0)
    {
        cout<<i<<"\t";
    }
    else
    {
        cout<<"";
    }
    }
    
}
