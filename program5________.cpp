#include<iostream>
using namespace std;
int main()
{
    char a[5]={'A',66,'C',68};
    for(auto x:a)
    {
        cout<<x<<endl;

    }

    for(int x:a)
    {
        cout<<x<<endl;
    }

    // it will be same as auto

    for(char x:a)  //-----> x:a means x in a.
    {
        cout<<x<<endl;

    }
    return 0;
}