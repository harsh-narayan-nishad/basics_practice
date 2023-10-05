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
        while(i>0)
        {
            n=i%10;
            sum=sum + n*n*n;
            i=i/10;
            
        }
        if(num1==sum)
        {
            printf("%d\t",num1);
        }
        else{
            continue;
        }
        
    }
   return 0; 
}