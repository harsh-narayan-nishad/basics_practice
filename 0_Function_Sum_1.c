/*
Write a program to find the sum of the series
1/2 + 2/3 + 3/4 + ........
*/

#include<stdio.h>    // -----> Sum of series 0 bata raha hai. After running the code.
int main()
{
    float sum=0,n;
    int i,x;
    for(i=1;i<=5;i++)
    {
        n=(float)i/(i+1);
        sum=sum + n;
         printf("Sum of series is %f\n",sum);
    }
   
}