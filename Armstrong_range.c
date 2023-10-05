/*
Write a program to calculate the armstong number in a range.
Range should be taken from user.
*/

#include<stdio.h>
int main()
{
    int start,end,i,n,sum,temp;
    printf("Enter the start and end value of range:-\n");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
        sum=0;
        temp=i;
        while(temp>0)
        {
            n=temp%10;
            sum=sum+n*n*n;
            temp=temp/10;

        }
        if(sum==i)
        {
            printf("%d\t",i);
        }
    }
    return 0;

}
