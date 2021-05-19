#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint n, flag = 0;
    vector<llint> v;
    cin >> n;
    while (n != 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    reverse(v.begin(), v.end());
    for (llint i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            flag = 1;
            swap(v[i], v[v.size() - 1]);
            break;
        }
    }
    if (flag == 0)
    {
        cout << "-1";
    }
    else
    {
        for (llint i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
    }
    return 0;
}
