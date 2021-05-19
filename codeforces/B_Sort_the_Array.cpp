#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int n, a, flag1 = 0, flag2 = 0, start = 0, last = 0;
    cin >> n;
    vector<ll int> v, u;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
        u.push_back(a);
    }
    sort(u.begin(), u.end());

    for (ll int i = 0; i < v.size(); i++)
    {
        if (v[i] != u[i] && flag1 == 0)
        {
            start = i;
            flag1 = 1;
        }
        if (v[v.size() - i - 1] != u[v.size() - i - 1] && flag2 == 0)
        {
            last = v.size() - i - 1;
            flag2 = 1;
        }
    }
    reverse(v.begin() + start, v.begin() + last + 1);
    // for (ll int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // for (ll int i = 0; i < v.size(); i++)
    // {
    //     cout << u[i] << " ";
    // }

    for (ll int i = 0; i < v.size(); i++)
    {
        if (u[i] != v[i])
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes"
         << "\n";
    cout << start + 1 << " " << last + 1;

    return 0;
}