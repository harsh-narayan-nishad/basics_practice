#include<iostream>
using namespace std;
int main()
{
    int a,i,sum=0;
    cout<<"Enter number of terms";
    cin>>a;
    for(i=a;i>=0;i--)
    //I'm not able to terminate the loops
    //please mention how can I terminate this loop
    {
        cout<<i<<" ";
    }
    cout<<"\n"<<"It is "<<a<<" "<<  "terms of natural number";
   /* for(i=0;i<=a;i++)
    {
        sum=sum+i; 
        cout<<sum;
    }*/
}