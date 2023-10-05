#include<iostream>
using namespace std;
int main()
{
    int a[]={2,1,4,5,7};
    for(int i=0; i<=6; i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<sizeof(a[1]);
    return 0;
}