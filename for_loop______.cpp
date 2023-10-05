#include<iostream>
using namespace std;
int main()
{
    int a,b,temp,j;
    cout<<"Enter any two number:-"<<endl;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        temp=i;   
        switch(temp)
        {
            case 1:cout<<"one"<<endl;
            break;
            case 2:cout<<"two"<<endl;
            break;
            case 3:cout<<"three"<<endl;
            break;
            case 4:cout<<"four"<<endl;
            break;
            case 5:cout<<"five"<<endl;
            break;
            case 6:cout<<"six"<<endl;
            break;
            case 7:cout<<"seven"<<endl;
            break;
            case 8:cout<<"eight"<<endl;
            break;
            case 9:cout<<"nine"<<endl;
            break;
           
          //  cout<<temp<<"\t";
        }
    }
    for(j=a;j<=b;j++)
    {
        if(j<=9 && j%2==0)
            {
                cout<<"even"<<endl;
            }
        if(j<=9 && j%2!=0)
            {
                cout<<"odd"<<endl;
            }
    }
    
    if(a>9 && a%2==0)
    {
        cout<<"even"<<endl;
    }
 /*   
    if(b>9 && b%2!=0)
    {
        cout<<"odd"<<endl;
    }
*/
    
    return 0;
}