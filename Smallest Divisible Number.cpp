#include <iostream>
#include <algorithm>

using namespace std;
int repeat(int ans, int n, int a){
    if(ans % n != 0){
        ans = ans * a / (a - 1);
        a++;
        ans = repeat(ans, n, a);
    }
    else{
        a = 2;
        return ans;
    }
}
int main(){
    int n, ans = 1;
    cin>>n;
    for(int i = n; i >= 1; i--){
        ans = repeat(ans, i, 2);
    }
    cout<<ans;
    return 0;
}
