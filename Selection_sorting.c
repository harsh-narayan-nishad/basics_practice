#include<stdio.h>
int main()
{
    int end,start,i,sum,temp,n;
    printf("Enter any start and end value of the range:- ");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
        temp=i;
        sum=0;
        while(i>0)
        {
            n=i%10;
            sum=sum+n*n*n;
            i=i/10;

        }
        if(temp==sum)
        {
            printf("%d\t",temp);
            
        }
    }
    return 0;
}