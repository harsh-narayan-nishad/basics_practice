/* 
Write a program to check a given number
is prime number or not.
Input shoud be taken by user.
*/

#include<stdio.h>
int main()
{
    int x,i,num1,num2 ;
    int p=0;   // ------> Sabhi number ko hi prime number bata raha hai. why?
    printf("Enter a number to check prime number\n");
    scanf("%d",&x);
    num2=x;               // ----> ise Comment karne pe bahoot bada number le raha hai. why?
    for(i=2;i<=x/2;i++)
    {
        num1=x%i;
          if(num1==0)
    {
        printf("not prime number\n");
        p=1;
      
    }
    
    }
  
    if(p==0)
    {
        printf("%d is prime number",num2);
    }

}