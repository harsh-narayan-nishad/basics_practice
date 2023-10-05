/*
program of largest number in c
using ternary operator
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Entrt 3 number to check greatest number");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)?printf("%d is greatest number",a): break;
    (b>c && b>a)?printf("%d is greatest number",b): break;
    (c>a && c>b)?printf("%d is greatest number",c): break;]
    return 0;
    

}