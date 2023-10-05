#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char string[50];
    printf("Enter a string\n");
    scanf("%[^\n]",string);          //----------> formate spacifier mujhe samajh nahi aya...
    len=strlen(string);

    // logic for checking palindrome
    for(i=0;i<len/2;i++)
    {
        if(string[i]!=string[len-i-1])
          break;
    }
    if(i==len/2)
      printf("Palindromic string\n");
    else
      printf("String is not a Palindromic\n");
    return 0;
}