#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, ans = 0, a;
    vector<long long int> v;
    cin >> n >> m;
    for (long long int i = 0; i < m; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for (long long int i = 0; i < m - 1; i++)
    {
        if (i == 0)
        {
            ans += v[0] - 1;
        }
        if (v[i] > v[i + 1])
        {
            ans += (n - v[i] + v[i + 1]);
        }
        else if (v[i] <= v[i + 1])
        {
            ans += v[i + 1] - v[i];
        }
    }
    cout << ans << "\n";
}