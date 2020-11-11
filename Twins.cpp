#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, a, sum = 0, ans = 0, me = 0;
    vector< int > v;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        sum = sum + a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    while(me <= sum/2){
        me = me + v[n-1];
        ans++;
        n = n - 1;
    }
    cout<<ans;
    return 0;
}
