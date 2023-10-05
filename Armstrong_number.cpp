/*
Program to check a number is armstrong or not.
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,n,count=0,temp,temp2,sum=0;
    cout<<"Enter a number to check armstrong number:-"<<endl;
    cin>>a;
    temp=a;
    while(a>0)
    {
        a/=10;
        count++;

    }
    temp2=temp;
   
   while(temp>0)
    {
        n=temp%10;
        //cout<<n<<" ";
        //int power=pow(n,count); //--->Sum=152 at a=153.Why?
        //cout<<power<<" ";
        sum=(sum+n*n*n);
        //cout<<sum<<" ";
        temp=temp/10;
        //cout<<temp<<" ";
    }
    //cout<<"count="<<count<<endl;94
    //cout<<"temp= "<<temp<<endl;
    //cout<<"sum= "<<sum<<endl;

    
    if(temp2==sum)
    {
        cout<<temp2<<" is armstrong number:-";
    }
    else
    {
        cout<<"Try another number:-";
    }
    return 0;
    

    
}