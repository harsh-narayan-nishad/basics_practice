/*
Write a program to print sum of 
1st integers in c.
*/

#include<stdio.h> 
int main()            //----> o/p Sum of n terms are 0 kyoo bata raha hai?
{
    int i,n,sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum + i;
        i=i+1;
    }
    printf("Sum of %d terms are %d :-",n,sum);
    return 0;
}