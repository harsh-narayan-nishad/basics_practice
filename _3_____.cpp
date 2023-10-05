/*
Method 2 for que 2.
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter rows and collumn"<<endl;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<b-j+1<<"\t";
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