/*
Print this pattern
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
----------------------
*/

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:-"<<endl;
    cin>>a;
    int i=1;
    while(i<=a)
    {
        int j=1;
        while(j<=a)
        {
            cout<<a-j+1<<"\t";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

    return 0;
}