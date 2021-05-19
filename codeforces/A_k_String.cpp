#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint n;
    string s, str = "";
    cin >> n;
    cin >> s;
    llint arr[26];
    memset(arr, 0, sizeof(arr));
    for (llint i = 0; i < s.length(); i++)
    {
        arr[s[i] - 97]++;
    }
    // for (llint i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % n == 0 || arr[i] == 0)
            continue;
        else
        {
            cout << -1 << "\n";
            return 0;
        }
    }
    for (llint i = 0; i < 26; i++)
    {
        for (llint j = 0; j < arr[i] / n; j++)
        {
            int a = i + 97;
            str += (char)a;
        }
    }
    for (llint i = 0; i < n; i++)
    {
        cout << str;
    }

    return 0;
}