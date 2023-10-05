#include<iostream>
using namespace std;
int main()
{
    int x,temp,sum=0,n;
    cout<<"Enter a number:-"<<endl;
    cin>>x;
    temp=x;
    while(temp>0)
    {
        n=temp%10;
        sum= sum*10 + n;
        temp/=10;
    }
    if(x==sum)
    {
        cout<<"Palindrome number";
    }
    else
    {
        cout<<"Not a palindrom number:";
    }
    return 0;
    

}