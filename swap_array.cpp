//Love babbar bhaiya DSA series lecture 10

#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i =0; i<size ; i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    int even[10] = {2,45,5,66,4,33,2,22,6,7};
    int odd[7] = {4,56,3,21,5,6,7};

    swapAlternate(even, 10);
    printArray(even, 10);

    swapAlternate(odd, 7);
    printArray(odd, 7);


    return 0;
}