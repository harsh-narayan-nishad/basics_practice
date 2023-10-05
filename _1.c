/*
Value of 1/2 + 2/3 +3/4..

*/

#include<stdio.h>
int main()
{
    int n,i;
    float k,sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=(float)i/(i+1);
        sum=sum+k;
    }
    printf("Ans = %f",sum);
    return 0;

}