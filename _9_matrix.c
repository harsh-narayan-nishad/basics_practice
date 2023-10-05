#include<stdio.h>

int main()
{
    int i,j,a[20][20],r,c;
    printf("Enter order of matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter all the elements of the array:-\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter value of a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);

        }
    }
    printf("You have enterd the matrix:-\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d\t",a[i][j]);

        }
       printf("\n");
    }
    return 0;
   

}