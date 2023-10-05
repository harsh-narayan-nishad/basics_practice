#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any year "<<endl;
    cin>>a;
    if(a%4==0)
    {
        cout<<"leap year"<<endl;

    }
    else
    {
        cout<<"Not a leap year"<<endl;
    }
    return 0;
}