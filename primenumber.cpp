#include<iostream>
using namespace std;
int main(){
    int n;
    bool ans;
    cout<<"enter a number for checking of prime no"<<endl;
    cin>>n;
    for(int i = 2; i<n; i++){
        if(n%i==0){
         ans = 1;
        }
    }
    if(ans ==1){
        cout<<"its not a prime no"<<endl;
    }
    else{
        cout<<"its a prime no"<<endl;
    }
}