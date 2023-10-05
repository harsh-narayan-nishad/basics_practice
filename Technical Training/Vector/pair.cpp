#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<string, int> p1;
// M 1 
    p1.first = "AB";
    p1.second = 210;

    cout<< p1.first<<"  "<<p1.second<<endl;

// M 2
    p1 = make_pair("CD", 512);
    cout<< p1.first<<"  "<<p1.second<<endl;

// M 3
    
}