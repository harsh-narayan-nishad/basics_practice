#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of terms:-"<<endl;
    cin>>n;
    int i,j,r;
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<1<<" ";
        }
        else if(i==2)
        {
            cout<<1<<" "<<2<<" ";
        }
        for(j=2;j<i;j++)
        {
            if(i%j!=0)
            {
                cout<<i<<" ";
                
            }
        }
    }
    return 0;
}