#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to check palindrome numebr:-"<<endl;
    cin>>a;
    int temp,rem,rev=0;
    temp=a;
    while(a>0)
    {
        rem=a%10;
        rev=rev*10 + rem;
        a=a/10;
    }
    cout<<rev<<endl;
    if(rev==temp)
    {
        cout<<temp<< " is a palidrome number:-"<<endl;

    }
    else
    {
        cout<<"Not a palindrome number:-"<<endl;
    }
    return 0;

}