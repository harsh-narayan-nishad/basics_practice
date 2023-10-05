/*
Write a c program to implement insetion and deletion operation in an array
using function.
*/

#include<stdio.h>
int main(){
    //Insertion

    int insertElement(int arr[], int elements, int KeyToBeInserted , int size){

        if(elements>= size)
        {
            return elements;
        }
        arr[elements]=keyToBeInserted;
        return (elements + 1);
    }

    // Deletion

    int deleteElement(int arr[], int element, int position, int i){
        int k=0;
        int a;
        for(i=0; i<position; i++)
        {
            if(arr[i]== element){
                a=i;
                k++;
            }
        }
        if(k>0)
        printf("element found");
        for(i=a; i<position; i++)
        {
            arr[i]=arr[i+1];
        }
        if(k=0){
            printf("Elements not found");
        }

        return element;
    }

    // Program for insertion

    int position, insert,i;
    int array[20];
    int size= sizeof(array)/sizeof(array[0]);
    printf("Enter the number of element you want to enter = \n");
    scanf("%d",&position);
    printf("Enter the number of elements in the array = \n");
    for(i=0 ; i<position; i++)
    scanf("%d",&array[i]);
    printf("\n Before Insertion: ");
    for(i=0; i<position; i++);
    scanf("%d",&array[i]);
    printf("Enter the element you want to enter = \n ");
    scanf("%d",&insert);
    printf("\n After insertion: ");
    for(i=0; i<position; i++)
    {
        printf("%d",array[i]);

        // Program for deletion

        int element;

        printf("\n\n Enter the elements you want to delete = \n");

        scanf("%d",&element);
        element= deleteElement(array, element,position, i);
        printf("\n");
        position--;

        for(i=0; i<position; i++)
        {
            printf("%d", array[i]);
        }
        return 0;
    }

}