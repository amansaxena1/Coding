#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    vector<llint> v;
    v.push_back(100);
    v.push_back(20);
    v.push_back(10);
    v.push_back(5);
    v.push_back(1);
    llint n, a = 0, ans = 0;
    cin >> n;

    while (n != 0)
    {
        if ((n / v[a]) > 0)
        {
            ans += (n / v[a]);
            n = n - ((n / v[a]) * v[a]);
        }
        a++;
    }
    cout << ans;
    return 0;
}