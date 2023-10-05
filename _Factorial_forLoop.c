/*
Write a program to get factorial of a
number. number should be entered by user.
*/

#include<stdio.h>
int main()
{
   long int fact=1,i,n;   //---> 8 se factoral sahi nahi bata raha hai. Ye 
                          //     0 ko nahi dekh pa raha(Calculation galat bata raha)
    printf("Enter any number to get its factorial :- \n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("Factoral= %d",fact);
}