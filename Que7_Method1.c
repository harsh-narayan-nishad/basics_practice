/*
Write a program to find the left most digit of 
integral part of given floating point number.
*/

#include<stdio.h>
int main()
{
    float a=2745.945;
    int b=a,n;
   while(b>0)
   {
    n=b%10;
 
    b=b/10;                    // ----> b 
 

    if(b<10 && b!=0)           // ----> b ke terms me.
    {
        printf("%d",b);
    }

   }
   return 0;
}