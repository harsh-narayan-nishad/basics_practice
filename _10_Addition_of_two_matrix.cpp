#include<iostream>
using namespace std;
int main()
{
    int a[20][20],i,j,b[20][20],r1,c1,r2,c2,sum[20][20];
    cout<<"Enter rows and column of 1st matrix"<<endl;
    cin>>r1>>c1;
    cout<<"Enter all the values of the matrix elements"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Enter value of "<<i<<" "<<j<<" "<<endl;
            cin>>a[i][j];
        }
        
    }
    cout<<"Etner rows and collumn of second matrix:-"<<endl;
    cin>>r2>>c2;
    if(r1==r2 &&c1==c2)
    {
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout<<"Enter value of "<<i<<" "<<j<<" "<<endl;
                cin>>b[i][j];
            }
        }
    }
    else
    {
        cout<<"Rows and collumn of both matrix should be equal"<<endl;
        cout<<"Try again"<<endl;
        return 0;
    }
    cout<<"Addition of both mstrix is "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            cout<<sum[i][j]<<"\t";

        }
        cout<<endl;
    }
    return 0;

}