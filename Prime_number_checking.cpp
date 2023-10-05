#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to chek prime:-"<<endl;
    cin>>n;

    int count=0,a,i;
    for(i=2;i<n;i++)
    {
        a=n%i;
        if(a==0)
        {
            count++;
        }
        
    }
    if(count>0)
    {
        cout<<"Not a prime number:-"<<endl;
    }
    else
    {
        cout<<"congrats! You have entered prime number:-"<<endl;

    }
    return 0;


    return 0;
}