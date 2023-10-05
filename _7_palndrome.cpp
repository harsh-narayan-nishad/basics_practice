#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to check palindrome:-"<<endl;
    cin>>a;
    int temp,sum=0,n;
    // jai mata di
    temp=a;
    while(a>0)
    {
        n=a%10;
        sum= sum*10 +n;
        a=a/10;
    }
    if(sum==temp)
    {
        cout<<"Palindrome number:-"<<endl;
    }
    else
    {
        cout<<"Not a palindrome number:-"<<endl;
    }
    



    return 0;
}