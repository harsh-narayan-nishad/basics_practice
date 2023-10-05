/*
Write a program to find out the odd and even number from the 
array elements and its count.
*/

#include<stdio.h>
int main()
{
    int size,i,a[10];
    int Even_count=0,Odd_count=0;
    printf("Enter the size of array:\n ");
    scanf("%d",&size);
    printf("\n Enter the array elements \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            printf("E");
            printf("%d\t",a[i]);
            Even_count++;
        }
        else
        {
            printf("\nO");
            printf("%d\t",a[i]);
            Odd_count++;
        }
        
    }
    printf("Total number of Even numbers in this array is : %d\n\n",Even_count);
    printf("Total number of Odd number in this array is : %d",Odd_count);
}