/*
Write a program to find the left most digit of 
integral part of given floating point number.
*/

#include<stdio.h>
int main()
{
    float a=2543.265;
    int b=a,x;
    while(b>0)
    {
        x=b%10;            // ----> x
        b=b/10;
        if(b==0)
        {
            printf("%d",x); // ----> x ke terms me.
        }
    }
}