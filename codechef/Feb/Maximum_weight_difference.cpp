#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int t, k,n,i,temp=0,son=0,chef=0,total=0,x;
	vector<long long int> v;
	cin>>t;
	while(t--){
      total=0,son=0,chef=0;
	    cin>>n>>k;
	    for(i=0;i<n;i++){
	        cin>>x;
	        v.push_back(x);
	        total += x;
	    }
	    sort(v.begin(),v.end());
	    temp = n - k;
	    if(temp > k){
          temp = k; 
       }
	        for(i=0;i<temp;i++)
	        {
	           son += v[i];
	        }  
	        chef = total - son;
	        cout<<(abs(chef-son))<<"\n";
	   v.clear();
	}
	return 0;
}