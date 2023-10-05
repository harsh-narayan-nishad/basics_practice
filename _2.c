#include<stdio.h>
int fact(int a);
int main()
{
    int n,i;
    float sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum + (float)n/fact(n);
    }
    printf("Ans = %f",sum);
}
int fact(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}