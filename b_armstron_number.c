#include<stdio.h>
int main()
{
    int a,i,n,temp,sum=0;
    printf("Enter any two number check armstrong\n");
    scanf("%d",&a);
    temp=a;
   while(a>0)
    {
        n=a%10;
        sum=sum+n*n*n;
        a/=10;
        
    }
    if(sum==temp)
    {
        printf("%d is armstrong number",temp);
    }
    else{
        printf("It's not a armstrong number");
    }
    return 0;
    ////
}