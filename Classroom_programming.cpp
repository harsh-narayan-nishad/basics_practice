#include<iostream>
#include<array>

using namespace std;
int main()
{
    // Concept 1

    int basic[3]={1,2,3};
    array<int,4> a={1,2,3,4};
    int size=a.size();

    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }


    // Concept 2  "at - operation"

    cout<<"Element at 2nd index -> "<<a.at(2)<<endl;
    cout<<"Empty or not -> "<<a.empty()<<endl<<endl<<endl;

    cout<<"First Element -> "<<a.front()<<endl;
    cout<<"Last element -> "<<a.back()<<endl<<endl<<endl;

    /*Above programs are worked at complexity O(1)*/

}