#include<bits/stdc++.h>

using namespace std;

bool check(string str){
    if(str.length()==1 && (islower(str[0]))){
        return true;
    }
    else{
        for(int i=1;i<str.length();i++){
            if(!isupper(str[i])){
                return false;
            }
        }
    }
    return true;
}
bool check1(string str){
    for(int i=0;i<str.length();i++){
        if(!isupper(str[i])){
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    if(check(str)){
        if(str.length()==1 && (islower(str[0]))){
            str[0] = toupper(str[0]);
        }
        else if(check1(str)){
            for(int i=0;i<str.length();i++){
                str[i] = tolower(str[i]);
            }
        }
        else{
            str[0] = toupper(str[0]);
            for(int i=1;i<str.length();i++){
                str[i] = tolower(str[i]);
            }
        }
    }
    cout<<str;
    return 0;
}