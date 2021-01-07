#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a=0, b=0, ans = 0;
    char ch1[200];
    char ch2[200];
    cin>>ch1;
    cin>>ch2;
    for(int i = 0; ch1[i] != '\0'; i++){
        if(ch1[i]>=97 && ch1[i]<=122){
            ch1[i]=ch1[i]-32;
        }
        if(ch2[i]>=97 && ch2[i]<=122){
            ch2[i]=ch2[i]-32;
        }
        if(ch1[i] > ch2[i]){
            cout<<1;
            return 0;
        }
        if(ch1[i] < ch2[i]){
            cout<<-1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
