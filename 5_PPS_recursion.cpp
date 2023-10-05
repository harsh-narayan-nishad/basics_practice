/*
Program to calculate value of x^y. Via recursion.
Values should be taken from user.
*/

#include<iostream>
#include<math.h>
using namespace std;
int fun(int a, int b);
int main()
{
    int x,y;
    cout<<"Enter value of x&y in x^y"<<endl;
    cin>>x>>y;
    cout<<"Ans= "<<fun(x,y)<<endl;
}
int fun(int a, int b)
{
    return pow(a,b);
}