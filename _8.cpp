/*
Print this pattern:-
1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9
------------------------
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
        int value=row;
        int col=1;
        while(col<=row)
        {
            cout<<value<<" ";
            value+=1;
            col+=1;

        }
        cout<<endl;
        row+=1;
    }
    return 0;
}