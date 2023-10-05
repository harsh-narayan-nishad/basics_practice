/*
Write a program to find the factorial of a 
number usning recursion.
*/

#include<stdio.h>
int fact(int a);
int main()
{
    int b,c;
    printf("Enter a number to find the factorial\n");
    scanf("%d",&b);
    c=fact(b);
    printf("%d is the factorial of enterd number  ",c);
    return 0;

}
int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    else {
        return a*fact(a-1);
    }
}