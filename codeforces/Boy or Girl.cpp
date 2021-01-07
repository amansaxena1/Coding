#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a = 0, num = 0;
    char ch[200];
    cin>>ch;
    for(int i=0; ch[i] != '\0'; i++){
        for(int j = 0; j <= i; j++){
            if(ch[j] == ch[i]){
                a++;
            }
        }
        if(a < 2){
            num++;
        }
        a = 0;
    }
    if(num % 2 != 0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
