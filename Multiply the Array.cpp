#include <iostream>

using namespace std;

int main()
{
    int t, n, a, ans = 0;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        for(int j = 0; j < n; j++){
            cin>>a;
            ans = ans * a;
            if(ans == 0){
                ans = a;
            }
        }
        cout<<ans;
        ans = 0;
    }
    return 0;
}
