#include<iostream>
using namespace std;
int main()
{
int x=10;
int *p;
p=&x;
cout<<x<<endl; //......> Value of will be printed
cout<<&x<<endl; //.....> Address of x will be printed
cout<<p<<endl; //----> Address of x will be printed
cout<<&p<<endl; // -------> Addres of pointer variable
cout<<*p<<endl; // ----> Data where p is pointing
return 0;
}

 