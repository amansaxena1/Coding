#include <bits/stdc++.h>
using namespace std;

long long int mini(long long int n, long long int m)
{
    long long int a = n / m;
    long long int rem = n % m;
    return (rem * (a + 1) * (a) / 2) + ((m - rem) * a * (a - 1) / 2);
}
long long int maxi(long long int n, long long int m)
{
    return (n - m + 1) * (n - m) / 2;
}

int main()
{
    long long int n, m;
    cin >> n >> m;
    cout << mini(n, m) << " " << maxi(n, m);
}