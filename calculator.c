#include<stdio.h>
#include<math.h>

int main()
{
    int num1,num2;
    char b;
    printf("Enter operator:-\n");
    scanf("%c",&b);
    printf("Enter two operator:-\n");
    scanf("%d%d",&num1,&num2);
    switch(b)
    {
        case '+': printf("%d=%d+%d",num1+num2,num2,num1);
        break;
        case '-':printf("%d=%d-%d",num1-num2,num1,num2);
        break;
        case '*':printf("%d=%d*%d",(num1) *(num2),num2,num1);
        break;
        case '/':printf("%d=%d/%d",num1/num2,num2,num1);
        break;
        case '%':printf("%d=%d (%) %d",num1%num2,num1,num2);
        break;

    }
    return 0;

}