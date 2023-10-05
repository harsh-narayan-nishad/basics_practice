#include<iostream>
using namespace std;
int main()
{
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[i - 1])
        sum= sum+ (arr[i] - arr[i - 1]);
    }
    
    cout<<sum;
    return 0;
}