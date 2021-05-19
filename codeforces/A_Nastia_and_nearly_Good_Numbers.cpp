#include <bits/stdc++.h>
#define llint long long int
using namespace std;
int main()
{
    llint t;
    cin >> t;
    while (t--)
    {
        llint x, y;
        cin >> x >> y;
        if (x % y == 0 || y % x == 0)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
            cout << x << " " << x * y << " " << ((x * y) + x) << "\n";
        }
    }
    return 0;
}