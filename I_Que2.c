#include<stdio.h>
int main()
{
    int a;
    int fun(int n);
    printf("%d",fun(5));
}
int fun(int n)
{
    int a,t;
    a=t*fun(t-1);
    return a;

}