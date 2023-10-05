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
            char value='A';
            cout<<value<<" ";
            value='A'+1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}