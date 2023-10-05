/*
Print this pattern:-
1  
2  1
3  2  1
4  3  2  1
5  4  3  2  1
----------------------
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
        while(col<=row)
        {
            cout<<row-col+1<<"  ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}