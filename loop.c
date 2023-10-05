/*
Write a program to check how many time
loop has been executed.
*/

#include<stdio.h>
int main()
{
    int i;
    while(i<10)
    {
        printf("%d\t",i);
        i++;
    }
}

/*
Note ---
        If we not initialise itration(int i=0/1/any)
        the iteation will start from 0.

*/