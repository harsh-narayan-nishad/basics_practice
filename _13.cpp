/*
Print this pattern:-

A
B C
C D E
D E F G
--------------
Doubt:-
A
A A
A A A
A A A A
Why?.
-------------------
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n:-"<<endl;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        char value;
        while(col<=row)
        {
            value='A';
            cout<<value<<" ";
            value=value+ row+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}