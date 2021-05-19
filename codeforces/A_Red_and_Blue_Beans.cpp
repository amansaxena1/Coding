#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint t;
    cin >> t;
    while (t--)
    {
        llint a, b, c;
        cin >> a >> b >> c;
        if ((float)max(a, b) / (float)min(a, b) <= (float)c + 1)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}