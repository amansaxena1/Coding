#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll int a, b, c;
    cin >> a >> b >> c;
    ll int ans = a + b + c;
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));
    ans = max(ans, a * b * c);
    cout << ans;
    return 0;
}