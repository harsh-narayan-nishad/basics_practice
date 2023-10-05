/*
program to check even or odd 
with the help of ternary operator
*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number to check even/odd \n");
    scanf("%d",&a);
    (a%2==0)?printf("Even number"):printf("Odd number");
    return 0;
}