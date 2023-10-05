/*
Write a program to find the square of a
number using function. Number should be
taken from user.
*/

#include<stdio.h>
int square(int num)
{
    return (num*num);
}
int main()
{
    int a,num;
    printf("Enter a number \n");
    scanf("%d",&num);
    a=square(num);
    printf("Square of %d=%d",num,a);

}