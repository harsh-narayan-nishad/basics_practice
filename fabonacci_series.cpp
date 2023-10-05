/*
Program to print fibonacci series up to n terms.
Number of terms should be taken from user.
*/

#include<iostream>
int fun(int n);
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of terms:-"<<endl;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<fun(i)<<"  ";
        if(i%10==0)
        {
            cout<<endl;
        }
    }
    return 0;
}
int fun(int a)
{
    if(a==1)
    {
        return 0;
        
    }
    else if(a==2)
    {
        return 1;
    }
    else 
    {
        return (fun(a-1)+fun(a-2));
    }
}