#include<iostream>
//#include<cctype>
using namespace std;
int main()
{
    char c;
    cout<<"Enter an alphabate"<<endl;
    cin>>c;
   
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        cout<<"Vowel"<<endl;
    }
    else if(! isalpha(c))
    {
        cout<<"Error! Not an alphabate"<<endl;

    }
    else
    {
        cout<<"Consonent"<<endl;

    }
    return 0;
}