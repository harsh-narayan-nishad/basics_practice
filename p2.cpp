#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:-"<<endl;
    cin>>a;
    if(a>0)
    {
        cout<<a<<" is possitive";
    }
    else if(a==0)
    cout<<"Number is zero";
    else if(a<0)
    cout<< a <<" is negative number:-";
    return 0;

}