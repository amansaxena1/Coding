#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main()
{
    ull int n, p, q, a, flag = 0;
    vector<ull int> v;
    cin >> n >> p;
    for (ull int i = 0; i < p; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cin >> q;
    for (ull int i = 0; i < q; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    if (v.size() == 0)
    {
        cout << "Oh, my keyboard!";
        return 0;
    }
    sort(v.begin(), v.end());
    unique(v.begin(), v.end());
    for (ull int i = 0; i < n; i++)
    {
        if (i + 1 != v[i])
        {
            cout << "Oh, my keyboard!";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "I become the guy.";
    }
    return 0;
}