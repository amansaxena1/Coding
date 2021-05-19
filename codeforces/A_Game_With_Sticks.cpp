#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, p, chance = 0;
    cin >> n >> m;
    p = n * m;
    while (p != 0)
    {
        p = p - (n - 1) - (m - 1) - 1;
        n--;
        m--;
        chance++;
    }
    if (chance % 2 == 0)
    {
        cout << "Malvika";
    }
    else
    {
        cout << "Akshat";
    }
    return 0;
}