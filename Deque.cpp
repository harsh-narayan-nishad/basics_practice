#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(5);
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // d.pop_back();
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // d.pop_front();
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }


    /*Printing first index number*/

    cout<<"First element of the array -> "<<d.at(0)<<endl;
    cout<<"Front -> "<<d.front()<<endl;
    cout<<"Back -> "<<d.back()<<endl; 

    /*Empty function  */

    cout<<"Empty or not -> "<<d.empty()<<endl;
    cout<<"Before erase -> "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1 );
    cout<<"After erase -> "<<d.size()<<endl;

    return 0;



}