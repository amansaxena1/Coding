#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int flag=0;
    cin>>s;
    vector<char>v;
    v.push_back('o');
    v.push_back('l');
    v.push_back('l');
    v.push_back('e');
    v.push_back('h');
    for(int i=0;i<s.length();i++){
        if(!v.empty() && s[i] == v.back()){
            // cout<<v.back()<<" ";
            v.pop_back();
        }
        if(v.empty()){
            cout<<"YES";
            flag = 1;
            break;
        }
    }
    if(flag != 1){
        cout<<"NO";
    }
    
    return 0;
}