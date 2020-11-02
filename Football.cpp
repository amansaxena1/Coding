#include <iostream>

using namespace std;

int main()
{
    int b = 0;
    char a[200];
    cin>>a;
    for(int i = 1; a[i] != '\0'; i++){
        if(a[i-1] == a[i]){
            b++;
            if(b == 6){
                cout<<"YES";
                return 0;
            }
        }
        else{
            b = 0;
        }
    }
    cout<<"NO";
    return 0;
}
