#include<iostream>
using namespace std;
int main(){
    int a=5, b=6 , c=8;
  //  cout<<a&b<<endl; -> In C++, the operator precedence of the << (output stream) operator is higher than the & (bitwise AND) operator. Therefore, if you use cout << a & b << endl;, the compiler interprets it as (cout << a) & b.
    int result1 = a&b;

    cout<<result1<<endl;

// for 3 numbers
    int result2 = a&b&c;
    cout<<result2<<endl;

// RIGHT SHIFT OPERATOR
    int result3 = a>>1;
    cout<<result3<<endl;

    a=3;
    result3= a>>3;
    cout<<result3<<endl;

    return 0;
}