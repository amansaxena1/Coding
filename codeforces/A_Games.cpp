#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, ans = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < 2 * n; i += 2)
    {

        for (int j = 1; j < 2 * n; j += 2)
        {
            if ((j != i + 1) && (v[i] == v[j]))
            {
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}