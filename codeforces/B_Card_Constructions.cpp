#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int i, t, n;
    i = 2;
    ll int a = 1;
    vector<ll int> v;
    while (i < 1000000001)
    {
        i = (a * (a + 1)) + ((a - 1) * a / 2);
        v.push_back(i);
        a++;
    }
    // cout << v.size() << " ";
    reverse(v.begin(), v.end());
    cin >> t;
    while (t--)
    {
        cin >> n;
        i = 0;
        a = 0;
        while (n >= v[v.size() - 1])
        {

            while (n < v[i])
            {
                i++;
            }
            n -= v[i];
            a++;
            i--;
        }
        cout << a << "\n";
    }
    return 0;
}