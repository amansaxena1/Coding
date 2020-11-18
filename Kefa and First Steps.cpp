#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long int n, a, b = 1;
    vector <long int> v;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        v.push_back(a);
    }
    a = 1;
    for(int i = 0; i < n-1; i++){
        if(v[i] <= v[i+1]){
            a++;
        }
        else{
            b = a;
            a = 0;
        }
    }
    cout<<b;
    return 0;
}
