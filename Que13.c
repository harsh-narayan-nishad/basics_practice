#include<stdio.h>
int main()
{
    int a,start,end,temp,i,sum,temp2;
    printf("Enter start and end value of range:- ");
    scanf("%d%d",&start,&end);
    if(start>end)
    {
        temp=start;
        start=end;
        end=temp;
    }
    printf("Armstrong numbers are given between %d and %d\n",start,end);
    for(i=start;i<=end;i++)
    {
        temp2=i;
        while(i>0)
        {
        sum=0;
        a=temp2%10;
        sum=sum+ a*a*a;
        temp2=temp2/10;
        }
        if(sum==i)
        {
            printf("%d\t",i);
        }

    }
}