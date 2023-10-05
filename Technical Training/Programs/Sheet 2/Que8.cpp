#include<iostream>
using namespace std;
int main()
{
    int y,m;
    cout<<"Enter year"<<endl;
    cin>>y;
    cout<<"Enter month:-"<<endl;
    cin>>m;
    if(y%4==0)
    {
        switch(m)
        {/*
            case 1 || 3 || 5 || 7 || 8 || 10 || 12: cout<<"31 days in "<<m<<" month"<<endl;
            break;
            case 2: cout<<"29 days in 2nd month";
            break;
            case  4 || 6 || 9 || 11:cout<<"30 days in "<<m<<" month";
            break;
            */
           case 1: cout<<"31 days in 1st month"<<endl;
           break;
           case 2: cout<<"29 days in 2nd month"<<endl;
           break;
           case 3: cout<<"31 in 3rd month"<<endl;
           break;
           case 4: cout<<"30 days in 4th month"<<endl;
           break;
           case 5: cout<<"31 days in 5th month"<<endl;
           break;
           case 6: cout<<"30 days in 6th month"<<endl;
           break;
           case 7: cout<<"31 days in 7th month"<<endl;
           break;
           case 8: cout<<"31 days in 8th month"<<endl;
           break;
           case 9: cout<<"30 days in 9th month"<<endl;
           break;
           case 10: cout<<"31 days in 10th month"<<endl;
           break;
           case 11: cout<<"30 days in 10th month"<<endl;
           break;
           case 12 : cout<< "31 days in 12th month"<<endl;
           

        }
    }
    else
    {
         switch(m)
        {
            /*
            case 1 || 3 || 5 || 7 || 8 || 10 || 12: cout<<"31 days in "<<m<<" month"<<endl;
            break;
            case 2: cout<<"28 days in 2nd month";
            break;
            case  4 || 6 || 9 || 11:cout<<"30 days in "<<m<<" month";
            break;
            */
           case 1: cout<<"31 days in 1st month"<<endl;
           break;
           case 2: cout<<"28 days in 2nd month"<<endl;
           break;
           case 3: cout<<"31 in 3rd month"<<endl;
           break;
           case 4: cout<<"30 days in 4th month"<<endl;
           break;
           case 5: cout<<"31 days in 5th month"<<endl;
           break;
           case 6: cout<<"30 days in 6th month"<<endl;
           break;
           case 7: cout<<"31 days in 7th month"<<endl;
           break;
           case 8: cout<<"31 days in 8th month"<<endl;
           break;
           case 9: cout<<"30 days in 9th month"<<endl;
           break;
           case 10: cout<<"31 days in 10th month"<<endl;
           break;
           case 11: cout<<"30 days in 10th month"<<endl;
           break;
           case 12 : cout<< "31 days in 12th month"<<endl;
           
        }
    }
    return 0;
}