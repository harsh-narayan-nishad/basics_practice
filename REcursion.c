#include<stdio.h>
int fact(int a);
int main()
{
    int b,c;
    printf("Enter a number");
    scanf("%d",&b);
    c=fact(b);
    printf("Factorial is %d",c);
}
int fact(int a)
{
    if(a==1)
    {
        return 1;
    }
    else{
        return (a*fact(a-1));
    }
}