/*
What will be the output of the 
following code?
*/

#include<stdio.h>
int main()
{
    int a=5,b=6;
    printf("%d\t",a=b);        // a=6
    printf("%d\t",a==b);       
    printf("%d\t%d",a,b);
    return 0;
}

/* LEARNING:

a=5,b=6

After assing a value like a=b,
uske baad wale lines me compiler 
a=6 hi padhega.

*/