#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to check armstrong number:-"<<endl;
    cin>>n;
    int temp,sum=0,a;
    temp=n;
    while(n>0)
    {
        a=n%10;
        sum=sum+a*a*a;
        n=n/10;
    }
    cout<<sum<<" =sum"<<endl;
    cout<<temp<<" =temp"<<endl;
    if(sum==temp)
    {
        cout<<"Congrats! You have entered armstrong number:-"<<endl;

    }
    else
    {
        cout<<"Try another number:-"<<endl;
    }
    

    return 0;
}