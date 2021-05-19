#include <bits/stdc++.h>

using namespace std;

int main()
{
    int flag = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            flag = 1;
            i += 2;
        }
        else
        {
            if (flag == 1)
            {
                cout << " ";
            }
            cout << s[i];
            flag = 0;
        }
    }
    return 0;
}