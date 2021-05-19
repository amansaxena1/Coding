#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, a;
        vector<int> v, u;
        vector<tuple<int, int, int>> sp;
        cin >> n >> m >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        for (int i = 0; i < m; i++)
        {
            int u, v, d;
            cin >> u >> v >> d;
            sp.push_back(make_tuple(u, v, d));
        }
        for (int i = 0; i < u.size(); i++)
        {
            if (v[i] > 0)
            {
                u.push_back(1);
            }
            else
            {
                u.push_back(0);
            }
        }
        for (int i = 0; i < m; i++)
        {
            int che = 0;
            if (get<2>(sp[i]) > 0)
            {
                for (int j = get<0>(sp[i]) - 1; j < get<1>(sp[i]) - 1; j++)
                {
                    if (v[get<2>(sp[j])] < 0)
                    {
                        che = che + v[get<2>(sp[j])];
                    }
                }
                if (che < get<2>(sp[i]))
                {
                    for (int j = get<0>(sp[i]) - 1; j < get<1>(sp[i]) - 1; j++)
                    {
                        v[j] = 1;
                    }
                }
            }
        }
    }
}