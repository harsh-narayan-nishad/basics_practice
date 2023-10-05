#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int printVec(vector<int> v){
    cout<<"Size :- "<<v.size()<<endl;    // O(1) :- time complexity of v.size function 
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
}
int main()
{
    vector<int> p;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        p.push_back(x); // O(1) -> time complexity

    }
    for(int i=0; i<n; i++){
        cout<<"p["<< i <<"] " << p[i]<<endl;
    }

    cout<<"------------ Method 2 ------------------"<<endl;
    
    // Method 2: printing all vector from calling of a function

    printVec(p);


    // METHOD 2 

    vector<int> a(10);
    cout<<"Every value of vector will be field with value 0"<<endl;
    a.push_back(2);
    printVec(a);
    cout<<endl;
// Each value will be field with 4, b.size()= 4;
    cout<<"Every value of vector will be field with value 4"<<endl;
    vector<int> b(10,4);
    printVec(b);



// In vector pop function will work similerly,
// It will delete last element
// Syntax: v.pop_back();
// time complexity: O(1);


/* Copying of vector in a new vector*/
cout<<"------------ vector Copy in another vector ------------------"<<endl;

    vector<int > v2=p;
    cout<<"Elements in v"<<endl;
    printVec(v2);
    return 0;
    
}