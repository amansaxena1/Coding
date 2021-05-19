#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint n, a;
    cin >> n;
    vector<llint> v;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    if (v.size() > *max_element(v.begin(), v.end()))
    {
    }
    return 0;
}