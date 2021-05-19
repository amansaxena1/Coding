#include <bits/stdc++.h>
#define llint long long int
using namespace std;
int main()
{
    llint t, n, a;
    cin >> t;
    while (t--)
    {
        llint ans = 0;
        vector<llint> v, u;
        cin >> n;
        for (llint i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
            u.push_back(a);
        }
        sort(u.begin(), u.end());
        if (v == u)
        {
            ans = 0;
        }
        else if ((v[0] != u[0]) && (v[n - 1] != u[n - 1]))
        {
            if (v[0] == u[n - 1] && u[0] == v[n - 1])
                ans = 3;
            else
                ans = 2;
        }
        else
        {
            ans = 1;
        }
        cout << ans << "\n";
    }
    return 0;
}