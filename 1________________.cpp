#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int n= sizeof(a)/sizeof(a[0]);
    int b[n];
    for(int i=n-1, j =0 ; i>=0, j<n ; i--, j++){
        b[j]=a[i];
        cout<<b[j]<<" ";
    }
    return 0;
}