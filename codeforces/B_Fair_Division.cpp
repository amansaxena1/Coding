#include <bits/stdc++.h>
#define llint long long int
using namespace std;

bool solve(vector<llint> v, int n, int sum)
{
    bool arr[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        arr[i][0] = true;

    for (int i = 1; i <= sum; i++)
        arr[0][i] = false;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j < v[i - 1])
                arr[i][j] = arr[i - 1][j];
            if (j >= v[i - 1])
                arr[i][j] = arr[i - 1][j] || arr[i - 1][j - v[i - 1]];
        }
    }
    return arr[n][sum];
}
int main()
{
    llint t, n, a;
    cin >> t;
    while (t--)
    {
        vector<llint> v;
        llint sum = 0;
        cin >> n;
        for (llint i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
            v.push_back(a);
        }
        if (sum % 2 == 0)
        {
            sum /= 2;
            if (solve(v, v.size(), sum))
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}