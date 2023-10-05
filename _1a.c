/*
Program to calculate 1/2 + 2/3 +3/4.....
*/

#include<stdio.h>
int main()
{
    int a,i;
    float sum=0;
    printf("Enter number of terms:-\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf( "%d/%d! + \t",i,i);
        sum=sum+(float)i/(i+1);
        
    } 
    printf("\nAns = %f",sum);
    return 0;
}