#include<stdio.h>
int main()
{
    struct book
    {
        char book[30];
        float RS;
        int page;
    }v;
    printf("Enter book name\n");
    gets(v.book);
    printf("Enter book prise\n");
    scanf("%f",&v.RS);
    printf("Enter book page\n");
    scanf("%d",&v.page);
    printf("\n\n ------------------------------------\n");
    printf("Book name is ");
    puts(v.book);
    printf("book prise is %f\n",v.RS);
    printf("No of pages in a book are %d \n",v.page);
    return 0;


}