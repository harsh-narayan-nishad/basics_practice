#include<iostream>
using namespace std;
int main(){
    float sum=0;
    
    for(int i = 1 ; i<=5; i++){
       float digit = i/(i+1);
        sum+= digit;
    } 
    cout<<sum<<endl;
}