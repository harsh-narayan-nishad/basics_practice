/*
Write a program print number in a given range.
Range should be taken from user. 

*/

#include<stdio.h>
int main()
{
    int a,temp,n,end,start,i,num,sum;
    printf("Enter start and end value of range\n");
    scanf("%d%d",&start,&end);
    if(start>end)
    {
        temp=start;
        start=end;
        end=temp;
    }
    for(i=start; i<=end; i++)
 
    {
        num=i
        int sum=0;
        while(i>0)
    {
        n=a%10;
        sum=sum + n*n*n;
        i=i/10;

    }
    if(temp==sum)
    {
        printf("%d, ",temp);
    }
   
    
    }
    }
    return 0;
  
}