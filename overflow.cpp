#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    /*
    int a= INT_MAX;                  Max value print karega.
                                     Inbuilt feature hai.
    cout<<a<<endl;
    */

   int a=INT_MAX;
   cout<<a+1<<endl;          /*----> In this condition overflow will takes place.
                                     Means max range pahoochne ke baad vo negative
                                     boundry se fir se start ho jayega.
                                     */
}