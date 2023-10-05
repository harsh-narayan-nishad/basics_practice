#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    private:
    int b;
    protected:
    int c;
    
    
};

class B : public A
{
    public:
    int d;
    void show()           // function inside child class
{
    c=60;
    cout<<c;
}
};


int main()
{
    /*

Its wro

    A a1;
    a1.d=30;
    cout<<a1.d<<endl;
    */
    B b1;
    b1.d=30;
    cout<<b1.d<<endl;
    
    b1.a=10;
    cout<<b1.a<<endl;
/*
    b1.b=20;
    cout<<b1.b<<endl;
*/

/*
    b1.c=40;
    cout<<b1.c<<endl;
  
*/
    b1.show();
    return 0;



}
