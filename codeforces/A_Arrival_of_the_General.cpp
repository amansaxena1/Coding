#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, a, ans = 0, maxi = 0, temp, min = 0, flag = 0, flag1 = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    while (v[0] != *max_element(v.begin(), v.end()))
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] == *max_element(v.begin(), v.end()))
            {
                temp = v[i - 1];
                v[i - 1] = v[i];
                v[i] = temp;
                ans++;
                break;
            }
        }
    }
    while (v[n - 1] != *min_element(v.begin(), v.end()))
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == *min_element(v.begin(), v.end()))
            {
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                ans++;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}