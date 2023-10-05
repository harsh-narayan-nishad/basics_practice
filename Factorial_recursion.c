#include<stdio.h>
int fun(int a);
int main()
{
    int  a;
    printf("Enter a number to find it's factorial using recursion:-\n");
    scanf("%d",&a);
    printf("%d\t",fun(a));
    return 0;
}
int fun(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*fun(a-1);
    }
}