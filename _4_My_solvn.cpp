
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enetr row and collumn:-"<<endl;
    cin>>r>>c;
    for(int i=1;i<=1;i++)
    {
        for(int j=1;j<=c*c;j++)
        {
            cout<<j<<" ";
            if(j%c==0)
            {
                cout<<endl;
            }
            if(j==9)
            {
                break;
            }
        }
        
    }
}