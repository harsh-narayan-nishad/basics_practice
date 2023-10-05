#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    int a=5;
    cout<<"Data type of a is " << typeid(a).name();
    
}