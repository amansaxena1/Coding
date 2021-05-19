#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>v;
        int sum = 0;
        for(int i=0; i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n-1;i++){
            int c = min(v[i],v[i+1]);
            while((max(v[i],v[i+1])) > 2*c){
                c = 2*c;
                sum+=1;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}