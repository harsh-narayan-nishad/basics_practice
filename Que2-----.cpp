/*
Program to check a numebr is possitive or not.
Number should be taken from user.
*/

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:-"<< endl;
    cin>>a;
    if(a>0)
    {
        cout<<a<<" is Possitive number"<< endl;

    }
    else if(a==0)
    {
        cout<<a<<" is Nither negative nor possitive:-"<<endl;
    }
    else
    {
        cout<<a<<" is Negative Number";
    }
}