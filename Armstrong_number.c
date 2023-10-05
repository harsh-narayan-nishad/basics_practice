// Write a program to check armstron of a number

#include<stdio.h>
int main()
{
    int s,x,n,sum=0;
    printf("Write a program to find armstorng of a number\n");
    scanf("%d",&s);
    x=s;
   while(s>0)
    {
        n=s%10;
        sum=sum + n*n*n;
        s=s/10;
    }
    if(x==sum)
    {
        printf("%d is a armstorng number",x);

    }
    else
    {
        printf("Try another number");
    }
    return 0;

}