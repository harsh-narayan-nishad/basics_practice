// Geeks for Geeks Que 1 practice

#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,5,7,8,9,17},n,i;
    cout<<"Enter an Element to search in the array:-"<<endl;
    cin>>n;
    for(i=0;i<=9;i++)
    {
        if(a[i]==n)
        {
            cout<<"Number is present at "<<i<<"th position"<<endl;
            return 0;
        }
    }
    return -1;

  }