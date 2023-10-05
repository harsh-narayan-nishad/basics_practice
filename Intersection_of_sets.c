#include<stdio.h>
int main()
{
    int size1, size2,k=0;
    printf("Enter size of first set and second set\n ");
    scanf("%d%d",&size1, &size2);

    int a[size1],b[size2],c[100];
    
    printf("Enter elemets of first set\n");

    for(int i=0; i<size1; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter elements of second set \n");

    for(int i=0; i<size2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Taking Intersection 

    for(int i=0; i<size1; i++)
    {
        for(int j=0; j<size2; j++)
        {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
        }
    }


    // Printing Intersection
    printf("Here are Intersection of two array\n");

    for(int i=0; i<k; i++){
        printf("%d  ",c[i]);
    }

    return 0;
}