/*
Write a program to print the prime number 
in a given range. Range should be entered by 
user.
*/

#include<stdio.h>
#include<stdbool.h>
int main()
{
    int start,end,num,count,temp;
    printf("Enter start and end value of range :- \n");
    scanf("%d%d",&start,&end);
    if(start>end)
    {
        temp=start;
        start=end;
        end=temp;
    }
    for(num=start; num<=end; num++)
    {
        bool prime=1;
        for(count=2; count<end; count++)
        {
            if(num%count==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        {
            printf("%d\t",num);
        }
    }
}