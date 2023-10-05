#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three values to chek grater number:-\n ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("Greatest number is %d",a);
    }
    else if(b>a && b>c)
    {
        printf("Greatest number is %d",b);

    }
    else if(c>a && c>b)
    {
        printf("Greatest number is %d",c);
    }
    return 0;
}