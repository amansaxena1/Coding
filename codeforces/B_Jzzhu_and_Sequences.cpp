#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint x, y, n;
    cin >> x >> y >> n;
    vector<llint> v;
    v.push_back(x);
    v.push_back(y);
    v.push_back(y - x);
    v.push_back(-1 * x);
    v.push_back(-1 * y);
    v.push_back(x - y);

    cout << ((v[(n % 6) - 1] % 1000000007) + 1000000007) % 1000000007;
    return 0;
}