#include<stdio.h>
int main()
{
    int a,sum=0,num,temp;
    printf("Enter a number a number to check palindrome no:-\n");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        num=a%10;
        sum=sum*10 + num;
        a=a/10;
    }
    if(temp==sum)
    {
        printf("%d is palindrome number:- ",temp);
    }
    else
    {
        printf("%d is not a palindrome number:- ",temp);
    }
    return 0;
}