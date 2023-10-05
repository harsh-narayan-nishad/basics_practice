#include<stdio.h>
int main()
{
    int a,n,i,count=0;
    printf("Enter a number to check prime:-\n");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        n=a%i;
        if(n==0)
        {
            printf("not a prime number.");
            count=1;
            break;
        }
        
    }
    if(count==0)
    printf("Prime number.");
    return 0;



}