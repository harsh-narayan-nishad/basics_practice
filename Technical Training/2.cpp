/*
Retrn carry of numbers after adding digits for two number.
*/

#include<iostream>
using namespace std;

int sum(int a, int b){
    int temp,x1=0,y1,sum1=0, sum2=0;
    while(a>0)
    {
        temp= a%10;
        a=a/10;

        if(x1!=0)
        {
            x1=temp;
        }

        if(temp!= x1)
        {
            y1=temp;
        }

        if(x1+y1>10)
        {
            sum1= x1 +y1 -10;
        }
    }

    x1=0,y1=0;

    while(b>0)
    {
        temp= b%10;
        b=b/10;

        if(x1!=0)
        {
            x1=temp;
        }

        if(temp!= x1)
        {
            y1=temp;
        }

        if(x1+y1>10)
        {
            sum2= x1 +y1 -10;
        }
    }

    return sum1+ sum2;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
    return 0;
}