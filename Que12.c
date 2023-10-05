/* 
Write a program find out the odd and even number
from the array elements and its count.
*/

#include<stdio.h>
int main()
{
    int i,Even_Count=0,Odd_Count=0;
    int arr[10];
    printf("Enter all the elements of array\n");
    for(i=0;i<10;i++)
    {
        printf("Enter a[%d]th element of array\n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
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