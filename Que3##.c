/*
Write a program to find the square of a
number using function. Number should be
taken from user.
*/


#include<stdio.h>
#include<math.h>
int fun(int a);
int main()
{
    int a,b;
    printf("Enter a number \n");
    scanf("%d",&a);
    b=fun(a);
    printf("%d",b);
}
int fun(int a)
{
    return (a*a);
}