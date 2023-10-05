/*
Print 
D
C D
B C D
A B C D
-------------
Doubt:
D 
C C
B B B
A A A A
-----------
Why.
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
            char start='A'+n-row;
            cout<<start<<" ";
            start=start+1;
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}