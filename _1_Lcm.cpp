#include<iostream>
using namespace std;
int main()
{
    int a,b,lcm;
    cout<<"Enter two number for LCM"<<endl;
    cin>>a>>b;
    int max= (a>b)?a:b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            lcm=max;
            break;

        }
        max++;
    }
    cout<<"L.C.M = "<<lcm;
    return 0;


}