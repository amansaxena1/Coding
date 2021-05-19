#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int count = 0;
    vector<char> v;
    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            v.push_back(str[i]);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != v[i + 1])
        {
            count++;
        }
    }
    if (v.size() > 0 && count == 0)
    {
        count++;
    }
    cout << count;
    return 0;
}