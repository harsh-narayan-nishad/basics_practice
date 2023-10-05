/*
write a function to interchange the two values
of two variables without using third variable
*/

#include<stdio.h>
int fun(int n);
int main()
{
    int a=5,b=7;
    b=fun(7);              // Ye dono line 
    a=fun(5);            // Execute nahi ho rahe  
    printf("a=%d,b=%d",a,b);

}

int fun(int n)
{
    if(n==5)
    {
        return 7;
    }
    else if(n==7)
    {
        return 5;
    }
}