/*
Printing all the array elements.\
*/
#include<iostream>
using namespace std;
int main()
{
    int A[10]={0};
    // Printing all the elements using the loop.

    for(int i=0;i<=9;i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    // if
 
    int B[10]={2,4,6,8,10,12};
       for(int i=0;i<=9;i++)
    {
        cout<<B[i]<<"\t";
    }

    // Method 2

    cout<<endl;
    
    for( int x:B)
    {
        cout<<x<<"\t";
    }
}