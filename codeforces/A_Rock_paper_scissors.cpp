#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b>>c;
    if((a =="rock" && b == "scissors" && c =="scissors" ) || (a == "paper" && b =="rock" && c =="rock") || (a =="scissors" && b == "paper" && c == "paper")){
        cout<<"F";
    }
    else if((b =="rock" && a == "scissors" && c =="scissors" ) || (b == "paper" && a =="rock" && c =="rock") || (b =="scissors" && a == "paper" && c == "paper")){
        cout<<"M";
    }
    else if((c =="rock" && a == "scissors" && b =="scissors" ) || (c == "paper" && a =="rock" && b =="rock") || (c =="scissors" && a == "paper" && b == "paper")){
        cout<<"S";
    }
    else{
        cout<<"?";
    }
    return 0;
}