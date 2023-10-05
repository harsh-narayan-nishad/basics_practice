/*
Write a program to information of a book
such as Book Name, Book Prse, Book page.

*/


#include<stdio.h>
int main()
{
    struct book
    {
        char book[20];
        float rs;
        int BookPage;
    
    }v;
    printf("Enter book name:- ");
    gets(v.book);
    printf("Enter Book prise:- ");
    scanf("%f",&v.rs);
    printf("Enter page number:- ");
    scanf("%d",&v.BookPage);

    printf("Book name is \t");
    puts(v.book);
    printf("Book prise is %f \n Book prise is %d",v.rs,v.BookPage);
    return 0;
}