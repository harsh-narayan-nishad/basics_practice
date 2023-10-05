/*
Program to calculate Simple intrest 
if prenciple amount, intrest rate and
time is given.
*/

#include<iostream>
using namespace std;
int main()
{
    int s,p,r,t;
    cout<<"Enter valuse of Prenciple amount"<<endl;
    cin>>p;
    printf("Enter rate of intrest:-\n");
   cin>>r;
   cout<<"Enter timing to calculate simple intrest"<<endl;
   cin>>t;
   s=float((p*r*t)/100);
   cout<<"S.I. = "<<s<<endl;        
   return 0;
}