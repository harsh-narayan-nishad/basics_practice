/*
Armstrong number in a range.
*/

#include<stdio.h>
int main()
{
    int a,start,end,i,n;
    printf("Enter statr and end value of range\n");
    scanf("%d%d",&start,&end);
    for(i=start;i=end;i++)
    {
        int sum=0;
        n=i;
        while(i>0)
        {
            a=i%10;
            sum+=a*a*a;
            i=i/10;
            if(n==sum)
            {
                printf("%d\t",n);

            }

        }


    }
    return 0;
    
}