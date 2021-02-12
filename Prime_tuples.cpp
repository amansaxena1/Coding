#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int n = 1e6+1;
int a[n];
bool prime[n];
int c = 0;

int main() {
    
    memset(prime,true,sizeof(prime));
    
    for(int p = 2 ; p*p <= n ; p++){
        if(prime[p] == true){
            for(int i = p*p ; i <= n ; i+=p){
                prime[i] = false;
            }
        }
    }
    prime[0] = false;
    prime[0] = false;
    
    for(int i = 5 ; i <= n ;i++){
        if(prime[i] == true && prime[i-2] == true){
            c++;
            a[i] = c;
        }
        else
        {
            a[i] = c;
        }
    }
    
    int t;
    
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        cout<<a[n]<<"\n";
    }
    
	return 0;
}
