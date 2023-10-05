#include<stdio.h>
int main()
{
    int num,temp,sum=0,n;
    printf("Enter a number to chek armstrong number\n");
    scanf("%d",&num);
    temp=num;
   
    while(num>0)
    {
        n=num%10;
        sum=sum+n*n*n;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("%d is a armstrong number:- \n",temp);
    }
    else
    {
        printf("Try another number:-");
    }
    
    return 0;
}