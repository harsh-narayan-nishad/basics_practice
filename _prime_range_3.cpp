/*

Prime number in a range:-


*/


#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter start and end value of range:-"<<endl;
    cin>>a>>b;
    int i,j,count=0;
    for(i=a;i<=b;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            cout<<i<<" ";
            
        }
        count=0;
        
    }
    return 0;
}