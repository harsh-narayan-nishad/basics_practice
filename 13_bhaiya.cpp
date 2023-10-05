/*
Print this
------------
A 
B C
C D E
D E F G
E F G H I
--------------------
*/


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of terms:-"<<endl;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            char ch='A'+row+col-2;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}