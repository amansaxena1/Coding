#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,loc1,loc2,p;
        string s;
        cin>>n>>k;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                s[i] = 'x';
                loc1 = i;
                break;
            }
        }
        for(int i = n-1;i>=0;i--){
            if(s[i]=='*'){
                s[i] = 'x';
                loc2 = i;
                break;
            }
        }
        int i=loc1;
        while(i<=loc2){
            for(int j=i+k;j>i;j--){
                if(s[j] == 'x'){
                    p = j;
                    break;
                }
                else if(s[j] == '*'){
                    s[j] = 'x';
                    p = j-i;
                    break;
                }
            }
            i=i+p;     
        }
        // for(int i=loc2;i>=loc1;i-=k){
        //     for(int j=i-k;j<i;j++){
        //         if(s[j] == '*'){
        //             s[j] = 'x';
        //             i = j;
        //         }
        //     }

        // }
        
        cout<<count(s.begin(),s.end(),'x')<<"\n";
    }
    return 0;
}