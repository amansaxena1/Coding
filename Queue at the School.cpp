#include <cctype>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int n, t, ind = 0;
    string ch;
    cin>>n>>t;
    cin>>ch;
    for(int i = 0; i < t; i++){
        for(int j = ind; j < n-1; j++){
            if(ch[j] == 'B' && ch[j+1] == 'G'){
                ch[j] = 'G';
                ch[j+1] = 'B';
                j++;
            }
        }
    }
    cout<<ch;
    return 0;
}
