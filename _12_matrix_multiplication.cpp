#include<iostream>
using namespace std;
int main()
{
    int a[20][20],b[20][20],m[20][20],i,j,k,r1,c1,r2,c2;
    cout<<"Enter rows of 1st matrix"<<endl;
    cin>>r1;
    cout<<"Enter collumn of 1st matrix:-"<<endl;
    cin>>c1;
    cout<<"Enter all the elements of 1st matrix:-"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Enter value of "<<i<<" "<<j<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"Enter rows of 2nd matrix"<<endl;
    cin>>r2;
    cout<<"Enter collumn of 2nd matrix:-"<<endl;
    cin>>c2;
   if(c1==r2)
   {
     
    cout<<"Enter all the elements of 2nd matrix:-"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"Enter value of"<<i<<" "<<j<<endl;
            cin>>b[i][j];
        }
    }    
   }
   else
   {
    cout<<"Please enter a valid matrix for multiplication"<<endl;
    return 0;
   }
   cout<<"Multiplication of matrix is:--"<<endl;
   cout<<"-----------------------------"<<endl<<endl;
   for(i=0;i<r1;i++)
   {
    for(j=0;j<c2;j++)
    {
        m[i][j]=0;
        for(k=0;k<c2;k++)
        {
            
            m[i][j]+=a[i][k]*b[k][i];
            cout<<m[i][j]<<"\t";
        }
    }
    cout<<endl;
   }
   return 0;
}