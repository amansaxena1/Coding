#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    llint t, n, a;
    cin >> t;
    while (t--)
    {
        llint ans = 0;
        vector<llint> v;
        cin >> n;
        for (llint i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        for (llint i = 0; i < n - 1; i++)
        {
            for (llint j = i + 1; j < n; j++)
            {
                if (v[j] - v[i] == j - i)
                {
                    ans++;
                    // cout << ans << " ";
                }
            }
        }
        cout << ans << "\n";
    }
}