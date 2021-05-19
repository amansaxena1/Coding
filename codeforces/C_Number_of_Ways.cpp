#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint n, a, b, c = 0, sum = 0;
    cin >> n;
    vector<llint> v;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
        v.push_back(a);
    }

    llint ans = 0;
    if (sum % 3 == 0)
    {
        a = sum / 3;
        b = 2 * sum / 3;
        sum = 0;
        for (llint i = 0; i < v.size() - 1; i++)
        {
            sum += v[i];
            if (sum == b)
            {
                ans += c;
            }
            if (sum == a)
            {
                c++;
            }
        }
    }
    cout << ans;
    return 0;
}