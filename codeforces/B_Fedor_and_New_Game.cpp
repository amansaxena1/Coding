#include <bits/stdc++.h>
using namespace std;
string to_binary(int n)
{
    string str = "";
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            str += "1";
        else
            str += "0";
    }
    return str;
}
int main()
{
    long long int n, m, k, a, check, flag = 0, ans = 0;
    string binf, bins;
    cin >> n >> m >> k;
    vector<long long int> v;
    for (long long int i = 0; i < m + 1; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    binf = to_binary(v[v.size() - 1]);
    for (int i = 0; i < v.size() - 1; i++)
    {
        check = 0;
        flag = 0;
        bins = to_binary(v[i]);
        for (int j = 0; j < binf.length(); j++)
        {
            if (binf[j] != bins[j])
            {
                check++;
            }
            if (check > k)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            ans++;
        }
    }
    cout << ans << "\n";

    return 0;
}