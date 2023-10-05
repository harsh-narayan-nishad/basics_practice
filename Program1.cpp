#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p= new int();
    *p=10;
    delete(p);
    p= new int(4);
    delete[] p;
    cout<<p;
    return 0;
}

/*
Dynamic memory allocation

*/