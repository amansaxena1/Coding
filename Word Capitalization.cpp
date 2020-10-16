#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch[2000];
    cin>>ch;
    for(int i=0; ch[i] != '\0'; i++){
        if(islower(ch[0])){
            ch[0] = ch[0] -32;
        }
    }
    cout<<ch;
    return 0;
}
