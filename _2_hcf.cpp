#include<iostream>
using namespace std;
int main()
{
    int a,b,hcf;
    cout<<"Enter to number to find hcf:-"<<endl;
    cin>>a>>b;
    int i,max=(a>b)?a:b;
    for(i=1;i<=max/2;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
            
        }
    }
    cout<<"H.C.F = "<<hcf<<endl;



    return 0;

}