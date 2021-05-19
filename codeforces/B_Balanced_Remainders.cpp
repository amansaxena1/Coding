#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,c0=0,c1=0,c2=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a%3==0){
                c0++;
            }
            else if(a%3==1){
                c1++;
            }
            if(a%3==2){
                c2++;
            }
        }
        int ans = 0;
        while(!(c0 == c1 && c1 == c2)){
            if(c0-c1>=1){
                c0--;
                c1++;
                ans++;
            }
            else if(c1-c2>=1){
                c1--;
                c2++;
                ans++;
            }
            else if(c2-c0>=1){
                c2--;
                c0++;
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
}