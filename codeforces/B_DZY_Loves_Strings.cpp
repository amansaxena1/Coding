#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    string s;
    cin >> s;
    llint n, a, sum = 0;
    cin >> n;
    vector<int> v;
    for (llint i = 0; i < 26; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    for (int i = 0; i < s.size(); i++)
    {
        sum += (i + 1) * v[(s[i] - 97)];
    }
    // cout << sum;
    sort(v.begin(), v.end());
    sum += (((s.size() + 1) * n) + ((n - 1) * (n) / 2)) * v[v.size() - 1];
    cout << sum;
    return 0;
}