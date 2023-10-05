#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int, string> p, p1;
    p = make_pair(2,"Harsh");
    cout<<"First value :- " << p.first<<" , Second value :- "<< p.second<<endl;

    // Method 2 for initialize value in p

    p1 =  {4, "Narayan"};
    cout<<"First value :- " << p1.first<<" , Second value :- "<< p1.second<<endl;

    // In pairs same operation in possible just like normal variable

    pair<int, string> k;
    k=p;
    cout<<"First value :- " << k.first<<" , Second value :- "<< k.second<<endl;

    pair<int , string>  &m=p1;

/* Why it is not possible*/

   /* &k = p1;  --> here :)
    cout<<"First value :- " << &k.first<<" , Second value :- "<< &k.second<<endl;
*/


    /*Declaration of array in pairs*/
    
    pair<int ,int> p_array[3];
    p_array[0]= {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    for(int i=0; i<3; i++){
        cout<<"First value of p_array["<<i<<"] :- " << p_array[i].first<<", second value of p_array["<<i<<"] :- "<< p_array[i].second<<endl;
    }
    return 0;
    
}