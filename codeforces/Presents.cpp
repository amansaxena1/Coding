#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[200], b[200];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i+1) == a[j]){
                cout<<j+1<<" ";
            }
        }
    }
    return 0;
}
