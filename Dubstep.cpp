#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a = 0, b = 0;
    char c[1000];
    cin >> c;
    for(int i = 0; c[i] != '\0'; ++i){
        if(c[i] == 'W' && c[i+1] == 'U' && c[i+2] == 'B'){
            if(i != 0 && a == 0 && b != 0){
                cout<<" ";
                a = 1;
            }
            i = i + 2;
        }
        else{
            cout<<c[i];
            a = 0;
            b = 1;
        }
    }
    return 0;
}
