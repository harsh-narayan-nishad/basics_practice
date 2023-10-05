#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any year"<<endl;
    cin>>a;
    
    if((a%4==0 && a%100!=0) || (a%400==0))
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Not a leap year";
    }

    
    return 0;
}