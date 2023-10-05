
/*
program for pow(a,b).
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Enter two number:-\n");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    printf("%d",c);
    return 0;
}