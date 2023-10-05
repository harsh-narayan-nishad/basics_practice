#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float c;

    cout<<"Enter base and hight of triangle"<<endl;
    cin>>a>>b;
    c=(1/2.0)*(a*b);
    cout<<"Area = "<<c;
    return 0;
}

/*.
Note:-
        If we write c=(1/2)*(a*b) then answer will be 0.
        so c=(1/2.0)*(a*b);      

*/