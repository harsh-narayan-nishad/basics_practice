/*
Program for checking leap year.
*/

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any year to check leep year:-"<<endl;
    cin>>a;
    (a%4==0)?cout<<"leap year:-":cout<<"Not a leep year:-";
    return 0;
}