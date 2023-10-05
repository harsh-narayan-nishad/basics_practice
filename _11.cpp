/*
Write a program to print the pattern
A 
B B
C C C
D D D D
------------------

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int row,col;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            char ch='A'+row-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
