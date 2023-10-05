/*
program to check a number is palindrome or not.
Number should be taken from user.
*/

#include<iostream>
using namespace std;
int main()
{
    int a,n,temp,sum=0;
    cout<<"Enter a number to check Palindrome :-"<<endl;
    cin>>a;
    temp=a;
    while(a>0)
    {
        n=a%10;
        sum=sum*10 +n;
        a/=10;
    }
    
    if(sum==temp)
    {
        cout<<temp<<" is palindrome number:-";
    }
    else
    {
        cout<<"Try another number:-";
        
    }
    return 0;
}