#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll int n, m, a;
    cin >> n >> m;
    vector<ll int> v;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    a = 0;
    for (ll int i = 0; i < n - 1; i++)
    {
        a = max(a, (v[i + 1] - v[i]));
    }
    a = max(a, (2 * max((v[0] - 0), (m - v[n - 1]))));
    float b = (float)a;
    cout << fixed;
    cout << setprecision(10);
    cout << b / 2;

    return 0;
}