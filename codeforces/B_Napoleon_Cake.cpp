#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, cream;
        cin >> n;
        vector<int> v;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
            ans.push_back(0);
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << ans[i] << " ";
        // }
        // cout << "\n";
        int layerreq;
        for (int layer = 0; layer < n; layer++)
        {
            cream = v[layer];
            layerreq = layer;
            while (cream != 0)
            {
                if (layerreq < 0)
                {
                    break;
                }
                ans[layerreq] = 1;
                layerreq--;
                cream--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}