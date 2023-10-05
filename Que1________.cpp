#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int A[5];
    A[0]=12;
    A[1]=15;
    A[2]=25;

    // Checking size of the array

    cout<<sizeof(A)<<endl;
    
    // printing values of the array via printf

    printf("%d\n",A[2]);
    return 0;
}

/* Integers are take the size of 2 byte(In caluclations)
But in reality  integes are of 4 bytes..
*/
