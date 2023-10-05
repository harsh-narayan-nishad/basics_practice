/*
Write a program to check a number is 
palindrome or not. Number should be
inputed by user.
*/

#include<stdio.h>
int main()
{
    int a,temp,n,sum=0;
    printf("Enter a number to chek palindrome no\n");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        n=a%10;
        sum=sum*10 + n;
        a=a/10;

    }
    if(temp==sum)
    {
        printf("%d is palindrome number",temp);
    }
    else
    {
        printf("Not a palindrome number");
    }
return 0;

}