/*
Return*/
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int sum=0;
    while(a>0, b>0)
    {
        a=a%10;
        b=b%10;

        if(a+b>10)
        {
            sum++;
        }

        a/=10;
        b/=10;
    }

    return sum;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);

    return 0;
}