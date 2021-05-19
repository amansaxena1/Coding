#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = 0;
        cin >> n;
        string s, t, r;
        cin >> s >> t;
        r = s + t;
        for (int i = 0; i < r.length(); i++)
        {
            if (count(r.begin(), r.end(), r[i]) % 2 != 0)
            {
                cout << "NO"
                     << "\n";
                a = 1;
                break;
            }
        }
        if (a == 0)
        {
            cout << "YES"
                 << "\n";
        }
    }
}