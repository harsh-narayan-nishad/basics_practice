#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;   //-----> s,area ko foat me kene pe area 0 aa raha hai.Why?
    float s,area;
    printf("Enter the sides of the triangle:- \n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is \n%f",area);
    return 0;

}