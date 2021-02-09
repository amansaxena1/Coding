#include<bits/stdc++.h>
using namespace std;
 
vector<vector<int>> tree;
int n;

int solve(int node, int par, int task){
      int a=0;
      int ans=0;
      
      a = tree[node].size() - count(tree[node].begin(), tree[node].end(), par);
      if(a == 0){
            return task;
      }
      else if(task%a == 0){
            for(int child:tree[node]){
                  if(child != par){
                         ans += solve(child,node,task/a);
                  }
            }
      }
      return ans;
}
 
int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);
      
      int x,q,node,t,ans=0;
      vector<pair<int,int>>v;
      cin >> n;
      tree.resize(n+1);
      v.push_back(make_pair(1,-1));
      for(int i = 0; i < n-1; i++){
            cin >> x;
            tree[x].push_back(i+2);
            tree[i+2].push_back(x);
            v.push_back(make_pair(i+2,x));
      }
      
      cin>>q;
      for(int i = 0; i < q; i++){
            cin>>node>>t;
            cout<<t-solve(node,v[node-1].second,t)<<"\n";
      }
   return 0;
}