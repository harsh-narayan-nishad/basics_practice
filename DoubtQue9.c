/*
PPS put QUE. 4(A)
*/

#include<stdio.h>   // ----> none of the block is executing.Why?
int main()
{
    int hard,t;
    float c;
    printf("Enter Hardness, Carbon content and tensile strength of a steel\n");
    scanf("%d%f%d",&hard,&c,&t);
    if(hard>80 && c<0.8 && t<6400)
    {
        printf("Grade 10");

    }
    else if(hard>80 && c<0.8  && t!=6400)
    {
        printf("Grade 9");

    }
    else if(c<0.8 && t<6400 )
    {
        printf("Grade 8");

    }
    else if(hard>80 && t<6400)
    {
        printf("Grade 7");

    }
    else if(hard>80 || c<0.8 || t<6400)
    {
        printf("Grade 6");
    }
    else 
    {
        printf("Grade 5");
    }
    return 0;

}