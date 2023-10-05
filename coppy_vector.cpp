#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> num1 ={1,2,3,4,5,6,7,8};
    vector<int> num2(num1.size());
    num2 = num1;
    cout<<num2.size();
    cout<<"Numbers of num2"<<endl;

    for(int i =0; i<num2.size(); i++){
        cout<<num2[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}