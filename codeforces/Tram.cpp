#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, a[1000], b[1000], ans = 0, t = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i]>>b[i];
        if(i == 0){
            t = b[i];
        }
        t = t - a[i];
        if(t > ans){
            ans = t;
        }
        if(i != 0){
            t = t + b[i];
        }
        if(t > ans){
            ans = t;
        }
    }
    cout<<ans;
    return 0;
}
/*10
0 5
1 7
10 8
5 3
0 5
3 3
8 8
0 6
10 1
9 0
*/
