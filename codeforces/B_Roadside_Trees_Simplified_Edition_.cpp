#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint n, a, time = 0;
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    time += n;
    time += n - 1;
    // cout << time << " ";
    time += v[0];
    // cout << time << " ";
    for (llint i = 0; i < v.size() - 1; i++)
    {
        time += abs(v[i] - v[i + 1]);
        // cout << time << " ";
    }
    cout << time;

    return 0;
}