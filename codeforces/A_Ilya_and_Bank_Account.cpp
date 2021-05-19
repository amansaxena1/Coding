#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int n;
    vector<int> v;
    cin >> n;
    if (n < 0)
    {
        n *= -1;
        while (n != 0)
        {
            v.push_back(n % 10);
            n /= 10;
        }
        reverse(v.begin(), v.end());
        int flag = 0;
        for (int i = 0; i < v.size() - 2; i++)
        {
            flag = 1;
            if (i == 0 && v[i] != 0)
            {
                cout << "-";
            }
            cout << v[i];
        }
        if (flag == 0 && v[0] != 0 && v[1] != 0)
        {
            cout << "-";
        }
        cout << min((v[v.size() - 1]), (v[v.size() - 2]));
    }
    else
    {
        cout << n;
    }
    return 0;
}