// Write a program to find armstorng number ---->
#include<iostream>
using namespace std;
int main()
{
    int start,end,i,r,sum=0,n;
    cout << "Enter start and end value of range\n";
    cin>>start>>end;
    // n=i;
    for(i=start; i<=end; i++)
    {
        sum=0;
        while (i>0){
            r=i%10;
            sum=sum+r*r*r;
            i=i/10;
        }
        
        
    }
    if(i==sum){
        cout<<sum<<" is armastron number\n";
    }

}