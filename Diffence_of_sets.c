#include<stdio.h>
#include<stdbool.h>
#define MAX 100

bool Check(int arr[],int n, int a)
{
    for(int i=0; i<n; i++)
        if(arr[i] == a)
            return  true;
    return false;
}

void Difference(int arr1[],int arr2[], int size1, int size2)
{
    for(int i=0; i<size1; i++)
    {
        if(!Check(arr2,size2,arr1[i]))
        {
            printf("%d ",arr1[i]);
        }
        printf("\n");
    }
}

int main(){
    int size1, size2,arr1[MAX], arr2[MAX];
    printf("Enter size of set A and set B\n");
    scanf("%d%d",&size1, &size2);

    printf("Enter elements of set A\n");
    for(int i=0; i<size1; i++)
        scanf("%d",&arr1[i]);

    printf("Enter elements of set B\n");
    for(int i=0; i<size2; i++)
        scanf("%d",&arr2[i]);

    printf("\nAnswe is\n");

    Difference(arr1, arr2, size1, size2);    
}