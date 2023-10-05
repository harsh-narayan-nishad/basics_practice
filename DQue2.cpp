/*
Check wether a triangle is possible or not
*/

#include<iostream>
using namespace std;
int main()
{
    cout<<"Validity of a triangle by its side:-"<<endl<<"---------------------------------------"<<endl;
    int a,b,c;
    cout<<"Enter all the sides of a triangele"<<endl;
    cin>>a>>b>>c;
    if(a+b>c)
    {
        cout<<"Valid"<<endl;
        cout<<"1";
    }
    else if(b+c>a)
    {
        cout<<"Valid"<<endl;
        cout<<"2";
    }
    else if(c+a>b)
    {
        cout<<"Valid"<<endl;
        cout<<"3";

    }
    else
    {
        cout<<"Invalid triangle";
    }
    return 0;
}