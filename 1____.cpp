#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str= "babbar";
    stack<char> s;
    for(int i=0; i<str.length(); i++){
        //char ctr=str[i];
        s.push(str[i]);
    }

    string ans = "";
    while(!s.empty()){
        char ch= s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<endl<<"Answer is: "<<ans<<endl;
    cout<<str.length();
    return 0;

}