#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint a, n;
    vector<llint> v, u;

    cin >> n;

    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
        u.push_back(a);
    }
    llint count = 0;
    llint flag = 0;
    sort(u.begin(), u.end());
    if (v != u)
    {
        for (llint i = 0; i < v.size() - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                flag++;
            }
            if (flag >= 2 || (v[v.size() - 1] > v[0]))
            {
                count = -1;
                break;
            }
            if (flag == 1)
            {
                count++;
            }
        }
    }
    else
    {
        count = 0;
    }
    cout << count;

    return 0;
}