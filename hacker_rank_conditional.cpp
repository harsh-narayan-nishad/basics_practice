/*
Program:
Enter a number n<=9 && n>==1 then print one for "1" and two for "2" and so on.....
If number is greater than nine then print "Greater than 9".
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a non-Zero possitive number:-"<<endl;
    cin>>n;
    if(n<=0)
    {
        cout<<"Enter a valid number:-";
    }
    else if(n>=1 && n<=9)
    {
        switch(n)
        {
            case 1:cout<<"one";
            break;
            case 2:cout<<"two";
            break;
            case 3:cout<<"three";
            break;
            case 4:cout<<"four";
            break;
            case 5:cout<<"five";
            break;
            case 6:cout<<"six";
            break;
            case 7:cout<<"seven";
            break;
            case 8:cout<<"eight";
            break;
            case 9:cout<<"nine";
            default: break;

        }
    }
    else if(n>9)
    {
        cout<<"Greater than 9";
    }
   
    return 0;
}