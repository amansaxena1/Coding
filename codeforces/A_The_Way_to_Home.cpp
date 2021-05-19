#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,d,count=0;
    string s;
    cin>>n>>d;
    cin>>s;
    int i=0,p,jump=0;
    while(i<s.length()){
        p=1;
        if(count >= d){
            jump=-1;
            break;
        }
        else if(s[i]=='0'){
            count++;
        }
        else{
            for(int j=i+d; j>i; j--){
                if(s[j] == '1'){
                    p = j-i;
                    jump++;
                    count=0;
                    break;
                }
            }
        }
        i = i + p;
    }
    cout<<jump;
    return 0;
}
