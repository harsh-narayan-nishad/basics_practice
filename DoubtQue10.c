/*
Write a program find the factorial of a number 
using recursion.
*/

#include<stdio.h>
int fun(int b);
int main()
{
    int a;
    printf("Enter a number to get factorial of the number");
    scanf("%d",&a);
    printf("Factorial = %d",fun(a));
    return 0;

}

int fun(int b)
{
    int b;
    return b*fun(b-1);
}

