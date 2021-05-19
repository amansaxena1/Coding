#include<bits/stdc++.h>

using namespace std;

int main(){

    int a,d,n;
    vector<int>v,u;
    cin>>n;
    for(int i=0;i<n+1;i++){
        a=i;
        while(a!=0){
            d = a%10;
            if(!(d==4 || d==7)){
                break;
            }
            a=a/10;
        }
        if(a==0){
            v.push_back(i);
        }
    }
    for(int i=1;i<=n;i++){
        if(n%i==0){
            u.push_back(i);
        }
    }
    for(int i=0;i<u.size();i++){
        for(int j=0;j<v.size();j++){
            if(u[i] == v[j]){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}