#include<stdio.h>
int main()
{
    int a,x,b,n,y;
    printf("Enter value of a,x and b:-\n");
    scanf("%d%d%d",&a,&x,&b);
    printf("Enter value of n\n");
    scanf("%d",&n);
    if(n==1)
    {
        y=a*x%b;
        printf("y=%d",y);
    }
    else if(n==2)
    {
        y=a*x*2 +b*2;
        printf("y=%d",y);
    }
    else if(n==3)
{
    y=a-b*x;
    printf("%d",y);
}
else if(n==4)
{
    y=a+x/b;
    printf("y=%d",y);

}
return 0;
}