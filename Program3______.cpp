/*
for each type of loop

for(x:A)
{
    ----
    ----
    ----
}

it is used for the collection of data of the arrays.

it is also used for the collection type of data structure.
*/

#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,4,5};
    for(int x:a)
    {
        cout<<x<<endl;
    }
    return 0;
}