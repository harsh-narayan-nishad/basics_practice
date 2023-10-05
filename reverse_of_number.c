//Write a program to reverce the number
#include<stdio.h>
int main()
{
    int a,i,n,sum=0;
    printf("Enter a number to reverse\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        n=a%10;
        sum=sum*10+n;
        a=a/10;
    }
    printf("Reverse of number is %d",sum);
}