#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,q,m;
        cin>>n>>q>>m;
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int b[1000001] = {};
        map<pair<long long int,long long int>,long long int>mp;
        while(q--){
            long long int l,r;
            cin>>l>>r;
            --l;--r;
            if(a[l]>m){
                continue;
            }
            else if(a[l]<=m && a[r]>m){
                b[a[l]]++;
                b[m+1]--;
            }
            else if(a[r]<=m){
                b[a[l]]++;
                b[m+1]--;
                mp[{a[l],a[r]}]++;
            }
        }
        for(auto x:mp){
            long long int k = x.first.first;
            long long int p = x.first.second;
            long long int l = x.second;
            b[p+k] -= l;
            b[p+2*k] += l;
            long long int c = p + 2*k;
            while(c+p <= m){
                c += p;
                b[c] -= l;
                b[c+k] += l;
                c += k;
            } 
        }   
        long long int mx = 0;
        for(long long int i=1;i<=m;i++){
            b[i] += b[i-1];
            mx = max(mx,b[i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}