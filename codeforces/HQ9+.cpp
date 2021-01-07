#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    char ch[200];
    cin>>ch;
    for(int i = 0; ch[i] != '\0'; i++){
        if(ch[i] == 'H' || ch[i] == 'Q' || ch[i] == '9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
