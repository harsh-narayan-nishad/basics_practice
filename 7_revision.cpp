#include<iostream>
#include<math.h>
int fun(int a, int b);
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter value of x and y in x^y"<<endl;
    cin>>x>>y;
    cout<<"Ans= "<<pow(x,y);
}
int fun(int a, int b)
{
    return pow(a,b);
}