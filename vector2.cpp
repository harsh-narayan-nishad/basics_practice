#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6};
    v.push_back(20);
    v.push_back(30);

    vector<int>::iterator itr;

    cout<<"Using iterator"<<endl;
    for(itr=v.begin(); itr!=v.end(); itr++)
        cout<<++*itr<<endl;                          // itr is a pointer type(*itr has needed)
    
    cout<<"Using for each loop"<<endl;
    for(int x:v)
        cout<<x<<endl;
    return 0;
}