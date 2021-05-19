#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,t;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            s[i] = tolower(s[i]);
        }
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            t = t + '.' + s[i];
        }
    }
    cout<<t;
}