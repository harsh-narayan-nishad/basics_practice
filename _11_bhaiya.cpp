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
    cout<<"Enter number of terms:-"<<endl;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            char ch='A'+row-1;
            cout<<ch<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;

}