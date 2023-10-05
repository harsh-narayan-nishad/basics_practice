#include<iostream>
using namespace std;
int main()
{
    int start,end;
    cout<<"Enter start and end value of range:-"<<endl;
    cin>>start,end;
    int i,j,count=0,a;
    for(i=start;i<=end;i++)
    {
        for(j=2;j<i;j++)
        {
            a=i%j;
            if(a==0)
            {
                count++;
                break;
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