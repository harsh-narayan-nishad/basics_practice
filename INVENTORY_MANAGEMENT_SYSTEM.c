#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
/* 
List of global declaration are used in the applicatoin
*/

int mbox,mbxbg,mboxfg;    //To set the all the colours gfor all messege box in the application

int menutxtbgclr,menutxtfgclr,menutxtframeclr; // To set the frame amd colour's for menu item's
int sectional_symb,sectional_bgclr,sectional_fgclr; /* To set colour of menu section 1, the region arround the menu options */
int section2_symb,section2_bgclr,section2_fgclr;  /* To set the colour of the section 2, the section on the right of the menu options */
int fEdit;
int animcounter;
static struct struct_stock        // Main data base structure
{
    char itemcode[8],itemname[50];
    float itemrate,itemqty;
    int minqty;

}inv_stock;

struct  struct_bill      // Used for reorder level, which is minimum number of stocks
{
    char itemcode[8],itemname[50];
    float itemrate,itemqty,itemtot;

}item_bill[100];
char password[8];
const long int stocksize=sizeof(inv_stock);   // Stocksoize stores the size of the struct_stock
float tot_investment; 
int numItems;                                 // To count the number of stock
int bottom,column,row;                        //To allow mouse opetations in the applications on "inv_stock.dat"

FILE *dbfp;
int main(void)
{
    float issued_qty;
    char cuse_choice,code[8];
    int flag,i,itemsold;
    float getInvestmentInfo(coid);
    FILE *ft;
    int result;
    getConfiguration();   //--> What is this?
    /* Opens & set 'dpfp globally so that it is accessible from anywhere in the application*/

    dpfp=fopen("d:investoc.dat","r+");
    if(dbfp==NULL)
    {
        clrcr();
        printf("\nDatabase does not exist.Press inter key to create it,to exit press any other key.\n");
        
    }
    if(getch()==13)        //----->What does it mean?
    {
        dpfp=fopen("d:\ninvastoc.dat","w+");
        printf("\nDatabase for the application has been created.\nYou must start the application.\nPress any key to continue.\n");
        fflush(stdin); //-----> What is this?
        getch();
        exit(0);

    }
    else 
    {
        exit(0);              //----->What is the meaning of exit(0)
    }

}
/*
application controle will reach here only if the database file has been opened success-fully.
*/
if(initmouse()==0)
{
    
}

