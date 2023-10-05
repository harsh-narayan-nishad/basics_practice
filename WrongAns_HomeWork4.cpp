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
        char start=1;
        int col=1;
        while(col<=n)
    {
        cout<<start<<"  ";
        start+=1;
        col+=1;
    }
    cout<<endl;
    row+=1;
    }
    return 0;
}