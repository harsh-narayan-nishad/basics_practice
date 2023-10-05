/*
Program for making a clculator:-
*/
#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char ch;
    cout<<"Enter two number:-"<<endl;
    cin>>a>>b;
    cout<<"Enter operator:-"<<endl;
    cin>>ch;
    switch(ch)
    {
        case '+':cout<<a<<" + " <<b<<" = "<<a+b<<endl;
        break;
        case '-': cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        break;
        case '*':cout<<a<<" * " <<b<<" = "<<a*b<<endl;
        break;
        case '/':cout<<a<<" / " <<b<<" = "<<a/b<<endl;
        break;
        case '%':cout<<a<<" % " <<b<<" = "<<(int)a%(int)b<<endl;
        break;
    }
    return 0;
}