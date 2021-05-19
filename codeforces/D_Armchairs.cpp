#include <bits/stdc++.h>
#define llint long long int
using namespace std;
int main()
{
    llint n, a;
    cin >> n;
    vector<llint> v, u;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
        {
            v.push_back(i);
        }
        else
        {
            u.push_back(i);
        }
    }
    a = 0;
    llint ans = 0, index, mini;
    for (llint i = 0; i < u.size(); i++)
    {
        mini = abs(v[0] - u[i]);
        index = 0;
        for (llint j = 0; j < v.size(); j++)
        {
            a = min(mini, abs(v[j] - u[i]));
            if (a != mini)
            {
                index = j;
                mini = a;
            }
        }
        v.erase(v.begin() + a);
        ans += mini;
    }
    cout << ans;
    return 0;
}