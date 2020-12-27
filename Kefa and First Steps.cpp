#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long long a, b;
    cin>>a>>b;
    cout<<((a % 1000000007) + (a % 1000000007)) % 1000000007 ;
    return 0;
}
