#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter a decimal number:"<<endl;
    cin>>x;

    int result = 0, i =0;
    while (x)
    {
        int digit = x%2;
        result = result + digit*(pow(10,i));
        i++;
        x=x/2;
    }

    cout<< result;
    

}
