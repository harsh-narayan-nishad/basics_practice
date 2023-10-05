#include<iostream>
using namespace std;
int main(){
    char start = 'a';
    char mapping[280] = {0};
    string key = "the quick brown fox jumps over the lazy dog";

    for(auto ch:key){
        if(ch!= ' ' && mapping[ch] == 0){
            mapping[ch] = start;
            start++;
        }
        cout<<int(ch)<<endl;
        cout<<mapping[ch]<<endl;
    }
    return 0;
} 