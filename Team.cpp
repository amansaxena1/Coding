#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0, temp, a[3];
    cin>>n;
    for(int i = 0; i < n; i++){
        temp = 0;
        for(int j = 0; j < 3; j++){
            cin>>a[j];
            temp = temp + a[j];
        }
        if(temp >= 2){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
