#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter start and end value of the range:-\n");
    scanf("%d%d",&start,&end);
    int i,j,count=0,n;
    for(i=start;i<=end;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            n=i%j;
            if(n==0)
            {
                count=1;
                break;
            }

        }
        if(count==0)
        {
            printf("%d\t",i);
        }
        count=0;

    }
    return 0;
}