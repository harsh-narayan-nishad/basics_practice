#include<stdio.h>
int main()
{
    int start,end,i,j,n;
    printf("Enter start and end value of range\n");
    scanf("%d%d",&start,&end);
    if(start!=1)
    {
        for(i=start;i<=end;i++)
        {
            for(j=2;j<i;j++)
            {
                n=i%j;
                if(n!=0)
                {
                    printf("%d\t",i);
                }

            }
        }
    }
}