/* 
Write a program find out the odd and even number
from the array elements and its count. Size of array
should be taken from user.
*/

#include<stdio.h>        //---> this program is showing miss behaviour. Execution is not happaning. Why?
int main()
{
    int i,Even_Count=0,Odd_Count=0,temp;
    int size;
    int arr[size];
    printf("Enter size of the of array\n");
    scanf("%d",&size);
    temp=size;

    //printf("Array is %d",arr[size]);
    
    for(i=0;i<size;i++)
    {
        printf("Enter a[%d]th element of array\n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            Even_Count++;
        }
        else {
            Odd_Count++;
        }
    }
    printf("Number of Even number is %d",Even_Count);
    printf("\nNumber of Odd Number is %d",Odd_Count);
    return 0;
    
}