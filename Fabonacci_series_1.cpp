#include<iostream>
int fun(int n);
using namespace std;
int main()
{
    int a;
    cout<<"Enter number of terms :-"<<endl;
    cin>>a;
    cout<<"fibonacci series up to "<<a<<" terms are-"<<endl<<"***************************************"<<endl<<endl<<endl;
    int i;
    for(i=1;i<=a;i++)
    {
        cout<<fun(i)<<" ";
    }
    cout<<endl<<endl<<endl;
    return 0;
}
int fun(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;

    }
    else
    {
        return (fun(n-1)+fun(n-2));
    }


}
