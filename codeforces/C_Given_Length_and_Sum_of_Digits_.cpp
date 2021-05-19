#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, s, dig;
    cin >> n >> s;
    dig = n;
    int maxi = 0;
    vector<int> v;
    while (dig >= 0)
    {
        for (int i = 9; i >= 0; i--)
        {
            if (i <= s || (i == s && dig == 1))
            {
                v.push_back(i);
                maxi += i * pow(10, dig - 1);
                s -= i;
                break;
            }
        }
        dig--;
    }
    cout << maxi;

    return 0;
}
