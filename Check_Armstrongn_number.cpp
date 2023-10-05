#include<iostream>
using namespace std;
int main()
{
    int i,a,r,sum=0,n;
    cout<<"Enter any a number to check ARMSTRONG :-"<<endl;
    cin>> a ;
    n=a;
    while(a>0)
  {  r=a%10;
    sum=sum + r*r*r;
    a=a/10;
   }
    if(n==sum)
    {
        cout<<n<<" is armastrong number."<<endl;

    }
    else{
        cout<<n<<" is not a armstrong number";
    }

}