#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int t , n , m , x , i = 0 , j = 0;
	vector<int> v1,v2;
	
	cin>>t;
	
	while(t--){
	    
	    cin>>n>>m;
	    
	    for(i = 0; i < m ; i++){
	        cin>>x;
	        v2.push_back(x);
	    }
	    
	    for( i = 1 ; i <= n ; i++){
	        if(find(v2.begin(),v2.end(),i) == v2.end())
	            v1.push_back(i);
	    }
	    
	    for(i = 0 ; i < v1.size() ; i++){
	        if(i % 2 == 0){
	            cout<<v1[i]<<" ";
	        }
	    }
	    
	    cout<<"\n";
	    
	    for(i = 0 ; i < v1.size() ; i++){
	        if(i % 2 != 0){
	            cout<<v1[i]<<" ";
	        }
	    }
	    
	    cout<<"\n";
	    
	    v1.clear();
	    v2.clear();
	}
	
	return 0;
}
