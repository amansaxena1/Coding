#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a, ans = 0;
    char ch[100];
    cin>>a;
    cin>>ch;
    if(a > 1){
        for(int i=0; i < a-1; i++){
            if(ch[i] == ch[i+1]){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
