/*
write a program to check a given number is 
palindrome number or not?
*/

#include<stdio.h>
int main()
{
    int a,sum=0,n,temp;
    printf("Enter a number to check palindrome :- \n ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        n=a%10;
        sum=sum*10 + n;
        a/=10;
    }
    if(temp==sum)
    {
        printf("%d is palindrome number :-",temp);
    }
    else
    {
        printf("Try another number :- ");
    }
    return 0;
}