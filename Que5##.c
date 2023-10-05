/*
Write a program to find the fabonacci series.
*/
#include<stdio.h>
int main()
{
    int i,n1=0,n2=1,n3,number;
    printf("Enter the number of terms\t");
    scanf("%d",&number);
    printf("%d\t%d\t",n1,n2);
    for(i=0;i<=(number);i++)
    {
        n3=n1+n2;
        printf("%d\t",n3);
        n1=n2;
        n2=n3;


    }
}