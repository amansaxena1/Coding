#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint n, m, cont = 0;
    cin >> n >> m;

    if (n <= m + 1 && m <= 2 * (n + 1))
    {
        if (n == m + 1)
        {
            for (llint i = 0; i < m; i++)
            {
                cout << "01";
            }
            cout << "0";
        }
        else if (n == m)
        {
            for (llint i = 0; i < m; i++)
            {
                cout << "01";
            }
        }
        else
        {
            while (n != 0 || m != 0)
            {
                if (m > n)
                {
                    if (cont < 2)
                    {
                        cout << "1";
                        m--;
                        cont++;
                    }
                    else
                    {
                        cout << "0";
                        n--;
                        cont = 0;
                    }
                }
                else if (n == m)
                {
                    for (llint i = 0; i < m; i++)
                    {
                        cout << "01";
                    }
                    break;
                }
            }
        }
    }
    else
    {
        cout << "-1";
    }
    return 0;
}