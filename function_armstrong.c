/*
Write a program to find the armstrong 
number between the range.
*/

#include<stdio.h>
void arm(int n)
{
    int i=n,sum=0;
   while(i>0)
        {
            n=i%10;
            sum=sum + n*n*n;
            i=i/10;
            
        }
        
        if(i==n) {
           printf("%d",i);
        }
            
}
int main()
{
    int start,end,n,sum=0,i;
    printf("Enter start and end value of range\n");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
       
       arm(i);
        
        
    }
    return 0;
}