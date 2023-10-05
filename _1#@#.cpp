/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

----------------------------
Print this pattern.

*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter number of rows and number of collumn:-"<<endl;
    cin>>a>>b;
    for(int i=1; i<=a; i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<j<<" ";
            if(j==b)
            {
                break;
            }
        }
        cout<<endl;
        if(i==a)
        {
            break;
        }
    }
    return 0;
}