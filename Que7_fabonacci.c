/*
Write a program to print the fibonacci series.
Number of terms should be taken form user.
*/

#include<stdio.h>
int main()
{
    int n,i,a1=0,a2=1,a3;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",a1);

    }
    if(n==2)
    {
        printf("%d %d",a1,a2);
    }
    if(n>2){
        printf("%d\t%d\t",a1,a2);
        for(i=1;i<=(n-2);i++)
    {
        a3=a1+a2;
       
        a1=a2;
        a2=a3;
        printf("%d\t",a3);
        

    }


    }
    return 0;
    
}