#include<bits/stdc++.h>

using namespace std;

int main(){
    int i=1,n,a,c=1;
    vector<vector<int>>v(n);
    cin>>n;


    // for(int i=1;i<=n*n;i++){
    //     v.push_back(i);
    // }
    // a = ((n*n)*((n*n)+1)/2)/n;

    for(int b=1;b<=n*n;b++){
        if(i==n+1){
            c=-1;
            i--;
        }
        if(i==0){
            c=1;
            i++;
        }
        v[i].push_back(b);
        i = i + c;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}