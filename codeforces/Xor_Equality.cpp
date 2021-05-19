#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int power(llint x, llint y)
{
    llint t;
    if (y == 0)
        return 1;
    t = power(x, y / 2);
    if ((y % 2) == 0)
        return ((t % 1000000007) * (t % 1000000007) % 1000000007);
    else
        return ((x % 1000000007) * (t % 1000000007) * (t % 1000000007) % 1000000007);
}

int main()
{
    llint t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n > 0)
        {
            cout << power(2, n - 1) << "\n";
        }
        else
        {
            cout << "1"
                 << "\n";
        }
    }
    return 0;
}