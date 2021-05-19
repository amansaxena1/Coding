#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int n, m;
    string a, b, s;
    cin >> n >> m;
    vector<string> v, u;

    for (ll int i = 0; i < m; i++)
    {
        cin >> a >> b;
        if (a.length() <= b.length())
        {
            u.push_back(a);
        }
        else
        {
            u.push_back(b);
        }
        v.push_back(a);
    }
    // for (ll int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " " << u[i] << "\n";
    // }

    for (ll int i = 0; i < n; i++)
    {
        ll int j;
        cin >> s;
        for (j = 0; j < v.size(); j++)
        {
            if (s == v[j])
            {
                break;
            }
        }
        cout << u[j] << " ";
    }

    return 0;
}