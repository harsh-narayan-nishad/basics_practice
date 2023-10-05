#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x,sum=0,temp1,temp2,count=0,temp3;
    cout<<"Enter a numbre to check Armstrong:-"<<endl;
    cin>>n;
    temp1=n;
    while(temp1>0)
    {
        temp2=temp1%10;
        count++;
    }
    temp3=n;
    while(temp3>0)
    {
        x=temp3%10;
        sum=sum + pow(x,count);
        temp3=temp3/10;

    }
    if(sum==n)
    {

        cout<<"You have entered Armstrong number";
    }
    else
    {
        cout<<"Not a armstrong number";
    }
    return 0;
}
