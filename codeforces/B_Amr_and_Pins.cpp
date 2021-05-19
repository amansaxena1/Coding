#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint r, x, y, a, b;
    cin >> r >> x >> y >> a >> b;
    cout << ceil(sqrt(pow((x - a), 2) + pow((y - b), 2)) / (2 * r));
    return 0;
}