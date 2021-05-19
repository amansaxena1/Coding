#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint a, b, c;
    llint x, y, z;
    llint n;
    cin >> a >> b >> c >> x >> y >> z >> n;
    a = a + b + c;
    x = x + y + z;
    if (a % 5 != 0)
    {
        a /= 5;
        a++;
    }
    else
    {
        a /= 5;
    }
    if (x % 10 != 0)
    {
        x /= 10;
        x++;
    }
    else
    {
        x /= 10;
    }
    if (a + x <= n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}