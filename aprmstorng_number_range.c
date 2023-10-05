#include<stdio.h>
int main()
{
    int end,start;
    printf("Enter start and end value of the range:-\n");
    scanf("%d%d",&start,&end);
    int sum,n,temp;
    for(int i=start;i<=end;i++)
    {
        sum=0;
        temp=i;
        while(i>0)
        {
            n=temp%10;
            sum=sum+n*n*n;
            temp=temp/10;
        }
        if(i==sum)
        {
            printf("%d\t",temp);
        }
    }
   
}