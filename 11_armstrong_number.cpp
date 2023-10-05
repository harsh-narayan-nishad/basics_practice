/*
PROGRAM TO CALCULATE THE ARMSTRONG NUMBER:-
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to check armstrong number:-"<<endl;
    cin>>a;
    int count=0,temp;
    temp=a;
    while(a>0)
    {
        a=a/10;
        count++;

    }
   // cout<<count<<"=count"<<endl;
   int temp2=temp,n,sum=0;
   while(temp>0)
   {
    n=temp%10;
    sum=sum+pow(n,count);
    temp=temp/10;
   }
   //cout<<"sum="<<sum;     ///-----> Mam sum 152 aa raha at 153. Last time loop nahi chal raha.Kal se hi try kar raha mai. Please resolve it. 
   if(sum==temp2)
   {
    cout<<temp2<<" is armstrong number:-"<<endl;
   }
   else{
    cout<<"Enter another number:-"<<endl;
   }
   return 0;

}