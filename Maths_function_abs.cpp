/*
Note:
    a) absolute value will return possitive if number is negative.
    b) as it is if number is possitive
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a = 5, b =-2;
    float c= 5.5;
    cout<<"Absolute value of '5' and '-2' :) "<<abs(a)<<" "<<abs(b)<<endl;
    cout<<"Ceil of 5.5 -> "<<ceil(c)<<" floar value -> "<<floor(c)<<endl;
    return 0;
}