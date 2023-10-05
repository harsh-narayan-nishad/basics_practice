#include<stdio.h>
int main()
{
    int num,n,sum=0,num1,sum1=0;   //--->program execute hi nahi ho raha hai, Why?
    printf("Enter a number\n");
    scanf("%d",&num);
    while(num>0)
    {
        n=num%10;
        sum=sum*10 + n;
        num=num/10;
    }
    while(sum>0)
    {
        num1=sum%10;
        
        printf("%d\n",num1);
        sum=sum/10;
    }
    return 0;   
}