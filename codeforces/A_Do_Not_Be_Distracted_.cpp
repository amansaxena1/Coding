#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint t, n;
    string s, str;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        str = s;
        llint flag = 0, c = 0;
        char ch = s[0];

        for (llint i = 0; i < s.length(); i++)
        {
            if (s[i] != ch)
            {
                ch = s[i];
                if (count(s.begin(), s.end(), s[i - 1]) != c)
                {
                    cout << "NO"
                         << "\n";
                    flag = 1;
                    break;
                }
                c = 1;
            }
            else
            {
                c++;
            }
        }
        if (flag == 0)
        {
            cout << "YES"
                 << "\n";
        }
    }
    return 0;
}