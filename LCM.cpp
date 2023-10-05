/*
Program to find the L.C.M.
****************************
*/


#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two number for L.C.M:-"<<endl;
    cin>>a>>b;
    int max,lcm;
    max= (a>b) ? a:b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    cout<<lcm<<" = L.C.M."<<endl;
    return 0;
}