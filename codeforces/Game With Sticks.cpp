#include <iostream>

using namespace std;

int main()
{
    int n, m, p, a = 0;
    cin>>n>>m;
    p = n * m;
    while(p >= 1){
        p = m * n - (m + n - 1);
        n--;
        m--;
        if(a == 0){
            a = 1;
        }
        else if(a == 1){
            a = 0;
        }
    }
    if(a == 1){
        cout<<"Akshat";
    }
    if(a == 0){
        cout<<"Malvika";
    }
    return 0;
}
