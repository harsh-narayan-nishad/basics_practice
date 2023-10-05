#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to check palindrome:-"<<endl;
    cin>>a;
    int sum=0,n,temp;
    temp=a;
    while(a>0)
    {
        n=a%10;
        sum = sum*10 + n;
        a=a/10;
    }
    if(sum==temp)
    {
        cout<<temp << " is a palindrome number:-"<<endl;
    }
    else
    {
        cout<<"Try an other number:-"<<endl;
    }
    return 0;
}