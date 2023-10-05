#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:-"<<endl;
    cin>>a;
    switch(a)
    {
        case 1:cout<<"sunday";
        break;
        case 2:cout<<"monday";
        break;
        case 3:cout<<"tuesday";
        break;
        case 4:cout<<"wedenesday";
        break;
        case 5:cout<<"thursday";
        break;
        case 6:cout<<"friday";
        break;
        case 7:cout<<"saturday";
        break;
        default :cout<<"Enter a valid day number:-";
        break;

    }
    return 0;
}