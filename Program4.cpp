#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    char a;
    bool low,up;
    cout<<"Enter a charcater "<<endl;
    cin>>a;

    //Checking  alphabet 

    if(!isalpha(a))
    {
        cout<<"Not a alphabet";
        return 0;
    }


    low= a=='a'|| a=='e' ||a=='i'|| a=='o'||a=='u';
    up = a=='A'|| a=='E' ||a=='I'|| a=='O'||a=='U';

    // Checking vowel and consonet

    if(low==true)
    {
        cout<<"Vowel"<<endl;
    }
    else if(up==true)
    {
        cout<<"Vowel"<<endl;
    }
    else
    {
        cout<<"Consonent"<<endl;
    }
    return 0;
    

}