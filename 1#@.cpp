#include<iostream>
using namespace std;
int main()
{
    int a[3][3],sum1=0,sum2=0,i,j;
    cout<<"Enter elements"<<endl;

    // Input matrices
    
    for(int i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];

        }
    }

    // Calculation for sum1

    for(i=0; i<3; i++)
    {
        sum1=sum1 + a[i][i];


    }

    // calculation for sum2

    for(i=0; i<3; i++)
    {
        for(j=2; j>=0 ; j--)
        {
            sum2= sum2 + a[i][j-i];
            break;
        }
    }

    // Showing ans

    if(sum1>sum2)
    {
        cout<<(sum1-sum2);
    }
    else
    {
        cout<<(sum2-sum1);
    }
    return 0;
}