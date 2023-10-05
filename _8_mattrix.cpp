#include<iostream>
using namespace std;
int main()
{
    int i,j,a[i][j],r,c;
    cout<<"Enter order of matrix"<<endl;
    cin>>r>>c;
    cout<<"Enter all the elements of the array:-"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter value of a["<<i<<"]["<<j<<"]"<<endl;
            cin>>a[i][j];

        }
    }
    cout<<"You have enterd the matrix:-"<<endl;
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
   

}