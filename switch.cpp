#include<iostream>
using namespace std;
int main()
{
    int num;
    char num1;
    cout<<"Enter a Number "<<endl;
    cin>>num;
    cout<<"Enter a characteor"<<endl;
    cin>>num1;

    switch(num)
    {
        case 1:cout<<"One"<<endl;
               cout<<"Again one"<<endl;
            
        case '1':cout<<"This is a charactor"<<endl;
        
        switch(num1)
        {
            case '1':cout<<"You have enterd a charactor 1"<<endl;
            break;
            default:cout<<"Again this is a default case:-"<<endl;
        }
      
        
        default: cout<<"This is a default case:"<<endl;

    }
    return 0;

}