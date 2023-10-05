#include<iostream>
int fun(int n);
using namespace std;
int main()
{
    cout<<"Prining fabonacci series up to n terms:-"<<endl;
    cout<<"---------------------------------------"<<endl;
    int a;
    cout<<"Enter number of terms:-"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cout<<fun(i)<<"\t";
    }
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