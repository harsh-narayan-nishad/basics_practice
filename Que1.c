#include<stdio.h>


int main()
{
    int a,b;
    int fun(int a);
    printf("Enter a number\n");
    scanf("%d",&a);
    b=fun(a);
    printf("Square of %d=%d",a,b);
}
int fun(int a)
{
    
    return a*a;
}