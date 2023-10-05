
/*
What will be the out put of the following
*/

#include<stdio.h>
int main()
{
    int a=2;
    int func(int);
    printf("%d",func(a));
    return 0;
}

int func(int n)
{
    if(n>0)
    {

        return func(--n) + 10;
    }
    else
    {
        return 0;
    }
}