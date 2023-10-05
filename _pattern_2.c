#include<stdio.h>
int main()
{
    int n=4,i,j; 
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)       //------> ysha maine i<=4 nahi i=4 likha tha. Because bewkufi.
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
}