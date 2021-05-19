#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll int n, m, a, min;
    cin >> n >> m;
    vector<ll int> v;
    for (ll int i = 0; i < m; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    min = v[n - 1] - v[0];
    for (ll int i = 0; i < v.size() - n + 1; i++)
    {
        // cout << i << " ";
        if (min > v[i + n - 1] - v[i])
        {
            min = v[i + n - 1] - v[i];
        }
    }

    cout << min;
    return 0;
}
// 5 7 10 10 12 22