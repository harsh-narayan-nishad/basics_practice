/*
Write a program to print sum of 
1st integers in c.
use for loop
*/

#include<stdio.h> 
int main()          
{
    int i,n,sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
    sum=sum+i;
   }
   printf("%d",sum);
}