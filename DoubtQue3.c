#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,x1,x2;  //-----> Imaginary part work nahi kar raha. Ans 0 bata raha. Why?
    float real,img;
    printf("Enter the value of a,b, and c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;

        printf("Root1 =%d\n",x1);
        printf("Root2 =%d",x2);
    }
    else if(d==0)
    {
        x1=(-b)/2*a;
        x2=(-b)/2*a;

        printf("Root1 =%d\n",x1);
        printf("Root2 =%d",x2);
    }
    else 
    {
        real=(float)(-b)/2*a;
        img=(float)sqrt(d)/2*a;
        printf("real part=%f\n",real);
        printf("Imaginary part= %f",img);
        
    }
    return 0;
    
}