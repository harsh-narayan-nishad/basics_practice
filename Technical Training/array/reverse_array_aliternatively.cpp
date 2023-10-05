#include<iostream>
using namespace std;
int swapAliter(int arr[6]){
    int i;

    while(i<6){
        swap(arr[i],arr[i+1]);
        i+=2;
    }

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] ={1,2,3,4,5,6};

    swapAliter(arr);
    return 0;
}