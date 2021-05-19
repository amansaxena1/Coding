#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, q, l, r;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        string s;
        cin >> s;
        for (int i = 0; i < q; i++)
        {
            int flag = 0;
            cin >> l >> r;
            for (int i = 0; i < l - 1; i++)
            {
                if (s[i] == s[l - 1])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag != 1)
            {
                for (int i = r; i < n; i++)
                {
                    if (s[i] == s[r - 1])
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }
    return 0;
}