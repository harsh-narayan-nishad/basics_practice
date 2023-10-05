#include<iostream>
using namespace std;
int main()
{
    int start,end;
    cout<<"Enter start and end value of range:-"<<endl;
    cin >>start>>end;
    int i,j,count=0,a;
    for(i=start;i<=end;i++)
    {
        /*
        
        switch(i)
        {
            case 1:cout<<1<<" ";
            break;
            case 2:cout<<2<<" ";
            break;
            case 3:cout<<3<<" ";
            break;
            default : break;
        }
        */
        for(j=2;j<=i/2;j++)
        {
            a=i%j;
            if(a==0)
            {
                count++;
            }
            if(count==0)
            {
                cout<<i<<" ";
            }
            count=0;

        }
    }
    return 0;
}