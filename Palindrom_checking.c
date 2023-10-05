/*
Write a program to check a given
number is palindrom or not.
Input should be taken by user.
*/

#include<stdio.h>
int main()
{
    int x,n,sum=0,num;
    printf("Enter a number to check palindrom no.:- \n");
    scanf("%d",&x);
    num=x;
    while(x>0)
    {
        n=x%10;
        sum=sum*10 + n;
        x=x/10;
    }
    if(num==sum)
    {
        printf(" %d is palindrome number",num);
    
    }
    else
    {
        printf("Try another number");
    }
    return 0;
}