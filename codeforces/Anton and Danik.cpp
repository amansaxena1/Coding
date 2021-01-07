#include <cctype>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    long n,a=0,d=0;
    char ch;
    cin>>n;
    for(long i = 0; i < n; i++){
        cin>>ch;
        if(ch == 'A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d){
        cout<<"Anton";
    }
    else if(a == d){
        cout<<"Friendship";
    }
    else{
        cout<<"Danik";
    }
    return 0;
}
