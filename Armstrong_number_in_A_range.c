/*
Write a program to find the armstrong 
number between the range.
*/

#include<stdio.h>           //---> isme range dalne ke baad
int main()                  //     code execute nahi ho raha hai.
{
    int start,end,n,sum=0,i;
    printf("Enter start and end value of range\n");
    scanf("%d%d",&start,&end);

    for(i=start;i<=end;i++)
    {
        int num1;
        num1=i;
        sum=0;
        while(num1>0)
        {
            n=num1%10;
            sum=sum + n*n*n;
            num1/=10;
            
        }
        if(i==sum)
        {
            printf("%d\t",i);
        }
        
    }
   return 0; 
}