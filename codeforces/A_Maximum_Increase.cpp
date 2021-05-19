#include <bits/stdc++.h>
#define llint long long int
using namespace std;
int main()
{
    llint n, a, maxi = 1, count;
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    count = 1;
    for (llint i = 0; i < n - 1; i++)
    {
        if (v[i + 1] > v[i])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        maxi = max(count, maxi);
    }
    cout << maxi;

    return 0;
}