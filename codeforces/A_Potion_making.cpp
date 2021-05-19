#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, ans = 0;
        cin >> k;
        int w = 100 - k;
        if (k == 0 || k == 100)
        {
            ans = 1;
        }
        else
        {
            for (int i = 100; i >= 1; i--)
            {
                if (w % i == 0 && k % i == 0)
                {
                    ans = w / i + k / i;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}