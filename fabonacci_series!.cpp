/*
Fibonacci series up to  n terms.
*/


#include<iostream>
int fun(int a);
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter number of terms in the fabonacci series:-"<<endl;
    cin>>n;

    cout<<"Fibonacci series up to "<<n<<" terms are"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<fun(i)<<" ";
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