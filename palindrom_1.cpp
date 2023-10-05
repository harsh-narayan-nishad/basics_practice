#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to check a number is palindrome:-"<<endl;
    cin>>n;
    int temp,sum=0,a;
    temp=n;
    while(n>0)
    {
        a=n%10;
        sum=sum*10+a;
        n=n/10;

    }
    if(sum==temp)
    {
        cout<<"Congrsts! You have enterd palindrome number:-"<<endl;

    }
    else
    {
        cout<<"Try another number:-"<<endl;
    }


    return 0;

}