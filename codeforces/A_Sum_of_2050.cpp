#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<ull int> v;
    for (int i = 0; i < 16; i++)
    {
        v.push_back(2050 * pow(10, i));
    }
    reverse(v.begin(), v.end());
    while (t--)
    {
        ull int n;
        cin >> n;
        int i = 0;
        int ans = 0;
        while (i < v.size())
        {
            if (n < v[v.size() - 1])
            {
                ans = -1;
                break;
            }
            else if (v[i] <= n)
            {
                ans++;
                n = n - v[i];
                i -= 1;
            }
            if (n == 0)
            {
                break;
            }
            i++;
        }
        cout << ans << "\n";
    }
    return 0;
}