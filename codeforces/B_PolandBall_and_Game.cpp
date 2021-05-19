#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    string str1[n], str2[m];
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        cin >> str1[i];
    }
    sort(str1, str1 + n);
    for (int i = 0; i < m; i++)
    {
        cin >> str2[i];
    }
    sort(str2, str2 + m);
    long long int c = 0, i = 0, j = 0;
    while (!(n == 0 || m == 0))
    {
        if (c % 2 == 0)
        {
            v.push_back(str1[i]);
            i++;
        }
        else
        {
            v.push_back(str2[j]);
            j++;
        }
    }
    return 0;
}