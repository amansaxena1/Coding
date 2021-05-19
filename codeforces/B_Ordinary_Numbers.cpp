#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        llint ans = 0, a = 0;
        llint dig = log10(n) + 1;
        for (llint i = 0; i < dig; i++)
        {
            a = (a * 10) + 1;

            for (llint j = 1; j <= 9; j++)
            {
                if ((a * j) <= n)
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

// 1   2   3   4   5   6   7   8   9
// 11  22  33  44  55  66  77  88  99
// 111 222