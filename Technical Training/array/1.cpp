#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter elements of array"<<endl;

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<(5/2)+1; i++){
        swap(arr[i], arr[(5/2)-1-i]);
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}