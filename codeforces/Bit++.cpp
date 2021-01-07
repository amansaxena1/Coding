#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, ans = 0;
    string ch;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>ch;
        if(ch == "X++" || ch == "++X"){
            ans++;
        }
        if(ch == "X--" || ch == "--X"){
            ans--;
        }
    }
    cout<<ans;
    return 0;
}
