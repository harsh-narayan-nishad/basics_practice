#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your age:-"<<endl;
    cin>>a;
    if(a>=50)
    {
        cout<<"You are old";
    }
    else if(a>20 && a<50)
    {
        cout<<"You are young";
    }
    else
    {
        cout<<"You are baby";
    }

}