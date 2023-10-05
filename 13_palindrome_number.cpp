/*
Progream to check a number is palindrome or not:-
Number should be taken from use.
*/

#include<iostream>
using namespace std;
int main()
{
    int a,temp,n,sum=0;
    cout<<"Enter a number to check palindrome number:-"<<endl;
    cin>>a;
    temp=a;
    while(a>0)
    {
        n=a%10;
        sum=sum*10 +n;
        a=a/10;
    }
    if(sum==temp)
    {
        cout<<"Number is palindrome number:-"<<endl;
    }
    else
    {
        cout<<"Try another number:-";
    }
    return 0;
    

}