/*
Write a program to check a number is Armstrong or not.
Number should be taken from user.

*/

#include<stdio.h>
int main()
{
    int a,sum=0,temp,n;
    printf("Enter a number to check Armstong number\n");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        n=a%10;
        sum=sum + n*n*n;
        a=a/10;

    }
    if(temp==sum)
    {
        printf("%d is armstrong number",temp);
    }
    else
    {
        printf("Not a armstong number");
    
    }
    return 0;
}