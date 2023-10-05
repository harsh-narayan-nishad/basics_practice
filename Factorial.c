// find factorial of a number
#include<stdio.h>
int main()
{
    int a,i,n,fact=1;
    printf("Enter a number to get factorial\n");
    scanf("%d",&a);
    n=a;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}
