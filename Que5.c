#include<stdio.h>
int main()
{
    int ph,ch,m;
    printf("Enter the marks of physics, chemistry and maths\n");
    scanf("%d%d%d",&ph,&ch,&m);
    if(ph>40){
        printf("You are elligible for the course");
    }
    else if(ch>60)
    {
            printf("You are elligible for the course");
    }
    else if(m>60)
    {
            printf("You are elligible for the course");
    }
    else if(ph+m>150)
    {
            printf("You are elligible for the course");
    }
    else if((ph +ch +m)>200){
            printf("You are elligible for the course");
    }
    else
    {
        printf("Sorry, You are not elligible");
    }
    return 0;

}