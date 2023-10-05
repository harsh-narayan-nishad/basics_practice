#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity -> "<<v.capacity()<<endl<<endl<<endl;

    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl<<endl<<endl;

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl<<endl<<endl;

    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    /*Explanation-1 */

    cout<<"Size -> "<<v.size()<<endl;
    cout<<"Front -> "<<v.front()<<endl;
    cout<<"Back -> "<<v.back()<<endl<<endl<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
    

}