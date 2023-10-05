#include<iostream>
using namespace std;
int main()
{
    int a=2;
    switch(a)
    {
        case 1:cout<<"one"<<endl;
        break;
        case 2:cout<<"two"<<endl;
        continue;
        case 3: cout<<"Three"<<endl;
        break;
        default:cout<<"This is Default case"<<endl;

        
    }
    return 0;

}