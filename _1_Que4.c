/*
Write a program to find the sum of 1/2+2/3+3/4 ...... n/(n+1)
*/

#include<stdio.h>
int main()
{
    int n,i;
    float a,sum=0.0;                    //--------> i ko int me define karne pe ans 0.00 aa raha hai. Why?
    printf("Enter number of terms \n"); // ---> reason is the type casting.
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        a=(float)i/(i+1) ;
        sum=sum+ a;

    }
    printf("sum of series is %f",sum);

}