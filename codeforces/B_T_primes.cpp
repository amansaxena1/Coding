#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    llint t, n;
    double a;
    n = 1000000;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    cin >> t;
    // cout << "aman";
    // for (llint i = 0; i < sizeof(prime) / sizeof(prime[0]); i++)
    // {
    //     cout << prime[i] << " ";
    // }

    while (t--)
    {
        int flag = 0;
        cin >> a;
        // cout << (llint)(sqrt(a)) << "\n";
        // cout << floor(sqrt(a)) << ceil(sqrt(a));
        if (prime[(int)(sqrt(a))] && floor(sqrt(a)) == ceil(sqrt(a)))
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
    return 0;
}