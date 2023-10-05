/*
Program to checking prime number:-
*/

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to check prime:-"<<endl;
    cin>>a;
    int count=0;
    for(int i=2;i<a;i++)
    {
        int n=a%i;
        if(n==0)
        {
            count++;
        }
    }
    //cout<<"count= "<<count<<endl;
    if(count==0)
    {
        cout<<a<<" is a prime number:-"<<endl;
    }
    else 
    {
        cout<<"Try another number:-"<<endl;

    } 
    return 0;

}