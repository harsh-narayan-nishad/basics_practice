#include<iostream>
using namespace std;
int main()
{
    int start,end,i,j,flag,n;
    cout<<"Enter start and end value of range:-"<<endl;
    cin>>start>>end;
    for(i=start;i<=end;i++)
    {
        if(i==1)
        {
            flag=0;
            break;
        }
        for(j=2;j<=i/2;j++)
        {
            n=i%j;
            if(n==0)
            {
                flag=1;
                break;
            }
            

            
        }
        if(flag==0)
        {
            cout<<i<<" ";

        }
    }
return 0;
}