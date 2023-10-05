#include<iostream>
using namespace std;
int main()
{
    int a[10],key;
    cout<<"Enter all the elements of the array:-"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key:-"<<endl;
    cin>>key;
    for(int i=0;i<=9;i++)
    {
        if(a[i]==key)
        {
            cout<<"found at index no. "<<i;
            return 0;
        }

    }
    cout<<"Key not found";
    return 0;
}