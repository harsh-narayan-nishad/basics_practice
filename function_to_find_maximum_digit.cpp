#include<iostream>
#include<limits.h>
using namespace std;

int maxDigit(int n){
    int maxD=INT_MIN;
    while(n>0){
        int t = n%10;
        if(t>maxD){
            maxD=t;
        }
        n=n/10;
    }

    return maxD;

}
int main(){
    int a;
    cout<<"Enter a number to get it's maximum degit"<<endl;
    cin>>a;
    int maxD = maxDigit(a);

    cout<<maxD;
    return 0;


}